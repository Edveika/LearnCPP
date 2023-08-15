#include <iostream>
#include <string>

class Exception
{
private:
    std::string m_exception_description;

public:
    Exception(std::string description) : m_exception_description { description } {}

    std::string get_description() { return m_exception_description; }
};

class ArrayException : public Exception
{
private:
    int m_index;
    std::string m_value; // should be a template class to handle all types of values

public:
    ArrayException(std::string value, int index, std::string description) : Exception(description), m_value { value }, m_index { index } {}

    int get_index() { return m_index; }
    std::string get_value() { return m_value; }
};

int main()
{
    std::string arr[] { "1", "2", "0" };

    try
    {
        for (int i = 0; i < 3; ++i)
        {
            if (arr[i] == "0")
                throw ArrayException(arr[i], i, "Value cannot be equal to 0");
        }
    }
    catch(ArrayException& exception)
    {
        std::cout << "[EXCEPTION] Value: " << exception.get_value() << " ; Index: " << exception.get_index() << std::endl;
        std::cout << exception.get_description() << std::endl;
    }


    return 0;
}