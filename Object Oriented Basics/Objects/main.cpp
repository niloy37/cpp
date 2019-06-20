#include <iostream>
#include "ArithmaticOperations.h"
#define pf cout
#define sf cin
#define NL endl
using namespace std;


int main()
{
    ArithmaticOperations<int>a1(3,6);
    ArithmaticOperations<float>a2(6.0,2.5);


    pf << a1.addition()<<NL;
    pf << a1.subtraction()<<NL;
    pf << a1.division()<<NL;
    pf << a1.multiplication()<<NL;


    //A2

    pf<<"A2 float example"<<NL;
    pf<<a2.division()<<NL;



    return 0;
}
