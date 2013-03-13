#include "utility.hpp"

#define hash_hash # ## #
#define mkstr(a) # a
#define in_between(a) mkstr(a)
#define join(c, d) in_between(c hash_hash d)
const char p[] = join(x, y);

/*
    join(x, y)
    in_between(x hash_hash y)
    in_between(x ## y)
    mkstr(x ## y)
    "x ## y"
*/

int main()
{
    assert(p == std::string("x ## y"));
}
