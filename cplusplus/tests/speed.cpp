
#include <iostream>

#include "SLCrypt.hpp"

/*
* Output: "> Passed in 21999 ms"
*/

int main()
{
    std::string strInput = "Hello world!";
    std::string strKey = "1234567890123456";
    std::string strOutput;

    SLCrypt::Encryption<MODE_EBC> crypt;
    crypt.setBlockSize(64);

    auto beginTick = std::chrono::high_resolution_clock::now();

    for (size_t i = 0; i < 0xFFFFF; ++i)
    {
        crypt.encryptString(strInput, strKey, strOutput);
        crypt.decryptString(strOutput, strKey, strOutput);
    }

    auto endTick = std::chrono::high_resolution_clock::now();
    auto elapsedTime = std::chrono::duration_cast<std::chrono::milliseconds>(endTick - beginTick).count();

    std::cout << "> Passed in " << elapsedTime << " ms" << std::endl;

    system("pause");
}
