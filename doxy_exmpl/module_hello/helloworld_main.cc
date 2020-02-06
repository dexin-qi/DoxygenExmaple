/**
 * @file helloworld_main.cc
 * @author DustinKsi (dustinksi@126.com)
 * @brief 
 * @version 0.1
 * @date 2020-02-06
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "doxy_exmpl/module_hello/helloworld.h"

int main(int argc, const char** argv) {

    dustin::HelloWorld _h("Travis");
    _h.DoSomething();

    return 0;
}