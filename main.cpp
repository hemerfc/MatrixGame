#include "matrix.h"
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

/*
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
*/

int main(int argc, char *argv[])
{
    Matrix* m = new Matrix();

    unsigned char a;
    while(1)
    {
        m->Show();

        a=getch();
        //for detect the function\arrow keys
        //we must call the getch() again
        //testing if a is '0' or '0xE0'
        if (a==0 || a==0xE0) a=getch();

        if (a==27) //ESC para sair
            break;
        else if (a==72)
            m->SumToTop();
        else if (a==80)
            m->SumToBottom();
        else if (a==75)
            m->SumToLeft();
        else if (a==77)
            m->SumToRight();
        else
            cout<< "Char:"<<setw(4)<<(int)a;
    }
    return 0;
}
