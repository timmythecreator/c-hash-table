#include <stdio.h>

#include "hash_table.h"

int main() 
{
    // Create a new hash table
    ht_hash_table *ht = ht_new();

    // Insert elements
    ht_insert(ht, "key1", "value1");
    ht_insert(ht, "key2", "value2");
    ht_insert(ht, "key3", "value3");

    // Search for elements
    printf("Values of our hash table:\n");
    printf("key1: %s\n", ht_search(ht, "key1")); // Expected: "value1"
    printf("key2: %s\n", ht_search(ht, "key2")); // Expected: "value2"
    printf("key3: %s\n", ht_search(ht, "key3")); // Expected: "value3"
    printf("\nSearch for a non-existent key:\n");
    printf("key4: %s\n", ht_search(ht, "key4")); // Expected: "null" or an empty string, as key4 was not inserted

    // Delete elements
    ht_delete(ht, "key2");

    // An attempt to search for a deleted element
    printf("\nSearch for a deleted key:\n");
    printf("key2: %s\n", ht_search(ht, "key2")); // Expected: "null" or an empty string, as key2 was deleted

    // Delete the hash table
    ht_del_hash_table(ht);

    return 0;
}