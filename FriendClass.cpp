#include <iostream>

class GUI;

class Application
{
private:
    int m_ram_usage;
    int m_cpu_usage;

public:
    Application() = default;

    void set_cpu_usage(int cpu_usage) { m_cpu_usage = cpu_usage; }
    void set_ram_usage(int ram_usage) { m_ram_usage = ram_usage; }

    friend class GUI; // gives access to GUI class to all of the private members
};

class GUI
{
public:
    GUI() = default;

    void draw_cpu_usage(Application &app) { std::cout << "CPU usage: " << app.m_cpu_usage << std::endl; }
    void draw_ram_usage(Application &app) { std::cout << "RAM usage: " << app.m_ram_usage << std::endl; }
};

int main()
{
    Application app;
    GUI gui;

    app.set_cpu_usage(1337);
    app.set_ram_usage(69);

    gui.draw_cpu_usage(app);
    gui.draw_ram_usage(app);

    return 0;
}