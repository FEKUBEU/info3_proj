
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "buyer.hpp"

using namespace std;

void Buyer::log_in()
{
    system("CLS");

    cout<<"Bitte geben sie ihren namen ein"<<endl<<endl;

    cin>>buyer_name;
    buyer_nr = 12167;

    system("CLS");
}

void Buyer::Display_buyer()
{
    cout<<"Ihr Name: "<<buyer_name<<endl<<"ihre Kundennummer: "<<buyer_nr<<endl<<endl;
}
