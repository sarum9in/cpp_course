#include "utility.hpp"

#define MAX(A, B) A > B ? A : B

int main()
{
    assert(3 * MAX(1, 2) == 1);
}
