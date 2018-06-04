// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#include "dictionary.h"

#define HASHTABLE_SIZE 5000 // bigger number runs faster

typedef struct node
{
    char word[LENGTH + 1];
    struct node *next; // Points to the next node in the linked list
}
node;

node *hashtable[HASHTABLE_SIZE];

// const int HASHTABLE_SIZE = 26; // number of buckets in the hash table
int count = 0; // Word Counter
unsigned int hash; // hash index

// Hash Function via https://study.cs50.net/hashtables modified with help from @StephanieShea
int hash_func(const char *word)
{
    hash = 0;
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        hash = (hash << 2) ^ tolower(word[i]);
    }


    return hash % HASHTABLE_SIZE; // avoids indexing into a hash table slot that does not exist
}

// Returns true if word is in dictionary else false
bool check(const char *word)
{
    hash = hash_func(word); // Get hash bucket

    node *cursor = hashtable[hash]; // Puts cursor on first node

    while (cursor != NULL)
    {
        if (strcasecmp(word, cursor->word) == 0)
        {
            // word is in dictionary
            return true;
        }
        else
        {
            // check next node
            cursor = cursor->next;
        }
    }
    return false;
}

// Loads dictionary into memory, returning true if successful else false
bool load(const char *dictionary)
{
    char word[LENGTH + 1];
    // make all hash table elements NULL
    for (int i = 0; i < HASHTABLE_SIZE; i++)
    {
        hashtable[i] = NULL;
    }

    FILE *f = fopen(dictionary, "r");
    if (f == NULL)
    {
        printf("Could not open dictionary.\n");
        unload();
        return false;
    }

    while (fscanf(f, "%s", word) != EOF)
    {
        count++;
        // hashtable[h] is a pointer to a key-value pair
        hash = hash_func(word);
        node *new_node = malloc(sizeof(node));

        if (new_node == NULL)
        {
            unload();
            return false;
        }
        else
        {
            strcpy(new_node->word, word);

            new_node->next = hashtable[hash];
            hashtable[hash] = new_node;

        }
    }

    // close dictionary
    fclose(f);
    return true;
}

// Returns number of words in dictionary if loaded else 0 if not yet loaded
unsigned int size(void)
{
    return count;
}

// Unloads dictionary from memory, returning true if successful else false
bool unload(void)
{
    for (int i = 0; i < HASHTABLE_SIZE; i++)
    {
        node *cursor = hashtable[i];
        while (cursor != NULL)
        {
            node *temp = cursor;
            cursor = cursor->next;
            free(temp);
        }
    }
    return true;
}
