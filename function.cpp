#include <iostream>

double luasPersegi(double sisi) {
    return sisi * sisi;
}

int main() {
    std::cout << luasPersegi(4) << std::endl;
    return 0;
}