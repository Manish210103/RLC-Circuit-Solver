#include<iostream>
#include"series.h"

using namespace std;

Circuit::Circuit()
{
    no_of_resistor=1;
}

Circuit::~Circuit()
{
    delete r;
}

void Circuit :: read_value()
{
    cout<<"Enter the number of resistors:";
    cin>>no_of_resistor;
}
void Circuit:: get()
{
    int i;
    for(i=0;i<no_of_resistor;i++)
    {
        r[i].read_resistor();
    }
}

void Series :: calc_resistance()
{
    cout<<"inside calc";
    float ohm=0;
    int i;
    for (i=0;i<no_of_resistor;i++)
    {
        ohm+=r[i].ohm;
    }
    cout<<ohm;
}


Resistor::Resistor()
{
    Resistor *r=new Resistor();
    ohm=0;
    position=1;

}

void Resistor::read_resistor()
{
    cout<<"Enter the value of resistance : ";
    cin>>ohm;
    cout<<"Enter the position of resistor : ";
    cin>>position;
}

Series::Series()
{

}

Series::~Series()
{

}

Resistor::~Resistor()
{

}
