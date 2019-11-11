#include <random>
#include "randomness.hpp"

auto random::default_engine() -> std::default_random_engine&
{
    static auto engine = std::default_random_engine{std::random_device{}()};
    return engine;
}
