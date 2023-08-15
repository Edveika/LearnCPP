#include <iostream>

class Grade
{
private:
    int m_grade;

public:
    Grade(int grade) : m_grade { grade } {}

    int get_grade() { return m_grade; }
    void set_grade(int grade) { m_grade = grade; }

    Grade& operator=(const Grade &grade) { m_grade = grade.m_grade; return *this; }
};

int main()
{
    Grade grade(10);
    Grade new_grade(grade);

    std::cout << new_grade.get_grade() << std::endl;

    return 0;
}