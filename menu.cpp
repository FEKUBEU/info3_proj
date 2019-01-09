#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <climits>

#include "menu.hpp"

using namespace std;

int Menu_Article(Article Produkte[])
{
    int eingabe;
    int i;
    system("CLS");
    std::system("clear");

    cout<<"Waehlen Sie Ihre Produkte aus:"<<endl<<endl;

        for( i = 0; i < max_articles; i++)
        {
            if(i < 9)
                cout<<"0"<<(i+1)<<": ";
            else
                cout<<(i+1)<<": ";
            Produkte[i].Display_article_name();
        }

        cout<<(i+1)<<": zur Kasse"<<endl<<endl;

        cout<<"Bitte hier die entsprechende Zahl eintippen:"<<endl;
        cin>>eingabe;
        return (eingabe-1);
}

int Menu_Stores(string Stores[])
{
    int eingabe;
    
    system("CLS");
    system("clear");

    cout<<"Waehlen Sie einen Laden in dem Sie einkaufen wollen: (0/1)"<<endl<<endl;

    for(int i=0;i<max_stores;i++)
    {
        cout<<i<<": "<<Stores[i]<<endl;
    }

    while(!(cin >> eingabe)){
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "Unguelitge Eingabe! Erneut versuchen: "<<endl;;
    }
    
    return eingabe;
}

int yes_no(string Question)
{
    system("CLS");
    std::system("clear");

    cout<<Question<<endl<<endl;

    //cout<<"Ja"<<endl<<"Nein"<<endl;

    char answer;

    cin>>answer;

    if(answer == 'j' || answer == 'J')
    {
        system("CLS");
        std::system("clear");
        return 1;
    }
    else
    {
        system("CLS");
        std::system("clear");
        return 0;
    }
}

int how_many(Article the_article)
{
    system("CLS");
    std::system("clear");

    int eingabe;

    cout<<"Wie oft wollen Sie den Artikel: ";
    the_article.Display_article_name();
    cout<<"Hinzufuegen ?"<<endl<<endl;

    cin>>eingabe;
    return eingabe;
}
