#include "hash_tables.h"

/**
 *hash_table_set - adds a new element to the hash table
 *@ht: pointer to the hash
 *@key: pointer to the key
 *@value: element to be added to table
 * 
 *Return: 1 on success or 0 on failure
 */
 
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node;
    unsigned long index, size;
    
    if (ht  == NULL || key == NULL || value == NULL)
    {
        return (0);
    }
    
    size = ht->size;
    index = key_index((const unsigned char *)key, size);
    
    if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
    {
        ht->array[index]->value = strdup(value);
        return (1);
    }
    
    new_node = malloc(sizeof(hash_node_t));
    
    if (new_node == NULL)
    {
        return (0);
    }
    
    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}
