#include <iostream>
#include <vector>
#include <string>

class Teacher
{
private:
    std::string m_name;

public:
    Teacher(std::string name) : m_name {name} {}

    std::string get_name() { return m_name; }
};

class Department
{
private:
    std::vector<Teacher> m_teachers;

public:
    Department() {}

    void add(Teacher teacher) { m_teachers.push_back(teacher); }
    std::vector<Teacher> get_teachers() { return m_teachers; }

    friend std::ostream& operator<<(std::ostream& output, Department &department);
};

std::ostream& operator<<(std::ostream& output, Department &department) 
{
    std::vector<Teacher> teachers = department.get_teachers();
    
    for (int i = 0; i < teachers.size(); ++i)
    {
        Teacher i_teacher = teachers[i];
        
        output << i_teacher.get_name() << " ";
    }

    return output;
}

int main()
{
  // Create a teacher outside the scope of the Department
  Teacher t1{ "Bob" };
  Teacher t2{ "Frank" };
  Teacher t3{ "Beth" };

  {
    // Create a department and add some Teachers to it
    Department department{}; // create an empty Department

    department.add(t1);
    department.add(t2);
    department.add(t3);

    std::cout << department << std::endl;

  } // department goes out of scope here and is destroyed

  std::cout << t1.get_name() << " still exists!\n";
  std::cout << t2.get_name() << " still exists!\n";
  std::cout << t3.get_name() << " still exists!\n";

  return 0;
}