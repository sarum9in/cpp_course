#include "utility.hpp"

#define STRINGIZE(X) STRINGIZE_(X)
#define STRINGIZE_(X) #X

#define F(A, B) (A+B)*(A+B)

int main()
{
    assert(STRINGIZE(F(1, 2)) == std::string("(1+2)*(1+2)"));
}
