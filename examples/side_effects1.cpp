#include "utility.hpp"

int main()
{
    int i;
    i = 7, ++i, ++i;
    assert(i == 9);

    i = i++ + 1; // the behavior is undefined

    i = 7;
    i = i + 1;
    assert(i == 8);
}
