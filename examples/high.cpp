#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <iostream>
#include "../src/BBBiO.cpp"

int main() {
    nube::BBBiO myExample;

    nube::BBBiO::gpioPin P8_7 = myExample.getPin("P8_7");
    nube::BBBiO::gpioPin P9_11 = myExample.getPin("P9_11");
    nube::BBBiO::gpioPin P8_13 = myExample.getPin("P8_13");

    const unsigned char high = nube::BBBiO::HIGH;

    myExample.digitalWrite(P8_7, high);
    myExample.digitalWrite(P9_11, high);
    myExample.digitalWrite(P8_13, high);

    myExample.~BBBiO();

    exit(EXIT_SUCCESS);
}