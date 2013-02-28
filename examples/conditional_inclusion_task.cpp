#include "utility.hpp"

#define X
#define Y
#undef X

int main()
{
#if (('z' - 'a') + ('Z' - 'A')) == 52
#   ifndef(X)
    std::cout << "first" << std::endl;
#   elif 0
    std::cout << "second" << std::endl;
#   else
    std::cout << "third" << std::endl;
#   endif
#else
#   ifdef X
    std::cout << "fourth" << std::endl;
#   elif defined Y
    std::cout << "fifth" << std::endl;
#   endif
#endif
}
