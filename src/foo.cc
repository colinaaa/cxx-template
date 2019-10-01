#include "gsl/gsl"

int foo() {
  gsl::span<int> span;

  return 0;
}

#include <catch2/catch.hpp>

TEST_CASE("foo") {
  REQUIRE(foo() == 0);
  REQUIRE(foo() != 1);
}