#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: pointer to hash table
 * @key: key to add the element
 * @value: value to add the element
 * Return: 1 if it succeeded or 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index = 0;
    hash_node_t *bucket, *new_node;

    if (!ht || !key || !*key || !value)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    bucket = ht->array[index];

    while (bucket)
    {
        if (!strcmp(key, bucket->key))
        {
            free(bucket->value);
            bucket->value = strdup(value);
            if (!bucket->value)
                return (0);
            return (1);
        }
        bucket = bucket->next;
    }

    new_node = malloc(sizeof(hash_node_t));
    if (!new_node)
        return (0);

    new_node->key = strdup(key);
    new_node->value = strdup(value);

    if (!new_node->key || !new_node->value)
    {
        free(new_node->key);
        free(new_node->value);
        free(new_node);
        return (0);
    }

    new_node->next = ht->array[index];
    ht->array[index] = new_node;
    return (1);
}
