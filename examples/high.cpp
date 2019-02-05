#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <iostream>
#include "../src/BBBiO.cpp"

int main() {
    nube::BBBiO myExample;

    myExample.digitalWrite("P8_7", "HIGH");
    myExample.digitalWrite("P9_11", "HIGH");
    myExample.digitalWrite("P8_13", "HIGH");

    myExample.~BBBiO();

    exit(EXIT_SUCCESS);
}