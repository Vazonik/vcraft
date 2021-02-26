#include "../include/Test.h"

Test::Test() = default;

Test::Test(int val) : value(val) {}

int Test::GetVal() const {
    return value;
}