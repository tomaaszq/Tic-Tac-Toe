#ifndef TIC_TAC_TOE_HEADER_H
#define TIC_TAC_TOE_HEADER_H
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;


void move1 (char tab[3][3])
{
    string wybor;
    int gracz=0,ile=0, mistake=0;
    char znak[2];
    znak[0]='X';
    znak[1]='O';


    do
    {

        do
        {
cout << endl << endl << endl << "Gracz: " << gracz+1 << endl << endl;
cout << "Gdzie chcesz umieścić swój symbol? :";
cin >> wybor;
if (( tab[wybor[1]-'1'][wybor[0]-'a']=='O' )||(tab[wybor[1]-'1'][wybor[0]-'a']=='X'))
{
        cout << "W tym miejscu jest już postawiony symbol!" << "Spróbuj jeszcze raz!";
        mistake = mistake+1;

    }
        else
{
        tab[wybor[1]-'1'][wybor[0]-'a']=znak[gracz];
        mistake = 0;
    }
        }
        while (mistake!=0);
        ile=ile-mistake;


cout << endl;
cout << "      A     B     C   " << endl
     << "    _________________ " << endl
     << "   |     |     |     |" << endl
     << " 1 |  "<<tab[0][0]<<"  |  "<<tab[0][1]<<"  |  "<<tab[0][2]<<"  |" << endl
     << "   |_____|_____|_____|" << endl
     << "   |     |     |     |" << endl
     << " 2 |  "<<tab[1][0]<<"  |  "<<tab[1][1]<<"  |  "<<tab[1][2]<<"  |" << endl
     << "   |_____|_____|_____|" << endl
     << "   |     |     |     |" << endl
     << " 3 |  "<<tab[2][0]<<"  |  "<<tab[2][1]<<"  |  "<<tab[2][2]<<"  |" << endl
     << "   |_____|_____|_____|" << endl;


//skos wygrana L
if (((tab[0][0]=='X')&&(tab[1][1]=='X')&&(tab[2][2]=='X'))||((tab[0][0]=='O')&&(tab[1][1]=='O')&&(tab[2][2]=='O')))
{
    ile=9;
}

//skos wygrana P
if (((tab[0][2]=='X')&&(tab[1][1]=='X')&&(tab[2][0]=='X'))||((tab[0][2]=='O')&&(tab[1][1]=='O')&&(tab[2][0]=='O')))
{
    ile=9;
}

//poziom 1 wygrana
if (((tab[0][0]=='X')&&(tab[0][1]=='X')&&(tab[0][2]=='X'))||((tab[0][0]=='O')&&(tab[0][1]=='O')&&(tab[0][2]=='O')))
{
    ile=9;
}

//poziom 2 wygrana
if (((tab[1][0]=='X')&&(tab[1][1]=='X')&&(tab[1][2]=='X'))||((tab[1][0]=='O')&&(tab[1][1]=='O')&&(tab[1][2]=='O')))
{
    ile=9;
}

//poziom 3 wygrana
if (((tab[2][0]=='X')&&(tab[2][1]=='X')&&(tab[2][2]=='X'))||((tab[2][0]=='O')&&(tab[2][1]=='O')&&(tab[2][2]=='O')))
{
    ile=9;
}

//pion 1
if (((tab[0][0]=='X')&&(tab[1][0]=='X')&&(tab[2][0]=='X'))||((tab[0][0]=='O')&&(tab[1][0]=='O')&&(tab[2][0]=='O')))
{
    ile=9;
}

//pion 2
if (((tab[0][1]=='X')&&(tab[1][1]=='X')&&(tab[2][1]=='X'))||((tab[0][1]=='O')&&(tab[1][1]=='O')&&(tab[2][1]=='O')))
{
    ile=9;
}

//pion 3
if (((tab[0][2]=='X')&&(tab[1][2]=='X')&&(tab[2][2]=='X'))||((tab[0][2]=='O')&&(tab[1][2]=='O')&&(tab[2][2]=='O')))
{
    ile=9;
}

//TRYUMF
if (ile==9)
{
    cout << endl << endl
         << "_______________________________" << endl << endl
         << "     G R A T U L A C J E !     " << endl
         << "_______________________________" << endl << endl
         << "        WYGRAŁ GRACZ " << gracz+1 << "!" << endl << endl << endl << endl;
}

//zmiana gracza
if (gracz==0)
{
    gracz=1;
}
else
{
    gracz=0;
}

ile=ile+1;
    }

while (ile<9);
}

void plansza (char tab[3][3])
{
for (int i=0;i<3;i++)
{
   for (int k=0;k<3;k++)
   {
       tab[i][k]=' ';
   }
}

    cout << "      A     B     C   " << endl
         << "    _________________ " << endl
         << "   |     |     |     |" << endl
         << " 1 |  "<<tab[0][0]<<"  |  "<<tab[0][1]<<"  |  "<<tab[0][2]<<"  |" << endl
         << "   |_____|_____|_____|" << endl
         << "   |     |     |     |" << endl
         << " 2 |  "<<tab[1][0]<<"  |  "<<tab[1][1]<<"  |  "<<tab[1][2]<<"  |" << endl
         << "   |_____|_____|_____|" << endl
         << "   |     |     |     |" << endl
         << " 3 |  "<<tab[2][0]<<"  |  "<<tab[2][1]<<"  |  "<<tab[2][2]<<"  |" << endl
         << "   |_____|_____|_____|" << endl;

}
void hello ()
{
    cout << "       No siema!" << endl << "Zapraszam do gry w kółko i krzyżyk." << endl
         << "Grę opracowałem ja - czyli Tomasz Rudowicz." << endl
         << "Poniżej masz planszę na której będzie nasza rozgrywka," << endl
         << "Rozgrywkę rozpoczyna Gracz 1, którego symbolem jest X !"<< endl
         << "Życzę dobrej zabawy!"
               << endl << endl;
}

#endif // TIC_TAC_TOE_HEADER_H
