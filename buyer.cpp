
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

#include "buyer.hpp"

using namespace std;

void Buyer::log_in()
{
    system("CLS");
    std::system("clear");

    cout<<"Bitte geben Sie Ihren Namen ein:"<<endl;

    getline(cin, buyer_name);
    //std::flush;
    buyer_nr = 12167;

    system("CLS");
    std::system("clear");
}

void Buyer::Display_buyer()
{
    cout<<"Ihr Name: "<<buyer_name<<endl<<"Ihre Kundennummer: "<<buyer_nr<<endl<<endl;
}
