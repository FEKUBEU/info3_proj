#ifndef ARTICLE_H
#define ARTICLE_H

#include <string>

const int  max_articles = 10;

class Article
{
    public:

    std::string article_name;
    int article_nr;
    double price;

    //konstruktor
    Article()
    {article_name="X";article_nr=0;price=0.0;};

    Article(const std::string& k_name , int k_nr , double k_price)
            {article_name = k_name; article_nr = k_nr ; price = k_price;}


     //Methoden//

    //Display_article zeigt warenkorb an
    void display_article();

    //zeigt produktnamen
    void Display_article_name();

    //copy artikel
    void Copy_Artikel(Article);

    //gibt price aus
    double give_price();

     //Methoden//
};

#endif
