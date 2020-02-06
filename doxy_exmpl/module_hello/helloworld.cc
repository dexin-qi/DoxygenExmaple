#include "doxy_exmpl/module_hello/helloworld.h"

namespace dustin
{
HelloWorld::HelloWorld(string moudle_name)
{
    _MOUDLE_NAME_ = "[" + moudle_name + "]";
    cout << _MOUDLE_NAME_ << " Construct!" << endl;
}

HelloWorld::~HelloWorld()
{
    cout << _MOUDLE_NAME_ << " Destruct!" << endl;
}

void HelloWorld::DoSomething()
{
    cout << _MOUDLE_NAME_ << " Hello world!" << endl;
}
}