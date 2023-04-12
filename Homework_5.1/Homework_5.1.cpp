// Homework_5.1.cpp 

#include <iostream>
#include <windows.h>

class Figure 
{
protected:

    std::string name = "Фигура";
    int sides_count=0;
    
public:

    int get_sides_count() 
    {
        return (sides_count);
    };

    std::string get_name() 
    {
        return (name);
    };

};

class Triangle : public Figure 
{
public:

    Triangle() 
    {
        name = "Треугольник";
        sides_count = 3;
    };
};

class Quadrangle : public Figure 
{
public:

    Quadrangle() 
    {
        name = "Четырёхугольник";
        sides_count = 4;
    };
};


int main()
{
    system("chcp 1251");
    system("cls");

    Figure fig;
    Triangle tri;
    Quadrangle qua;

    std::cout << "Количество сторон:" << std::endl;
    std::cout << fig.get_name() << ": " << fig.get_sides_count() << std::endl;
    std::cout << tri.get_name() << ": " << tri.get_sides_count() << std::endl;
    std::cout << qua.get_name() << ": " << qua.get_sides_count() << std::endl;

}
