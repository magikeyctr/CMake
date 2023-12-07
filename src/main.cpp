#include "SHA1.h"
#include <iostream>

int main() {
    SHA1 sha1;
    std::string input = "abcd";
    std::string hash = sha1.calculate(input);
    std::cout << "SHA-1 Hash: " << hash << std::endl;

    return 0;
}
