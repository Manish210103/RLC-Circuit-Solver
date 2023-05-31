#ifndef RESISTOR_H_INCLUDED
#define RESISTOR_H_INCLUDED

class Resistor
{
public:
    float ohm;
    int position;
    Resistor();
    Resistor(int);
    ~Resistor();
    int getohm();
    int getposition();
    void setohm(float);
    void setposition(int);
    void read_resistor();
};



#endif // RESISTOR_H_INCLUDED
