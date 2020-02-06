#include "doxy_exmpl/inheritance/base.h"
#include "doxy_exmpl/inheritance/impl.h"

int main(int argc, const char **argv)
{
    dustin::GeometryBase *ptr;
    
    ptr = new dustin::Circle();
    ptr->DoSomething();

    ptr = new dustin::Rect();
    ptr->DoSomething();

    ptr = new dustin::Triangle();
    ptr->DoSomething();

    return 0;
}