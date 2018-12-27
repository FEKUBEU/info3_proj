#include <iostream>
#include "article.hpp"

using namespace std;

void Article::display_article()
{
    cout<<"Artikel name: "   <<article_name   <<endl
        <<"Artikel nummer: " <<article_nr     <<endl
        <<"preis: "          <<price<<" euro" <<endl<<endl;
}

void Article::Copy_Artikel(Article ToCopy_Article)
{
    article_name = ToCopy_Article.article_name;
    article_nr   = ToCopy_Article.article_nr;
    price        = ToCopy_Article.price;
}

void Article::Display_article_name()
{
    cout<<article_name<<endl;
}

double Article::give_price()
{
    return price;
}
