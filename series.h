#ifndef SERIES_H_INCLUDED
#define SERIES_H_INCLUDED
#include"circuit.h"

class Series:public Circuit
{
public:
     Series();
     ~Series();
     void calc_resistance();
     void display()const;
};

#endif // SERIES_H_INCLUDED

