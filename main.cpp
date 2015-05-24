#include <iostream>
#include <string>
#include "tic_tac_toe_header.h"
#include <ncurses.h>

using namespace std;

int main()
{
    char tab[3][3];

    hello ();
    plansza (tab);
    move1 (tab);

    return 0;
}

