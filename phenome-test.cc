#include "catch.hpp"

#include "phenome.h"

TEST_CASE("Bit-shifting and endianness check", "[phenome]") {
  const unsigned long long eight = 8;
  REQUIRE((eight << 1) == 16);
  REQUIRE((eight >> 1) == 4);
  REQUIRE((eight >> 3) == 1);
  REQUIRE((eight >> 4) == 0);
  REQUIRE((eight >> 5) == 0);
}
