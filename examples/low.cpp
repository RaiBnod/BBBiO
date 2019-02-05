#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <iostream>
#include "../src/BBBiO.cpp"

int main() {
    nube::BBBiO myExample;

    myExample.digitalWrite("P8_7", "LOW");
    myExample.digitalWrite("P9_11", "LOW");

    myExample.~BBBiO();

    exit(EXIT_SUCCESS);
}