#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <iostream>
#include "../src/BBBiO.cpp"

int main() {
    nube::BBBiO myExample;

    for (int i = 0; i < 1000; i++) {
        std::cout << "DI1: " << (int) myExample.digitalRead("P9_13") << std::endl;
        std::cout << "DI2: " << (int) myExample.digitalRead("P9_15") << std::endl;
        std::cout << "DI3: " << (int) myExample.digitalRead("P9_17") << std::endl;
        std::cout << "DI4: " << (int) myExample.digitalRead("P9_19") << std::endl;
        std::cout << "DI5: " << (int) myExample.digitalRead("P9_23") << std::endl;
        std::cout << "DI6: " << (int) myExample.digitalRead("P9_25") << std::endl;
        std::cout << "DI7: " << (int) myExample.digitalRead("P9_27") << std::endl;
        usleep(100000);
    }

    myExample.~BBBiO();

    exit(EXIT_SUCCESS);
}