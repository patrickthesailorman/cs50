# Questions

## What's `stdint.h`?

`Header file`. Library providing a set of typedefs that specify exact-width integer types

## What's the point of using `uint8_t`, `uint32_t`, `int32_t`, and `uint16_t` in a program?

Using clearly defined types makes the code easier to read and safer to use.
Also lets the machine know exactly how much memory to allocate.

## How many bytes is a `BYTE`, a `DWORD`, a `LONG`, and a `WORD`, respectively?

    BYTE = 8 bits = 1 byte
    DWORD= 32 bits = 4 bytes
    LONG = 32 bits = 4 bytes
    WORD = 16 bits = 2 bytes

## What (in ASCII, decimal, or hexadecimal) must the first two bytes of any BMP file be? Leading bytes used to identify file formats (with high probability) are generally called "magic numbers."

`WORD` and denotes `bfType`, which specifies the file type. It must be set to the signature word `BM (0x4D42)` to indicate bitmap

## What's the difference between `bfSize` and `biSize`?

`bfSize` specifies the size of the bitmap file in bytes.
`biSize` specifies the size of the structure in bytes.

## What does it mean if `biHeight` is negative?

If `biHeight` is negative, the bitmap is a top-down DIB (device-independent bitmap)
	and its origin is the upper left corner.

## What field in `BITMAPINFOHEADER` specifies the BMP's color depth (i.e., bits per pixel)?

TODO

## Why might `fopen` return `NULL` in lines 24 and 32 of `copy.c`?

TODO

## Why is the third argument to `fread` always `1` in our code?

TODO

## What value does line 63 of `copy.c` assign to `padding` if `bi.biWidth` is `3`?

TODO

## What does `fseek` do?

TODO

## What is `SEEK_CUR`?

TODO
