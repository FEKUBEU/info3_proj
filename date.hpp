#ifndef DATE_H
#define DATE_H

#include <string>


class date
{
  private:              // Gesch�tzte Elemente:
    short tag, monat, jahr;

  public:               // �ffentliche Schnittstelle:
    date()
    {
        tag = 0;
        monat = 0;
        jahr = 0;
    }
    void init(void);
    void init( int tag, int monat, int jahr);
    void print(void);
};


#endif
