
#include <iostream>
#include "GameObject.h"
#include <windows.h>

bool dummyExpectTrue(bool isEqual)
{
    if (!isEqual)
    {
        std::cout << "Failed expectation!\n";
    }
    return isEqual;
}

void test1()
{
    dummyExpectTrue(1 == 1);
    dummyExpectTrue(1 == 5);
}

int main()
{
    test1();
    //std::cout << "Hello World!\n";
    system("pause");
}
