#include <iostream>
#include"series.h"
#include"circuit.h"
#include"Resistor.h"

using namespace std;

int main()
{
    int choice;
    cout<<"1.SERIES \n";
    cout<<"2.PARALLEL \n";
    cout<<"3.COMBINATIONS \n";
    cout<<"\t\tchoose your choice : ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        Circuit c1;
        c1.read_value();
        c1.r[0].read_resistor();
        //s1.calc_resistance();
    }
    //s1.display();
    return 0;
}
