#include "utility.hpp"

int main()
{
#if __WORDSIZE == 32
    std::cout << "32-bit environment." << std::endl;
    // bit-related code
#elif __WORDSIZE == 64
    std::cout << "64-bit environment." << std::endl;
    // bit-related code
#else
    std::cout << __WORDSIZE << "-bit environment, don't know what to do." << std::endl;
#endif
}
