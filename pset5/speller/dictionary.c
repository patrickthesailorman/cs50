// Implements a dictionary's functionality

#include <stdbool.h>

#include "dictionary.h"

int count = 0; // Word Counter

typedef struct node
    {
       char word[LENGTH +1];
       struct node *next;
    }
    node;

    node *hashtable[27];

    int hash_function(const char*word)
    {
    // Hash on the first letter of string
    int hash = tolower(word[0]-'a');

    // return hash % SIZE;
    return hash;
    }

// Returns true if word is in dictionary else false
bool check(const char *word)
{
    // TODO
    return false;
}

// Loads dictionary into memory, returning true if successful else false
bool load(const char *dictionary)
{
    FILE *f = fopen(filename, "./dictionaries/large");
    if (f == NULL)
	{
		return false;
	} else {
    return true;
	}
	node *  head;

	while (fscanf(f, "%s", word) != EOF)
    {
       count++;

       node *new_node = malloc(sizeof(node));
       if (new_node == NULL)
       {
           unload();
           return false;
       } else
       {
           strcopy(new_node->word, word);
       }

    new_node->next = head;
    head = new_node;


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
