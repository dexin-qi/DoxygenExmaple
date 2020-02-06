/**
 * @file helloworld.h
 * @author DustinKsi (dustinksi@126.com)
 * @brief 
 * @version 0.1
 * @date 2020-02-06
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <iostream>
#include <string>

using std::cout;
using std::endl;

using std::string;

/**
 * @brief namespace dustin
 * 
 */
namespace dustin
{


/**
 * @class HelloWorld
 * @brief Class for Moudle Hello
 */
class HelloWorld
{
private:
    string _MOUDLE_NAME_;

public:
    /**
     * @brief Construct a new Hello World object
     * 
     * @param moudle_name 
     */
    HelloWorld(string moudle_name);

    /**
     * @brief Print hello world with MOUDLE_NAME
     * 
     */
    void DoSomething();

    /**
     * @brief Destroy the Hello World object
     * 
     */
    ~HelloWorld();
};

}