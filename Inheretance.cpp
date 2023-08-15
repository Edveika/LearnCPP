#include <iostream>
#include <vector>
#include <string>

class Car
{
private:
    std::string m_brand;
    std::string m_model;
    int m_manufacture_year;

public:
    Car(std::string brand, std::string model, int manufacture_year) 
    : m_brand { brand }, m_model { model }, m_manufacture_year { manufacture_year }
    {

    }

    std::string get_brand() { return m_brand; }
    std::string get_model() { return m_model; }
    int get_manufacture_year() { return m_manufacture_year; }

    void set_brand(std::string brand) { m_brand = brand; }
    void set_model(std::string model) { m_model = model; }
    void set_manufacture_year(int year) { m_manufacture_year = year; }
};

class SuperSportsCar : public Car
{
private:
    bool m_has_batmobile_thrusters;
    std::string m_custom_bodykit_brand;
    std::vector<std::string> m_sponsor_stickers;

public:
    SuperSportsCar(std::string brand, std::string model, int manufacture_year, 
    bool b_has_batmobile_thusters, std::string bodykit_brand, std::vector<std::string> stickers)
    : Car(brand, model, manufacture_year), m_has_batmobile_thrusters { b_has_batmobile_thusters }, m_custom_bodykit_brand { bodykit_brand }, m_sponsor_stickers { stickers }
    {
    }
};

int main()
{
    SuperSportsCar bumblebee("Camaro", "Chevrolet", 1977, true, "Custom fainted", { "Autobot logo" });

    std::cout << bumblebee.get_brand() << std::endl;
    std::cout << bumblebee.get_model() << std::endl;
    std::cout << bumblebee.get_manufacture_year() << std::endl;
    
    return 0;
}