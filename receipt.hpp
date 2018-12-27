#ifndef RECEIPT_H
#define RECEIPT_H

#include <string>
#include "article.hpp"
#include "menu.hpp"

const int max_stores=2;

class Receipt
{

    public:

    std::string receipt_store_name;

     Article articles[max_articles];

     Receipt()
     {
         receipt_store_name = "X";
     }

     void add_Store(int,std::string[]);
     void Display_receipt_store_name();
};


#endif
