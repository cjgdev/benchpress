#define BENCHPRESS_CONFIG_MAIN
#include "benchpress/benchpress.hpp"

#include <iostream>

BENCHMARK("example") {
    for (size_t i = 0; i < b->num_iterations(); ++i) {
        std::cout << "hello" << std::endl;
    }
}