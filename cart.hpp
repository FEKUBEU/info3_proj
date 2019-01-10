#ifndef CART_H
#define CART_H

#include <string>
#include "article.hpp"
#include "menu.hpp"


const int max_articles_cart = 100;

class ShopCart {

    public:

    int anz_article;            //Anzahl der artikel

    std::string kunden_name;    //Kundeninformationen
    int kunden_nr;


    Article articles[max_articles_cart];

    //konstruktor
    ShopCart()
    {anz_article=0;kunden_name="x";kunden_nr=0;};

    ShopCart( const std::string& k_name, int k_knr , int k_anz_article )
            { kunden_name = k_name; kunden_nr = k_knr; anz_article = k_anz_article; }

    //Methoden//

    //Display_cart zeigt warenkorb an
    void Display_cart();

    ////Display_cart zeigt artikel im warenkorb an
    void Display_cart_article();

    //ein artikel in den warenkorb hinzufügen
    int Add_ArticleToCart(Article);

    //mehrere artikel in den warenkorb hinzufügen
    void AddMany_ArticleToCart(Article,int);

    //Summe der preise
    double give_SummOfPrice();



    //Methoden//
};


#endif

