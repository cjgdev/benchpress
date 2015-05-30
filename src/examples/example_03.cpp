#define BENCHPRESS_CONFIG_MAIN
#include "benchpress/benchpress.hpp"

#include <chrono>

BENCHMARK("multi-threaded example") {
    b->run_parallel([](benchpress::parallel_context* pb) {
        while (pb->next()) {
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
    });
}