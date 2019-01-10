#ifndef ARTICLE_H
#define ARTICLE_H

#include <string>

const int  max_articles = 10;

class Article
{
    public:

    std::string article_name;
    int article_anz;
    int article_nr;
    double price;
    int mwst;
    int fsk;    //0-keine freigabe nötig , 1 = fsk 16 , 2 = fsk 18

    //konstruktor
    Article()
    { article_name = "X" ; article_nr = 0; article_anz = 0 ; price = 0.0 ; mwst = 0 ; fsk = 0 ;}

    Article(const std::string& k_name , int k_nr , double k_price , int k_mwst , int k_fsk)
            {article_name = k_name; article_nr = k_nr ; price = k_price; mwst = k_mwst; fsk = k_fsk;}


     //Methoden//

    //Display_article zeigt warenkorb an
    void display_article();

    //zeigt produktnamen
    void Display_article_name();

    //copy artikel
    void Copy_Artikel(Article);

    //gibt price aus
    double give_price();

    int give_fsk();

     //Methoden//
};

#endif
