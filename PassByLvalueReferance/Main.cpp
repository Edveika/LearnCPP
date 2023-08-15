#include <iostream>

class TestyTest
{
public:
    int a;
    int b;
    int c;
    int d;

public:
    TestyTest()
    {
        a=1;
        b=3;
        c=3;
        d=7;
    }

public:
    void Function()
    {
        std::cout << a << b << c << d << std::endl;
    }
};

int main()
{
    TestyTest obj;

    TestyTest* ptrObj = &obj;
    ptrObj->Function();
    
    TestyTest& refObj = obj;
    refObj.Function();

    return 0;
}