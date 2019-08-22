#include "main/foo.h"

#include "gtest/gtest.h"

TEST(FooTest, GetFoo) {
  auto foo = Foo::Create("foobar");
  EXPECT_EQ(foo.result()->get_foo(), "foobar");
}
