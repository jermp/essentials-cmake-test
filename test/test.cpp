#include <iostream>

#include "essentials.hpp"

int main() {
    essentials::json_lines j;
    j.add("test", 34);
    j.print();
    return 0;
}