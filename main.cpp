#include <stdio.h>

class Foo
{

public:
    int  bar()
    {
        return this->b;
    }

private:
    int b = 17;
};


void doStuff(int a, int b)
{
    Foo *f = nullptr;
    if(a)
    {
        f = new Foo();
    }
    if(a || b)
    {
        printf("foo->bar() => %d\n", f->bar());
    }

}

int main()
{
    doStuff(1,1); //<-- 100% line coverage. 1/3 Branch coverage
    // doStuff(0,1); // <-- Crashes or undefined behavior.
    return 0;
}



