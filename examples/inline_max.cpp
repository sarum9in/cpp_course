#include "utility.hpp"

template <typename T>
inline constexpr const T &max(const T &x, const T &y)
{
    return x > y ? x : y;
}

int main()
{
    assert(3 * max(1, 2) == 6);
    assert(max(5 | 6, 10) == 10);
    int i = 10;
    assert(max(++i, 10) == 11);
}
