#ifndef HASH_TABLE_H
#define HASH_TABLE_H

typedef struct {
    char *key;
    char *value;
} ht_item;

typedef struct {
    int base_size;
    int size;
    int count;
    ht_item **items;
} ht_hash_table;

#define HT_PRIME_1 151
#define HT_PRIME_2 163
#define HT_INITIAL_BASE_SIZE 53

ht_hash_table *ht_new();
void ht_insert(ht_hash_table *ht, const char *k, const char *v);
char* ht_search(ht_hash_table *ht, const char *k);
void ht_delete(ht_hash_table *h, const char *k);
void ht_del_hash_table(ht_hash_table *ht);

#endif