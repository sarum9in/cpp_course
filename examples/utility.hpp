#include <iostream>

#include <cassert>
#include <cstdint>

#define assert_equal_ptr(A, B) \
    assert(reinterpret_cast<std::intptr_t>(A) == reinterpret_cast<std::intptr_t>(B))

#define assert_not_equal_ptr(A, B) \
    assert(reinterpret_cast<std::intptr_t>(A) != reinterpret_cast<std::intptr_t>(B))
