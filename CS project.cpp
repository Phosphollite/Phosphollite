// CS Quarter project Game development
#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

void color(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE) ,color;
}
void gotoxy(int x, int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) ,c);
}

using namespace std;

int main()
{
    int Set[] = {7,7,7}
    int counter = 2;
    char key;

    for(int i = 0 ;;)
    {
        key = _getch();
        gotoxy(10,5);
        color(Set[0]);
        cout<<"1.Start ";

        gotoxy(10,6);
        color(Set[1]);
        cout<<"2. Exit";

        gotoxy(10,7);
        color(Set[2];
        cout " Help";
        if(key == 72 && (counter >=2 && counter <=3))
        {
            counter --;
        }
                if(key == 80 && (counter >=1 && counter <=2))
        {
            counter ++;
        }
        if(key == '\r')
            if(counter == 1)
            {
                sleep(1000)
                cout<<" HELLO PLAYER";
            }
            if(counter ==1)
            {
                cout<<"Exeting";
            }
            if(counter == 1)
            { 

                count<<"DAYGANON"<<endl;
                cout<<"LOMONGO"<<endl;
                cout<<"SEVILLE";
            }
    }
    set[0] = 7;
    set[1] = 7;
    set[2] = 7;
    if(counter == 1)
    {
        Set[0] = 12;
    }
     if(counter == 2)
    {
        Set[1] = 12;
    }
     if(counter == 3)
    {
        Set[2] = 12;
    }
        
    return 0;
}
