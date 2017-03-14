/**
 * \file use_example.cpp
 * \author Jake Fenton
 *
 * this file will demonstrate the awesome class tree thing of Doxygen
 */

#include "example1.h"

class SomeContainer {

  /** \brief The default constructor
   *
   *  Still GNDN
   */
  SomeContainer() {}

private:
  int myint; ///< some int, to take up space

  /// This is an instance of another class within our current class, how exciting!
  ExampleClass example;
};
