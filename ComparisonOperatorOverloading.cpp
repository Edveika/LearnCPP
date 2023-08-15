#include <iostream>

class Count
{
private:
    int m_total_count;

public:
    Count() : m_total_count { 0 } {}
    Count(int x) : m_total_count { x } {}

    int get_total_count() { return m_total_count; }
    void set_total_count(int value) { m_total_count = value; }

    friend std::istream& operator>>(std::istream &input, Count &count);

    //Comparison operator overload
    friend bool operator==(const Count &count1, const Count &count2) { return count1.m_total_count == count2.m_total_count; }
    friend bool operator!=(const Count &count1, const Count &count2) { return count1.m_total_count != count2.m_total_count; }
};

std::istream& operator>>(std::istream &input, Count &count)
{
    input >> count.m_total_count;

    return input;
}

int main()
{
    Count count1;
    Count count2;

    std::cin >> count1 >> count2;

    if (count1 == count2)
        std::cout << "Counts are equal!" << std::endl;
    else if (count1 != count2)
        std::cout << "Counts !equal :(" << std::endl;

    return 0;
}