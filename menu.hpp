#ifndef MENU_H
#define MENU_H

#include <string.h>
#include "cart.hpp"
#include "article.hpp"
#include "receipt.hpp"

int Menu_Article(Article[]);
int Menu_Stores(std::string[]);
int yes_no(std::string);
int yes_no_nodelete(std::string);
int how_many(Article);

#endif
