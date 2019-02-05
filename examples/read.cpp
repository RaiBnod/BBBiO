#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <iostream>
#include "../src/BBBiO.cpp"

int main() {
    nube::BBBiO myExample;

    nube::BBBiO::gpioPin DI1 = myExample.getPin("P9_13");
    nube::BBBiO::gpioPin DI2 = myExample.getPin("P9_15");
    nube::BBBiO::gpioPin DI3 = myExample.getPin("P9_17");
    nube::BBBiO::gpioPin DI4 = myExample.getPin("P9_19");
    nube::BBBiO::gpioPin DI5 = myExample.getPin("P9_23");
    nube::BBBiO::gpioPin DI6 = myExample.getPin("P9_25");
    nube::BBBiO::gpioPin DI7 = myExample.getPin("P9_27");

    for (int i = 0; i < 1000; i++) {
        std::cout << "DI1: " << (int) myExample.digitalRead(DI1) << std::endl;
        std::cout << "DI2: " << (int) myExample.digitalRead(DI2) << std::endl;
        std::cout << "DI3: " << (int) myExample.digitalRead(DI3) << std::endl;
        std::cout << "DI4: " << (int) myExample.digitalRead(DI4) << std::endl;
        std::cout << "DI5: " << (int) myExample.digitalRead(DI5) << std::endl;
        std::cout << "DI6: " << (int) myExample.digitalRead(DI6) << std::endl;
        std::cout << "DI7: " << (int) myExample.digitalRead(DI7) << std::endl;
        usleep(100000);
    }

    myExample.~BBBiO();

    exit(EXIT_SUCCESS);
}