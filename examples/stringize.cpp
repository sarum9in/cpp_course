#include "utility.hpp"

#define STRINGIZE(X) #X

#define F(A, B) (A+B)*(A+B)

int main()
{
    assert(STRINGIZE(F(1, 2)) == std::string("F(1, 2)"));
}
