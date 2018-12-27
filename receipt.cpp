
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "receipt.hpp"

using namespace std;

void Receipt::add_Store(int choice , string store_names[])
{
    receipt_store_name = store_names[choice];

}

void Receipt::Display_receipt_store_name()
{
    cout<<"laden: "<<receipt_store_name<<endl<<endl;
}
