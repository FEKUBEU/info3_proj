#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "menu.hpp"

using namespace std;

int Menu_Article(Article Produkte[])
{
    int eingabe;
    int i;
    system("CLS");

    cout<<"waehlen sie ihre produkte aus"<<endl<<endl;

        for( i = 0; i < max_articles; i++)
        {
            cout<<(i+1)<<" : ";
            Produkte[i].Display_article_name();
        }

        cout<<(i+1)<<": zur Kasse"<<endl<<endl;

        cin>>eingabe;
        return (eingabe-1);
}

int Menu_Stores(string Stores[])
{
    cout<<"Wählen sie einen Laden in dem sie einkaufen wollen"<<endl<<endl;

    for(int i=0;i<max_stores;i++)
    {
        cout<<i<<": "<<Stores[i]<<endl<<endl;
    }

    int eingabe;
    cin>>eingabe;
    return eingabe;
}

int yes_no(string Question)
{
    system("CLS");

    cout<<Question<<endl<<endl;

    cout<<"1: Ja"<<endl<<"2: Nein"<<endl;

    char answer;

    cin>>answer;

    if(answer == 'j' || answer == 'J')
    {
        system("CLS");
        return 1;
    }
    else
    {
        system("CLS");
        return 0;
    }
}

int how_many(Article the_article)
{
    system("CLS");

    int eingabe;

    cout<<"wie oft wollen sie den artikel: ";
    the_article.Display_article_name();
    cout<<"hinzufuegen ?"<<endl<<endl;

    cin>>eingabe;
    return eingabe;
}
