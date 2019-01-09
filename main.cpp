#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "cart.hpp"
#include "article.hpp"
#include "menu.hpp"
#include "receipt.hpp"
#include "buyer.hpp"
#include "date.hpp"

using namespace std;

    //Stores

    std::string store_name[] = {"Supermarkt","Elektromarkt"};

    //Produktliste

    //supermarkt
    Article Produkte_super[] =
                        {
                         Article("Apfel"    ,1  ,0.30,19,0)
                        ,Article("Banane"   ,2  ,0.30,19,0)
                        ,Article("Couscous" ,3  ,1.50,19,0)
                        ,Article("Dose"     ,4  ,0.80,19,0)
                        ,Article("Erdinger" ,5  ,1.20,19,0)
                        ,Article("Frucht"   ,6  ,0.20,19,0)
                        ,Article("Bier"     ,7  ,1.20,19,1)
                        ,Article("Wodka"    ,8  ,0.90,19,2)
                        ,Article("Ingwer"   ,9  ,0.80,19,0)
                        ,Article("Jodsalz"  ,10 ,1.40,19,0)
                        };

    //elektromarkt
     Article Produkte_electro[] =
                        {
                         Article("Usb Kabel"            ,1  ,6.30  ,7,0)
                        ,Article("Hdmi Kabel"           ,2  ,6.30  ,7,0)
                        ,Article("Dvd(ab 18)"           ,3  ,15.50 ,7,2)
                        ,Article("Blueray Player"       ,4  ,30.80 ,7,0)
                        ,Article("Videospiel(ab 16)"    ,5  ,60.20 ,7,1)
                        ,Article("Xbox"                 ,6  ,100.20,7,0)
                        ,Article("Playstation"          ,7  ,100.20,7,0)
                        ,Article("Album"                ,8  ,10.90 ,7,0)
                        ,Article("Usb Stick"            ,9  ,3.80  ,7,0)
                        ,Article("Batterien"            ,10 ,1.40  ,7,0)
                        };
    //datum


int main()
{

    // fsk freigabe
    // klassen person/verkäufer

    // receipt ausgabe formatieren + datum,person,rabatte,zahlvariante fehlt


    //test
    //Cout<<"test"<<endl;
    //Article test_article("cool",22,0.50);
    Receipt receipt1;
    ShopCart cart1("felix", 1);
    Buyer test;
    date datum;
    datum.init();

    //Menü erstellen//
    ////////////////////////////////////////////
    int choice_store;

    //anmelden
    test.log_in();
    test.Display_buyer();

    //Laden auswählen
    do{
        choice_store = Menu_Stores(store_name);
        //cout<<choice_store<<endl;

    } while(choice_store != 0 && choice_store != 1);

    receipt1.add_Store(choice_store,store_name);
    receipt1.Display_receipt_store_name();

    //Produktwahl + auflisten
    // wenn 0 eingegeben programme bricht ab

    int zurkasse = 1;
    int choice_article;
    int anz;

    system("CLS");
    std::system("clear");


    while(zurkasse)
    {
        system("CLS");
        std::system("clear");

        

        if(choice_store == 0) //welcher store
        {
            //supermarkt

            if( ( choice_article = Menu_Article(Produkte_super) ) == 10)
            {
                //abfrage ob er wirklich zur kasse will
                if( yes_no("Wollen Sie zur Kasse? (j/n)") )
                {
                    zurkasse = 0;
                }

            }
            else
            {
                cout<<choice_article<<endl<<endl;

                if( (choice_article > 10)|| (choice_article < 0) )
                {

                    if( yes_no("Wollen Sie zur Kasse? (j/n)") )
                    {
                        zurkasse = 0;
                    }
                }
                else
                {
                    anz = how_many(Produkte_super[choice_article]);
                    for(int i=0; i < anz; i++)
                    {
                        cart1.Add_ArticleToCart(Produkte_super[choice_article]);
                    }
                }

            }
        }
        else if(choice_store == 1)
        {
            //electromarkt

            if( ( choice_article = Menu_Article(Produkte_electro) ) == 10)
            {
                //abfrage ob er wirklich zur kasse will
                if( yes_no("Wollen Sie zur Kasse? (j/n)") )
                {
                    zurkasse = 0;
                }

            }
            else
            {
                if(choice_article < 10 || choice_article < 0)
                {

                    if( yes_no("Wollen Sie zur Kasse? (j/n)") )
                    {
                        zurkasse = 0;
                    }
                }
                else
                {
                    anz = how_many(Produkte_electro[choice_article]);
                    for(int i=0; i < anz; i++)
                    {
                        cart1.Add_ArticleToCart(Produkte_electro[choice_article]);
                    }
                }

            }
        }
        else
            cout<<"Bitte wahlen Sie einen Store!"<<endl;

    }



    //Zur Kasse

    datum.print();

    receipt1.Display_receipt( receipt1.add_article_fromCart(cart1.articles , cart1.anz_article) );

    receipt1.Display_receipt_store_name();
    //cart1.Display_cart_article();
    cout<<"Summe: "<<cart1.give_SummOfPrice()<<" €"<<endl<<endl;




    return 0;
}
