#include <iostream>

class Coordinate
{
private:
    int m_x, m_y, m_z;

public:
    Coordinate(int x, int y, int z) : m_x { x }, m_y { y }, m_z { z } {}

    friend std::ostream& operator<<(std::ostream &output, const Coordinate &coordinate);
    friend std::istream& operator>>(std::istream &input, Coordinate &coordinate);
};

std::ostream& operator<<(std::ostream &output, const Coordinate &coordinate)
{
    output << coordinate.m_x << ";" << coordinate.m_y << ";" << coordinate.m_z;

    return output;
}

std::istream& operator>>(std::istream &input, Coordinate &coordinate)
{
    input >> coordinate.m_x >> coordinate.m_y >> coordinate.m_z;

    return input;
}

int main()
{
    Coordinate coord(1337, 7331, 3713);

    std::cout << "Coordinate: " << coord << std::endl;

    std::cin >> coord;

    std::cout << "New coordinate: " << coord << std::endl;

    return 0;
}