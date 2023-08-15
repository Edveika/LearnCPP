// NOTE: useful when dealing with matrices
#include <iostream>
#include <cassert> // for cassert()

class Matrix
{
private:
    float m_matrix[4][4]{};

public:
    Matrix() {}

    float& operator()(int row, int column);
};

float& Matrix::operator()(int row, int column)
{
    assert(row >= 0 && column < 4);
    assert(column >= 0 && row < 4);

    return m_matrix[row][column];
}


int main()
{
    Matrix matrix;
    matrix(1,3) = 1337.0f;

    return 0;
}