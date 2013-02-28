#include "utility.hpp"

int main()
{
#if 1 + 2 == 3
    std::cout << "Seems OK." << std::endl;
#else
    std::cout << "Get rid of this compiler!" << std::endl;
    return 1;
#endif
}
