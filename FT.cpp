#include <iostream>

void cekGanjilGenap(int angka) {
    if (angka % 2 == 0) {
        std::cout << "Genap" << std::endl;
    } else {
        std::cout << "Ganjil" << std::endl;
    }
}

int main() {
    cekGanjilGenap(4); // Output: Genap
    cekGanjilGenap(7); // Output: Ganjil
    return 0;
}        