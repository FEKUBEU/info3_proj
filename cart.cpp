#include <iostream>
#include "cart.hpp"

using namespace std;

void ShopCart::Display_cart(){

    cout<<"Warenkorb:"<<kunden_nr<<endl<<"Kunden name:"<<kunden_name<<endl<<endl;
}

int ShopCart::Add_ArticleToCart(Article ToAdd_article)
{
    if(anz_article < max_articles)
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

void ShopCart::Display_cart_article()
{

    for(int i=0;i<anz_article;i++)
    {
        cout<<"Artikel "<<i<<":"<<endl;
        (articles[i]).display_article();
    }
}

double ShopCart::give_SummOfPrice()
{
    double sum=0;

    for(int i=0; i < anz_article ;i++)
    {
        sum += articles[i].price;
    }

    return sum;
}

int ShopCart::get_article(int choice, Article Productlist[])
{
    cout<<"choice"<<choice<<endl;//test

    if(choice <= max_articles)
    {
        return choice;
    }
    else
    {
        Add_ArticleToCart(Productlist[choice]);
        cout<<"Artikel hinzugefuegt: ";
        Productlist[choice].Display_article_name();
        return choice;
    }


}
