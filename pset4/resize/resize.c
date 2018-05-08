// Copies a BMP file

#include <stdio.h>
#include <stdlib.h>

#include "bmp.h"

int main(int argc, char *argv[])
{
    //  change resize factor to int
    int n = atoi(argv[1]);

    // ensure proper usage
    if (argc != 4)
    {
        fprintf(stderr, "Usage: ./resize 4 small.bmp large.bmp\n");
        return 1;
    }
    else if (n < 0 || n > 100)
    {
        fprintf(stderr, "Use positive number less than or equal to 100\n");
        return 1;
    }


    // remember filenames
    char *infile = argv[2];
    char *outfile = argv[3];

    // open input file
    FILE *inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        fprintf(stderr, "Could not open %s.\n", infile);
        return 2;
    }

    // open output file
    FILE *outptr = fopen(outfile, "w");
    if (outptr == NULL)
    {
        fclose(inptr);
        fprintf(stderr, "Could not create %s.\n", outfile);
        return 3;
    }

    // read infile's BITMAPFILEHEADER
    BITMAPFILEHEADER bf;
    fread(&bf, sizeof(BITMAPFILEHEADER), 1, inptr);

    // read infile's BITMAPINFOHEADER
    BITMAPINFOHEADER bi;
    fread(&bi, sizeof(BITMAPINFOHEADER), 1, inptr);

    // Variables for original specs
    int OGwidth = bi.biWidth;
    int OGheight = bi.biHeight;
    int  OGpadding = (4 - (OGwidth * sizeof(RGBTRIPLE)) % 4) % 4;

    // ensure infile is (likely) a 24-bit uncompressed BMP 4.0
    if (bf.bfType != 0x4d42 || bf.bfOffBits != 54 || bi.biSize != 40 ||
        bi.biBitCount != 24 || bi.biCompression != 0)
    {
        fclose(outptr);
        fclose(inptr);
        fprintf(stderr, "Unsupported file format.\n");
        return 4;
    }

    // determine padding for scanlines
    // int padding = (4 - (bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;

    // before writing to outptr- MODIFY THE HEADERS
    bi.biWidth *= n;
    bi.biHeight *= n;

    int newPadding = (4 - (bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;

    bi.biSizeImage = ((sizeof(RGBTRIPLE) * bi.biWidth) + newPadding) * abs(bi.biHeight);
    bf.bfSize = bi.biSizeImage + sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER);


    // write outfile's BITMAPFILEHEADER
    fwrite(&bf, sizeof(BITMAPFILEHEADER), 1, outptr);

    // write outfile's BITMAPINFOHEADER
    fwrite(&bi, sizeof(BITMAPINFOHEADER), 1, outptr);

        // iterate over infile's scanlines
        for (int i = 0, biHeight = abs(OGheight); i < biHeight; i++)
        {
            for (int repeat = 0; repeat < n; repeat++)
            {
                // iterate over pixels in scanline
                for (int j = 0; j < OGwidth; j++)
                {
                    // temporary storage
                    RGBTRIPLE triple;

                    // read RGB triple from infile
                    fread(&triple, sizeof(RGBTRIPLE), 1, inptr);

                    // write RGB triple to outfile
                     for (int x = 0; x < n; x++)
                     {
                        fwrite(&triple, sizeof(RGBTRIPLE), 1, outptr);
                     }
                    // set cursor back to begining
                    //  fseek(outptr, OGwidth, SEEK_SET);

                }


                // skip over padding, if any
                fseek(inptr, OGpadding, SEEK_CUR);

                // then add it back (to demonstrate how)
                for (int k = 0; k < newPadding; k++)
                {
                    fputc(0x00, outptr);
                }

                if (repeat < n-1)
                {
                    // repeat over scanline n-1 times
                    fseek(inptr, -(OGwidth * 3 + OGpadding), SEEK_CUR);
                }
            }
        }
    // }
    // close infile
    fclose(inptr);

    // close outfile
    fclose(outptr);

    // success
    return 0;
}
