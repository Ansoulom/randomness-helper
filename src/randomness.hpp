#pragma once

#include <random>

namespace random
{
    auto default_engine() -> std::default_random_engine&;

    template <typename Integer = int, typename Engine = std::default_random_engine>
    auto get_integer(Integer min, Integer max, Engine& engine = default_engine()) -> Integer
    {
      return std::uniform_int_distribution<Integer>{min, max}(engine);
    }

    template<typename Floating = double, typename Engine = std::default_random_engine>
    auto get_floating(Floating min, Floating max, Engine& engine = default_engine()) -> Floating
    {
        return std::uniform_real_distribution<Floating>{min, max}(engine);
    }
}
