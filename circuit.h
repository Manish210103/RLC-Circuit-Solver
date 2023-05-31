#ifndef CIRCUIT_H_INCLUDED
#define CIRCUIT_H_INCLUDED
#include"Resistor.h"
#include"battery.h"
#include"series.h"



class Circuit
{
public:
    int no_of_resistor;
    Resistor &r;
    Battery b;

    Circuit();
    ~Circuit();

    int getno_of_resistor();
    void get();
    void setno_of_resistor(int);
    void read_value();
};


#endif // CIRCUIT_H_INCLUDED
