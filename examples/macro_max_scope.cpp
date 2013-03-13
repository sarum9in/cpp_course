#include "utility.hpp"

#define MAX(a,b) \
    ({ __typeof__(a) _a = (a); \
       __typeof__(b) _b = (b); \
       _a > _b ? _a : _b; })

int main()
{
    assert(3 * MAX(1, 2) == 6);
    assert(MAX(5 | 6, 10) == 10);
    int i = 10;
    assert(MAX(++i, 10) == 11);
}
