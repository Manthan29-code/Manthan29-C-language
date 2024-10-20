#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 10

// Structure to represent each entry in the hash table
struct HashTable {
    int key;
    int value;
};

// Function to initialize hash table with -1 to represent empty slots
void initHashTable(struct HashTable* table) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        table[i].key = -1;
        table[i].value = -1;
    }
}

// Function to generate a hash value using modulo operation
int hashFunction(int key) {
    return key % TABLE_SIZE;
}

// Function to insert key-value pair into the hash table using linear probing
void insert(struct HashTable* table, int key, int value) {
    int index = hashFunction(key);

    // Linear probing in case of collision
    while (table[index].key != -1) {
        index = (index + 1) % TABLE_SIZE;
    }

    table[index].key = key;
    table[index].value = value;
}

// Function to search for a value in the hash table using a key
int search(struct HashTable* table, int key) {
    int index = hashFunction(key);

    // Linear probing in case of collision
    while (table[index].key != -1) {
        if (table[index].key == key) {
            return table[index].value;
        }
        index = (index + 1) % TABLE_SIZE;
    }

    // Key not found
    return -1;
}

// Function to display the hash table
void display(struct HashTable* table) {
    printf("Hash Table:\n");
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (table[i].key != -1) {
            printf("Index %d: Key = %d, Value = %d\n", i, table[i].key, table[i].value);
        } else {
            printf("Index %d: Empty\n", i);
        }
    }
}

int main() {
    struct HashTable table[TABLE_SIZE];

    // Initialize the hash table
    initHashTable(table);

    // Inserting key-value pairs into the hash table
    insert(table, 1, 10);
    insert(table, 11, 20);
    insert(table, 21, 30);
    insert(table, 31, 40);
    insert(table, 41, 50);

    // Displaying the hash table
    display(table);

    // Searching for a key
    int key = 21;
    int value = search(table, key);
    if (value != -1) {
        printf("\nValue for key %d is %d\n", key, value);
    } else {
        printf("\nKey %d not found\n", key);
    }

    return 0;
}
