#pragma once

#include <iostream>
#include "doxy_exmpl/inheritance/base.h"

namespace dustin {
/**
 * @class Circle
 * @brief Circle Child class
 *
 */
class Circle : public GeometryBase {
 public:
  /**
   * @brief Circle's interface Implement
   *
   */
  void DoSomething();
};

/**
 * @class Rect
 * @brief Rectangle Child class
 *
 */
class Rect : public GeometryBase {
 public:
  /**
   * @brief Rectangle's interface Implement
   *
   */
  void DoSomething();
};

/**
 * @class Triangle
 * @brief Triangle Child class
 *
 */
class Triangle : public GeometryBase {
 public:
  /**
   * @brief Triangle's interface Implement
   *
   */
  void DoSomething();
};
}