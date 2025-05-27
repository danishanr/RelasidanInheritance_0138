#include <iostream>
#include <vector>
using namespace std;
#ifndef MANUSIA_H
#define MANUSIA_H

class jantung;

class manusia {
public : 
    string name;
    jantung* varJantung;

    manusia(string pName) : name(pName) {
        cout << name << " hidup\n";
    }
    ~manusia() {
        cout << name << " mati\n";
    }
};

#endif