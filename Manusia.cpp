#ifndef MANUSIA_H
#define MANUSIA_H
#include <iostream>
#include <string>
#include "D:/RelasidanInheritance_0236/Jantung.h"

//membuat class manusia di file header manusia.h
class Manusia {
public:
    //membuat member variabel class manusia
    std::string name;
    Jantung varJantung;

    //membuat constructor dan destructor class manusia
    Manusia(std::string pName) : name(pName) {
        std::cout << name << "Hidup\n";
    }
    ~Manusia() {
        std::cout << name << "Mati\n";
    }
};
#endif // !MANUSIA_H