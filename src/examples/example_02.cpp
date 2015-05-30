#define BENCHPRESS_CONFIG_MAIN
#include "benchpress/benchpress.hpp"

unsigned int fib(unsigned int n) {
    DISABLE_REDUNDANT_CODE_OPT();
    return n < 2 ? n : fib(n-1) + fib(n-2);
}

BENCHMARK("fib 10") {
    for (size_t i = 0; i < b->num_iterations(); ++i) {
        fib(10);
    }
}

BENCHMARK("fib 15") {
    for (size_t i = 0; i < b->num_iterations(); ++i) {
        fib(15);
    }
}

BENCHMARK("fib 20") {
    for (size_t i = 0; i < b->num_iterations(); ++i) {
        fib(20);
    }
}