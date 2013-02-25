#include "utility.hpp"

void f(int, int) {}

int main()
{
    int i = 8;

    // see http://www.open-std.org/jtc1/sc22/wg21/docs/cwg_defects.html#637
    // gcc warning here is a bug
    i = ++i;
    assert(i == 9);

    ++++i;
    assert(i == 11);

    f(i = 1, i = 1); // the behavior is undefined
}
