# SLCrypt ![Mode: ECB, CBC](https://img.shields.io/badge/Mode-ECB%2C%20CBC-red) ![Padding: Null](https://img.shields.io/badge/Padding-Null-blue)
#### Description:
Class for encrypting and decrypting text using a key and an initialization vector.\
The size of the key and the initialization vector is equal `blockBytesLen`, by default it is 128 bits.\
You can set the length of block manually using `setBlockSize` method. (the length is in bits)
#### How does it work (ECB):
* Encryption:
  * We split the string into blocks, each 16 bytes
  * Generate an initialization vector (random letters, 128 bits)
  * For each byte of the string, we increment the byte\
    of the initialization vector and decrement the byte of the key
  * Add an initialization vector to the beginning of the string

* Decryption:
  * Split string and initialization vector (first 128 bits)
  * We split the string into blocks, each 16 bytes
  * For each byte of string, we decrement the byte\
    of the initialization vector and increment the byte of the key
  
