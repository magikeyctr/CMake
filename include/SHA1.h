#ifndef SHA1_H
#define SHA1_H

#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdint>
#include <vector>

class SHA1 {
public:
    std::string calculate(const std::string& input);

private:
    std::vector<uint8_t> preprocess(const std::string& input);
    void processBlock(const uint8_t* block, uint32_t& h0, uint32_t& h1, uint32_t& h2, uint32_t& h3, uint32_t& h4);
    uint32_t leftRotate(uint32_t value, int shift);
};

#endif
