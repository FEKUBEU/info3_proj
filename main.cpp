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


/////////////////////// ONLINE SHOP ////////////////////////////////////////////////////////


    //Stores

    std::string store_name[] = {"Supermarkt","Elektromarkt"};

    //Produktliste

    //supermarkt
    Article Produkte_super[] =
                        {
                         Article("Apfel"    ,1  ,0.30,19,0,0)
                        ,Article("Banane"   ,2  ,0.30,19,0,0)
                        ,Article("Couscous" ,3  ,1.50,19,0,0)
                        ,Article("Dose"     ,4  ,0.80,19,0,0)
                        ,Article("Erdinger" ,5  ,1.20,19,0,0)
                        ,Article("Frucht"   ,6  ,0.20,19,0,0)
                        ,Article("Bier"     ,7  ,1.20,19,1,0)
                        ,Article("wodka"    ,8  ,0.90,19,2,0)
                        ,Article("Ingwer"   ,9  ,0.80,19,0,0)
                        ,Article("Jodsalz"  ,10 ,1.40,19,0,0)
                        };

    //elektromarkt
     Article Produkte_electro[] =
                        {
                         Article("Usb Kabel"            ,1  ,6.30  ,7,0,0)
                        ,Article("Hdmi Kabel"           ,2  ,6.30  ,7,0,0)
                        ,Article("Dvd(ab 18)"           ,3  ,15.50 ,7,2,0)
                        ,Article("Blueray Player"       ,4  ,30.80 ,7,0,0)
                        ,Article("Videospiel(ab 16)"    ,5  ,60.20 ,7,1,0)
                        ,Article("Xbox"                 ,6  ,100.20,7,0,0)
                        ,Article("Playstation"          ,7  ,100.20,7,0,0)
                        ,Article("Album"                ,8  ,10.90 ,7,0,0)
                        ,Article("Usb Stick"            ,9  ,3.80  ,7,0,0)
                        ,Article("Batterien"            ,10 ,1.40  ,7,0,0)
                        };



int main()
{


    // abfrage für nicht integer(fehleranfälligkeit beheben)

    // receipt ausgabe formatieren beleg


    //test
    //Cout<<"test"<<endl;
    //Article test_article("cool",22,0.50);
    Receipt receipt1;
    ShopCart cart1("felix",1,0);
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
    choice_store = Menu_Stores(store_name);
    receipt1.add_Store(choice_store,store_name);
    receipt1.Display_receipt_store_name();

    //Produktwahl + auflisten
    // wenn 0 eingegeben programme bricht ab

    int einkaufen = 1;
    //int warenkorb = 1;
    int choice_article;
    int anz;
    while( einkaufen )
    {
        int warenkorb = 1;

        if(choice_store == 0) //welcher store
        {
            //supermarkt
            //cout<<"TESTER";
            if( ( choice_article = Menu_Article(Produkte_super) ) == 10)
            {
                //abfrage ob er wirklich zur kasse will
                if( yes_no_nodelete("Wollen Sie zum Warenkorb? (j/n)") )
                {

                    while(warenkorb)
                    {
                        cart1.Display_cart_article();
                        cart1.give_SummOfPrice();

                        if( yes_no_nodelete("Wollen Sie weiter zur Kasse? (j/n)") )
                        {
                            warenkorb = 0;
                            einkaufen = 0;
                        }
                        else
                            warenkorb = 0;

                    }
                }

            }
            else
            {
                cout<<choice_article<<endl<<endl;

                if( (choice_article > max_articles )|| (choice_article <0) )
                {

                        if( yes_no_nodelete("Wollen Sie zum Warenkorb? (j/n)") )
                        {

                            while(warenkorb)
                            {
                                cart1.Display_cart_article();
                                cart1.give_SummOfPrice();

                                if( yes_no_nodelete("Wollen Sie weiter zur Kasse? (j/n)") )
                                {
                                    warenkorb = 0;
                                    einkaufen = 0;
                                }
                                else
                                    warenkorb = 0;


                            }
                        }
                }
                else
                {
                    anz = how_many(Produkte_super[choice_article]);

                    if(anz > 1)
                    {
                        cart1.AddMany_ArticleToCart(Produkte_super[choice_article],anz);
                    }
                    else
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
                if( yes_no_nodelete("Wollen Sie zum Warenkorb? (j/n)") )
                        {

                            while(warenkorb)
                            {
                                cart1.Display_cart_article();
                                cart1.give_SummOfPrice();

                                if( yes_no_nodelete("Wollen Sie weiter zur Kasse? (j/n)") )
                                {
                                    warenkorb = 0;
                                    einkaufen = 0;
                                }
                                else
                                {
                                   warenkorb = 0;
                                }


                            }
                        }

            }
            else
            {
                if(choice_article > max_articles || choice_article <0)
                {

                   if( yes_no_nodelete("Wollen Sie zum Warenkorb? (j/n)") )
                   {

                            while(warenkorb)
                            {
                                cart1.Display_cart_article();
                                cart1.give_SummOfPrice();

                                if( yes_no_nodelete("Wollen Sie weiter zur Kasse? (j/n)") )
                                {
                                    warenkorb = 0;
                                    einkaufen = 0;
                                }
                                else
                                {
                                    warenkorb = 0;
                                }


                            }
                    }
                }
                else
                {
                    anz = how_many(Produkte_electro[choice_article]);

                    if(anz > 1)
                    {
                        cart1.AddMany_ArticleToCart(Produkte_electro[choice_article],anz);
                    }
                    else
                    {
                        cart1.Add_ArticleToCart(Produkte_electro[choice_article]);
                    }
                }

            }
        }
        else
            cout<<"Unexpected ERR0R"<<endl;


    }


    //Zur Kasse(beleg)

    cout<<"_________________________________________________________________"<<endl;

    //datum
    datum.print();

    receipt1.Display_receipt( receipt1.add_article_fromCart(cart1.articles , cart1.anz_article) );


    cout<<"___________"<<endl<<"___________"<<endl<<"Summe: "<<cart1.give_SummOfPrice()<<" euro"<<endl<<endl;


    receipt1.Display_receipt_store_name();

    //cart1.Display_cart_article();


    cout<<"_________________________________________________________________"<<endl;
    cout<<"VIELEN DANK FÜR IHREN BESUCH!"<<endl<<endl<<endl<<endl;

}
