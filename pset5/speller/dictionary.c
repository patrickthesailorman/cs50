// Implements a dictionary's functionality

#include <stdbool.h>

#include "dictionary.h"

unsigned int count = 0; // Word Counter

// global boolean for tracking load/unload dictionary operations
bool loaded = false;

typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

node *hashtable[HASHTABLE_SIZE];

int hash_func(const char *word)
{
    // Hash on the first letter of string
    int hash = tolower(word[0] - 'a');

    // return hash % SIZE;
    return hash % HASHTABLE_SIZE;
}

// Returns true if word is in dictionary else false
bool check(const char *word)
{
    // create char array to store copy of word
    // word is a const char* and non-read actions cannot be performed on it
    int len = strlen(word);
    char word_copy[len + 1];
    // add null terminator to end of char array
    word_copy[len] = '\0';

    // get hash value (a.k.a. bucket)
    int h = hash_func(word_copy);

    node *cursor = hashtable[h];
    while (cursor != NULL)
    {
        if (strcmp(cursor->word, word_copy) == 0)
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
    // make all hash table elements NULL
    for (int i = 0; i < HASHTABLE_SIZE; i++)
    {
        hashtable[i] = NULL;
    }

    FILE *f = fopen(dictionary, "r");
    if (f == NULL)
    {
        printf("Could not open dictionary.\n");
        return false;
    }

    node *new_node = malloc(sizeof(node));

    while (fscanf(f, "%s", new_node->word) != EOF)
    {
        count++;

        if (new_node == NULL)
        {
            unload();
            return false;
        }
        else
        {
            // hashtable[h] is a pointer to a key-value pair
            int h = hash_func(new_node->word);
            node *head = hashtable[h];

            // if bucket is empty, insert the first node
            if (head == NULL)
            {
                hashtable[h] = new_node;
            }
            // if bucket is not empty, attach node to front of list
            else
            {
                new_node->next = hashtable[h];
                hashtable[h] = new_node;
            }
        }
    }

    // close dictionary
    fclose(f);
    loaded = true;
    return true;
}

// Returns number of words in dictionary if loaded else 0 if not yet loaded
unsigned int size(void)
{
    if (!loaded)
    {
        return 0;
    }
    else
    {
        return count;
    }
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
            loaded = false;
            return true;
        }
    }

    return false;
}
