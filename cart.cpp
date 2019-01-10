#include <iostream>
#include "cart.hpp"

using namespace std;


void ShopCart::Display_cart(){

    cout<<"Warenkorb:"<<kunden_nr<<endl<<"Kundenname:"<<kunden_name<<endl<<endl;
}

int ShopCart::Add_ArticleToCart(Article ToAdd_article)
{
    if(anz_article < max_articles_cart)
    {

        int fsk;
        if( fsk = ToAdd_article.give_fsk() )
        {
            if(fsk > 1)
            {
                if( yes_no("Sind Sie ueber 18?") )
                {
                    (articles[anz_article]).Copy_Artikel(ToAdd_article);
                    anz_article++;
                    return 0;
                }
                else
                {
                    return 1;
                }
            }
            else
            {
                if( yes_no("Sind Sie ueber 16?") )
                {
                    (articles[anz_article]).Copy_Artikel(ToAdd_article);
                    anz_article++;
                    return 0;
                }
                else
                {
                    return 1;
                }
            }
        }
        else
        {
            (articles[anz_article]).Copy_Artikel(ToAdd_article);
            anz_article++;
            return 0;
        }

    }
    else
    {
        return 1;
    }
}

void ShopCart::Display_cart_article()
{
    cout<<">>> WARENKORB <<<"<<endl;
    for(int i=0;i<anz_article;i++)
    {
        if( articles[i].anz_inCart > 1 )              //wenn der artikel öfters im warenkorb wird ausgabe übersprungen nach dem ersten mal
        {
            articles[i].display_article();
            i += (articles[i].anz_inCart) ;
        }
        else
        {
            articles[i].display_article();
        }

    }
}

double ShopCart::give_SummOfPrice()
{
    double sum = 0;
    double steuer = 0;

    for(int i=0; i < anz_article ;i++)
    {
        steuer = ( ( articles[i].price ) / 100 ) * articles[i].mwst;

        //cout<<articles[i].mwst<<endl<<endl;
        //cout<<steuer<<endl<<endl;

        sum += ( articles[i].price + steuer );
    }

    return sum ;
}

void ShopCart::AddMany_ArticleToCart(Article ToAdd_article , int anz )
{
    int i=anz_article;
    int anz_loop = anz_article + anz;
    int fsk;

        if(  fsk = ToAdd_article.give_fsk()  )  //wenn fsk >0 dann abfrage erforderlich nach erster abfrage nicht mehr erforderlich
        {
            if(fsk > 1)
            {
                if( yes_no("sind sie ueber 18 ?") )
                {
                    for(i;i<anz_loop;i++)
                    {
                        articles[i].Copy_Artikel(ToAdd_article);
                        anz_article ++;
                        articles[i].anz_inCart += anz;
                    }
                }
            }
            else
            {
                if( yes_no("sind sie ueber 16 ?") )
                {
                    for(i;i<anz_loop;i++)
                    {
                        articles[i].Copy_Artikel(ToAdd_article);
                        anz_article ++;
                        articles[i].anz_inCart += anz;
                    }
                }
            }
        }
        else // fsk bedarf keiner abfrage
        {
            for(i;i<anz_loop;i++)
            {
                articles[i].Copy_Artikel(ToAdd_article);
                anz_article ++;
                articles[i].anz_inCart += anz;
            }
        }
}


