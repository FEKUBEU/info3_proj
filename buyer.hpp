#ifndef BUYER_H
#define BUYER_H

#include <string>


class Buyer
{
    std::string buyer_name;
    int buyer_nr;

    public:

    Person()
    {
        buyer_name  = "X";
        buyer_nr    = 0;
    }
    Person(std::string k_buyer_name , int k_buyer_nr)
    {
        buyer_name = k_buyer_name;
        buyer_nr   = k_buyer_nr;
    }

    void log_in();
    void Display_buyer();
} ;

#endif
