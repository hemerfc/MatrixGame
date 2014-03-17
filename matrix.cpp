#include "matrix.h"
#include <iostream>
#include <iomanip>
#include <time.h>
#include <stdlib.h>

using namespace std;

Matrix::Matrix()
{
    /* initialize random seed: */
    srand(time(NULL));

    for(int y = 0; y < HEIGHT; y++)
        for(int x = 0; x < WIDTH; x++)
            matrix[x][y] = 0;

    this->AddRandom();
    this->AddRandom();
}

void Matrix::SumToLeft()
{
}

void Matrix::SumToRight()
{
    for(int y = 0; y < HEIGHT; y++)
    {
        for(int x = WIDTH-2; x >= 0; x--)
        {
            // se diff de 0
            if(matrix[x][y] != 0)
            {
                // se o vizinho é 0 entao move
                // animacao move
                if(matrix[x+1][y] == 0)
                {
                    matrix[x+1][y] = matrix[x][y];
                    matrix[x][y] = 0;
                }

                // se igual ao vizinho entao soma e zera
                // animacao soma
                if(matrix[x][y] == matrix[x+1][y])
                {
                    matrix[x+1][y] += matrix[x][y];
                    matrix[x][y] = 0;
                }
            }
        }
    }
    this->AddRandom();
}

void Matrix::SumToTop()
{
}

void Matrix::SumToBottom()
{
}

void Matrix::AddRandom()
{
    int rx, ry;
    /* encontra uma posicao aleatoria com 0 */
    do {
        rx = (rand() % WIDTH) + 1;
        ry = (rand() % HEIGHT) + 1;
    }while(matrix[rx][ry] != 0);

    /* cria um valor 2 ou 4 */
    int v = ((rand() % 2) + 1) * 2;

    matrix[rx][ry] = v;
}

void Matrix::Show()
{
    cout<<"---------------------"<<endl;
    for(int y = 0; y < HEIGHT; y++)
    {
        cout<<"|";
        for(int x = 0; x < WIDTH; x++)
        {
            cout<<setw(4)<<matrix[x][y]<<"|";
        }
        cout<<endl;
    }
    cout<<"---------------------"<<endl;
}

