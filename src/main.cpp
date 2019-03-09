#include <iostream>
#include <gtest/gtest.h>
#include <spdlog/sinks/basic_file_sink.h>
#include "spdlog/spdlog.h"
#include "util/list/List.h"

using namespace std;

void log();

int main(int argc, char *argv[]) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}