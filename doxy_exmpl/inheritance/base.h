#pragma once

namespace dustin
{

/**
 * @class GeometryBase
 * @brief The base class of geometries
 * 
 */
class GeometryBase
{
public:
    /**
     * @brief The interface will be impl by child class
     * 
     */
    virtual void DoSomething() = 0;
    virtual ~GeometryBase() {}
};
}