#include <iostream>
#include <os>

#include "debug.h"

void foo(){
  std::cout << "OS = " << OS::version() << std::endl;
}

void bar(){
  INCLUDEOS_UNIMPLEMENTED();
}

int main()
{
  std::cout << "Hello Green World!" << std::endl;
  foo();
  bar();
}
