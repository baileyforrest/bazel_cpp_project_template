#ifndef MAIN_FOO_H_
#define MAIN_FOO_H_

#include <memory>
#include <string>

#include "absl/memory/memory.h"
#include "bcf/err.h"

class Foo {
 public:
  static bcf::Result<std::unique_ptr<Foo>> Create(const std::string& foo) {
    if (foo.empty()) {
      return bcf::Err("Empty foo");
    }

    return absl::WrapUnique(new Foo(foo));
  }

  const std::string& get_foo() const { return foo_; }

 private:
  explicit Foo(const std::string& foo);
  const std::string foo_;
};

#endif  // MAIN_FOO_H_
