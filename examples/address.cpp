#include "utility.hpp"

struct A {};

struct B: A
{
    int x;
};

struct C
{
    int x;
};

struct D: C
{
    int y;
};

int main()
{
    B b;
    A *a = &b;
    assert_equal_ptr(&b, &b.x); // member subobject
    assert_equal_ptr(&b, a); // base subobject
    D d;
    assert_not_equal_ptr(&b, &d);
    C *c = &d;
    assert_equal_ptr(&d, c); // base subobject has nonzero size
}

