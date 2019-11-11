#include <iostream>
#include "randomness.hpp"

auto main() -> int
{
    auto rand_int = random::get_integer(1, 6);
    std::cout << "Random int: " << rand_int << '\n';
    auto rand_double = random::get_floating(0.0, 100.0);
    std::cout << "Random double: " << rand_double << '\n';

    return 0;
}
