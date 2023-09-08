0x1A. C - Hash tables

A hash function is any function that can be used to map data of arbitrary size to fixed-size values, though there are some hash functions that support variable length output.[1] The values returned by a hash function are called hash values, hash codes, digests, or simply hashes. The values are usually used to index a fixed-size table called a hash table. Use of a hash function to index a hash table is called hashing or scatter storage addressing.

Hash functions and their associated hash tables are used in data storage and retrieval applications to access data in a small and nearly constant time per retrieval. They require an amount of storage space only fractionally greater than the total space required for the data or records themselves. Hashing is a computationally and storage space-efficient form of data access that avoids the non-constant access time of ordered and unordered lists and structured trees, and the often exponential storage requirements of direct access of state spaces of large or variable-length keys.

Use of hash functions relies on statistical properties of key and function interaction: worst-case behaviour is intolerably bad but rare, and average-case behaviour can be nearly optimal (minimal collision).[2]: 527 

Hash functions are related to (and often confused with) checksums, check digits, fingerprints, lossy compression, randomization functions, error-correcting codes, and ciphers. Although the concepts overlap to some extent, each one has its own uses and requirements and is designed and optimized differently. The hash function differs from these concepts mainly in terms of data integrity.

Overview
A hash function takes a key as an input, which is associated with a datum or record and used to identify it to the data storage and retrieval application. The keys may be fixed length, like an integer, or variable length, like a name. In some cases, the key is the datum itself. The output is a hash code used to index a hash table holding the data or records, or pointers to them.

A hash function may be considered to perform three functions:

Convert variable-length keys into fixed length (usually machine word length or less) values, by folding them by words or other units using a parity-preserving operator like ADD or XOR.
Scramble the bits of the key so that the resulting values are uniformly distributed over the keyspace.
Map the key values into ones less than or equal to the size of the table
A good hash function satisfies two basic properties: 1) it should be very fast to compute; 2) it should minimize duplication of output values (collisions). Hash functions rely on generating favourable probability distributions for their effectiveness, reducing access time to nearly constant. High table loading factors, pathological key sets and poorly designed hash functions can result in access times approaching linear in the number of items in the table. Hash functions can be designed to give the best worst-case performance,[Notes 1] good performance under high table loading factors, and in special cases, perfect (collisionless) mapping of keys into hash codes. Implementation is based on parity-preserving bit operations (XOR and ADD), multiply, or divide. A necessary adjunct to the hash function is a collision-resolution method that employs an auxiliary data structure like linked lists, or systematic probing of the table to find an empty slot.

Hash tables
Main article: Hash table
Hash functions are used in conjunction with hash tables to store and retrieve data items or data records. The hash function translates the key associated with each datum or record into a hash code, which is used to index the hash table. When an item is to be added to the table, the hash code may index an empty slot (also called a bucket), in which case the item is added to the table there. If the hash code indexes a full slot, some kind of collision resolution is required: the new item may be omitted (not added to the table), or replace the old item, or it can be added to the table in some other location by a specified procedure. That procedure depends on the structure of the hash table: In chained hashing, each slot is the head of a linked list or chain, and items that collide at the slot are added to the chain. Chains may be kept in random order and searched linearly, or in serial order, or as a self-ordering list by frequency to speed up access. In open address hashing, the table is probed starting from the occupied slot in a specified manner, usually by linear probing, quadratic probing, or double hashing until an open slot is located or the entire table is probed (overflow). Searching for the item follows the same procedure until the item is located, an open slot is found or the entire table has been searched (item not in table).


