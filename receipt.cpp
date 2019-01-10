
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
    cout<<"Laden: "<<receipt_store_name<<endl<<endl;
}

int Receipt::add_article_fromCart(Article articles[] , int anz_articles)
{
    int anz=0;
    for(int i = 0; i < anz_articles ; i++)
    {
        articles_receipt[i] = articles[i];
        anz++;
    }
    return anz;
}

void Receipt::Display_receipt(int anz)
{

    for(int i = 0; i < anz  ; i++ )
    {
        //cout<<i<<": ";
        articles_receipt[i].display_article();
        //cout<<endl;
    }
}
