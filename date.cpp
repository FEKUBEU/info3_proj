#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "date.hpp"

using namespace std;

// ---------------------------------------------------
// datum.cpp
// Implementierung der Methoden der Klasse Datum.
// ---------------------------------------------------

#include "date.hpp"

#include <iostream>
#include <ctime>
using namespace std;

// ---------------------------------------------------
void date::init(void)  // Aktuelles Datum holen und
{                       // den Datenelementen zuweisen.
   struct tm *zeit;         // Zeiger auf Struktur tm.
   time_t sec;              // Für die Sekunden.

   time(&sec);              // Aktuelle Zeit holen.
   zeit = localtime(&sec);  // Eine Struktur vom Typ tm
                            // initialisieren und Zeiger
                            // darauf zurückgeben.
   tag   = (short) zeit->tm_mday;
   monat = (short) zeit->tm_mon + 1;
   jahr  = (short) zeit->tm_year + 1900;
}

// ---------------------------------------------------
void date::init( int t, int m, int j)
{
   tag   = (short) t;
   monat = (short) m;
   jahr  = (short) j;
}

// ---------------------------------------------------
void date::print(void)     // Datum anzeigen
{
   cout << tag << '.' << monat << '.' << jahr
        << endl;
}



