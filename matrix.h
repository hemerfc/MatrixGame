#ifndef MATRIX_H
#define MATRIX_H

#define WIDTH 4
#define HEIGHT 4

class Matrix
{
private:
    int matrix[HEIGHT][WIDTH];
public:
    Matrix();

    void SumToLeft();
    void SumToRight();
    void SumToTop();
    void SumToBottom();

    void AddRandom();

    void Show();
};

#endif // MATRIX_H
