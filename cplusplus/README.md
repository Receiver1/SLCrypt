# SLCrypt
#### Example of usage \<C++>:
```cpp
SLCrypt::Encryption<MODE_ECB> slCrypt;
std::string key = "-128-bits-key-";

// Of string encryption:
std::string out;
slCrypt.encryptString("string", key, out);
std::cout << "Encrypted string -> " << out << "\n";

// Of string decryption:
std::string in;
slCrypt.decryptString(out, key, in);
std::cout << "Decrypted string -> " << in << "\n";
```
