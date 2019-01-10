#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <climits>

#include "menu.hpp"

using namespace std;

int Menu_Article(Article Produkte[])
{
    int eingabe;
    int i;
    system("CLS");
    system("clear");

    cout<<"Waehlen Sie Ihre Produkte aus:"<<endl;

        for( i = 0; i < max_articles; i++)
        {
            cout<<(i+1)<<" : ";
            Produkte[i].Display_article_name();
        }

        cout<<(i+1)<<": Warenkorb"<<endl<<endl;

        while(!(cin >> eingabe)){
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "Unguelitge Eingabe! Erneut versuchen: "<<endl;;
    }
        return (eingabe-1);
}

int Menu_Stores(string Stores[])
{
    cout<<"Wählen Sie einen Laden in dem Sie einkaufen wollen"<<endl<<endl;

    for(int i=0;i<max_stores;i++)
    {
        cout<<i<<": "<<Stores[i]<<endl;
    }

    int eingabe;
    cout<<"Eingabe:";
    
    while(!(cin >> eingabe)){
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "Unguelitge Eingabe! Erneut versuchen: "<<endl;;
    }

    return eingabe;
}

int yes_no(string Question){
    system("CLS");
    system("clear");

    cout<<Question<<endl<<endl;

    //cout<<"1: Ja"<<endl<<"2: Nein"<<endl;

    string answer = "";

    //cin.clear();
    //cin.ignore(INT_MAX);

    while (getchar() != '\n') continue;
    getline(cin, answer);
    

    if(answer == "j" || answer == "J")
    {
        system("clear");
        system("CLS");
        
        cout<<"Return 1";

        return 1;
    }
    else
    {
        system("clear");
        system("CLS");
        
        cout<<"Return 0";

        return 0;
    }
}

int yes_no_nodelete(string Question)
{


    cout<<Question<<endl<<endl;

    //cout<<"1: Ja"<<endl<<"2: Nein"<<endl;

    char answer;

    cin>>answer;

    if(answer == 'j' || answer == 'J')
    {
        system("CLS");
        system("clear");
        return 1;
    }
    else
    {
        system("clear");
        system("CLS");
        return 0;
    }
}



int how_many(Article the_article)
{
    system("CLS");
    system("clear");

    int eingabe;

    cout<<"Wie oft wollen Sie den Artikel: ";
    the_article.Display_article_name();
    cout<<"hinzufuegen ?"<<endl<<endl;

    cin>>eingabe;
    return eingabe;
}
