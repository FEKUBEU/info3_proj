#include <iostream>
#include "article.hpp"

using namespace std;

void Article::display_article()
{
    cout<<"| Artikelname: "   <<article_name   <<endl
        <<"| Artikelnummer: " <<article_nr     <<endl
        <<"| Preis: "          <<price<<" €" <<endl<<endl;
}

void Article::Copy_Artikel(Article ToCopy_Article)
{
    article_name = ToCopy_Article.article_name;
    article_nr   = ToCopy_Article.article_nr;
    price        = ToCopy_Article.price;
    mwst         = ToCopy_Article.mwst;
}

void Article::Display_article_name()
{
    cout<<article_name<<endl;
}

double Article::give_price()
{
    return price;
}
