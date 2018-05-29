// Implements a dictionary's functionality

#include <stdbool.h>

#include "dictionary.h"

// Returns true if word is in dictionary else false
bool check(const char *word)
{
    // TODO
    return false;
}

// Loads dictionary into memory, returning true if successful else false
bool load(const char *dictionary)
{
    typedef struct node
    {
        // Marker for end of word
        bool is_word;
        // Pointers to other nodes
        struct node* children[27];
    }
    node;

    FILE *f = fopen(filename, "./dictionaries/small");
    if (f == NULL)
	{
		return false;
	} else {
    return true;
	}
}

// Returns number of words in dictionary if loaded else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return 0;
}

// Unloads dictionary from memory, returning true if successful else false
bool unload(void)
{
    // TODO
    return false;
}
