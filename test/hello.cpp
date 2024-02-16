#include <iostream>

#include "essentials.hpp"

int main() {
    essentials::timer_type t;
    t.start();
    std::cout << "Hi there!" << std::endl;
    t.stop();
    std::cout << t.average() << std::endl;
    return 0;
}