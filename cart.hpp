#ifndef CART_H
#define CART_H

#include <string>
#include "article.hpp"
#include "menu.hpp"




class ShopCart {

    public:

    int anz_article;                  //Anzahl der artikel

    std::string kunden_name;    //Kundeninformationen
    int kunden_nr;


    Article articles[max_articles];

    //konstruktor
    ShopCart()
    {anz_article=0;kunden_name="x";kunden_nr=0;};

    ShopCart( const std::string& k_name, int k_knr )
            { kunden_name = k_name; kunden_nr = k_knr; }

    //Methoden//

    int get_article(int,Article[]);

    //Display_cart zeigt warenkorb an
    void Display_cart();

    ////Display_cart zeigt artikel im warenkorb an
    void Display_cart_article();

    //ein artikel in den warenkorb hinzufügen
    int Add_ArticleToCart(Article);

    //Summe der preise
    double give_SummOfPrice();

    //Methoden//
};


#endif

