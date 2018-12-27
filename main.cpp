#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "cart.hpp"
#include "article.hpp"
#include "menu.hpp"
#include "receipt.hpp"
#include "buyer.hpp"

using namespace std;

    //Stores

    std::string store_name[] = {"Supermarkt","Elektromarkt"};

    //Produktliste

    //supermarkt
    Article Produkte_super[] =
                        {
                         Article("Apfel"    ,1  ,0.30)
                        ,Article("Banane"   ,2  ,0.30)
                        ,Article("Couscous" ,3  ,1.50)
                        ,Article("Dose"     ,4  ,0.80)
                        ,Article("Erdinger" ,5  ,1.20)
                        ,Article("Frucht"   ,6  ,0.20)
                        ,Article("Gabel"    ,7  ,1.20)
                        ,Article("Haribo"   ,8  ,0.90)
                        ,Article("Ingwer"   ,9  ,0.80)
                        ,Article("Jodsalz"  ,10 ,1.40)
                        };

    //elektromarkt
     Article Produkte_electro[] =
                        {
                         Article("Usb Kabel"        ,1  ,6.30   )
                        ,Article("Hdmi Kabel"       ,2  ,6.30   )
                        ,Article("Dvd Player"       ,3  ,15.50  )
                        ,Article("Blueray Player"   ,4  ,30.80  )
                        ,Article("Videospiel"       ,5  ,60.20  )
                        ,Article("Xbox"             ,6  ,100.20 )
                        ,Article("Playstation"      ,7  ,100.20 )
                        ,Article("Album"            ,8  ,10.90  )
                        ,Article("Usb Stick"        ,9  ,3.80   )
                        ,Article("Batterien"        ,10 ,1.40   )
                        };



int main()
{
    // cart_article to receipt
    // receipt ausgabe formatieren + datum,person,rabatte,zahlvariante fehlt



    //test
    //Cout<<"test"<<endl;
    //Article test_article("cool",22,0.50);
    Receipt receipt1;
    ShopCart cart1("felix",1);
    Buyer test;

    //Menü erstellen//
    ////////////////////////////////////////////
    int choice_store;

    //anmelden
    test.log_in();
    test.Display_buyer();

    //Laden auswählen
    //choice_store = Menu_Stores(store_name);
    //receipt1.add_Store(choice_store,store_name);
    //receipt1.Display_receipt_store_name();

    //Produktwahl + auflisten
    //Menu_Article(cart1);
    /*
    int zurkasse = 1;
    int choice_article;
    int anz;
    while(zurkasse)
    {

        cout<<"waehlen sie ihre produkte aus"<<endl<<endl;
        if(choice_store == 0) //welcher store
        {
            //supermarkt

            if( ( choice_article = Menu_Article(Produkte_super) ) == 10)
            {
                //abfrage ob er wirklich zur kasse will
                if( yes_no("Wollen sie zur kasse?") )
                {
                    zurkasse = 0;
                }

            }
            else
            {
                anz = how_many(Produkte_super[choice_article]);
                for(int i=0;i<anz;i++)
                {
                    cart1.Add_ArticleToCart(Produkte_super[choice_article]);
                }
            }

        }
        else
        {
            //electromarkt

            if( ( choice_article = Menu_Article(Produkte_electro) ) == 10)
            {
                //abfrage ob er wirklich zur kasse will
                if( yes_no("Wollen sie zur kasse?") )
                {
                    zurkasse = 0;
                }

            }
            else
            {
                anz = how_many(Produkte_electro[choice_article]);
                for(int i=0;i<anz;i++)
                {
                    cart1.Add_ArticleToCart(Produkte_electro[choice_article]);
                }
            }
        }

    }

    */

    //Zur Kasse
    //cart1.Display_cart_article();
    //cout<<"Zu zahlende summe: "<<cart1.give_SummOfPrice()<<" euro"<<endl<<endl;


    //Testversion//
    ///////////////////////////////////////////

    /*

    //erstellen eine warenkorbs mit kunden_name
    //und kunden_nr
    ShopCart Cart1("Felix",1);

    //Display_cart zeigt warenkorb an
    Cart1.Display_cart();

    //ein artikel in den warenkorb
    Cart1.Add_ArticleToCart(Produkte[0]);
    Cart1.Add_ArticleToCart(Produkte[1]);

    Cart1.Display_cart_article();

    */

    return 0;
}
