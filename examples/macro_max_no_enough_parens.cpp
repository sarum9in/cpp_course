#include "utility.hpp"

#define MAX(A, B) (A > B ? A : B)

int main()
{
    assert(3 * MAX(1, 2) == 6);
    assert(MAX(5 | 6, 10) == 7);
}
