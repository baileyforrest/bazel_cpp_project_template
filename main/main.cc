#include <cstdlib>
#include <iostream>

#include "main/foo.h"

int main(int argc, char** argv) {
  for (int i = 0; i < argc; ++i) {
    auto foo = Foo::Create(argv[i]);
    std::cout << foo.result()->get_foo() << "\n";
  }
  return EXIT_SUCCESS;
}
