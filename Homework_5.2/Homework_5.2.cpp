// Homework_5.2.cpp 


#include <iostream>
#include <windows.h>

class Figure
{
public:

    std::string name = "";

    Figure()
    {
        name = "Фигура";
    };  

    virtual void print_info()
    {
        std::cout << name << ": " << std::endl;
    }
};

class Triangle : public Figure
{
protected:

int a, b, c, A, B, C;

public:

    Triangle(int a,int b,int c,int A,int B,int C):Figure()
    {
        name = "Треугольник";
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    };

    void print_info() override
    {
        std::cout << name << ": " << std::endl;
        std::cout << "Cтороны: "<< "a=" << a << " b = " << b << " c = " << c << std::endl;
        std::cout << "Углы: " << "A=" << A << " B = " << B << " C = " << C << std::endl;
        std::cout << std::endl << std::endl;
    };

};

class Right_triangle : public Triangle 
{
public:

    Right_triangle(int a, int b, int c, int A, int B): Triangle( a, b, c, A, B, C)
    {
        name = "Прямоугольный треугольник";
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = 90;
    };
};

class Isosceles_triangle : public Triangle
{
public:

    Isosceles_triangle(int a, int b, int A, int B) : Triangle(a, b, c, A, B, C)
    {
        name = "Равнобедренный треугольник";
        this->a = a;
        this->b = b;
        this->c = a;
        this->A = A;
        this->B = B;
        this->C = A;
    };
};

class Equilateral_triangle : public Triangle
{
public:

    Equilateral_triangle(int a) : Triangle(a, b, c, A, B, C)
    {
        name = "Равносторонний треугольник";
        this->a = a;
        this->b = a;
        this->c = a;
        this->A = 60;
        this->B = 60;
        this->C = 60;
    };
};

class Quadrangle : public Figure
{
protected:

int a, b, c, d, A, B, C, D;

public:

    

    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) :Figure()
    {
        name = "Четырёхугольник";
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    };

    void print_info() override
    {
        std::cout << name << ": " << std::endl;
        std::cout << "Cтороны: " << "a=" << a << " b = " << b << " c = " << c << " d = "<< d<< std::endl;
        std::cout << "Углы: " << "A=" << A << " B = " << B << " C = " << C << " D= " << D << std::endl;
        std::cout << std::endl << std::endl;
    };

};

class Parallelogram : public Quadrangle
{
public:

    Parallelogram(int a, int b, int A, int B) :Quadrangle(a, b, c, d, A, B, C, D)
    {
        name = "Параллелограмм";
        this->a = a;
        this->b = b;
        this->c = a;
        this->d = b;
        this->A = A;
        this->B = B;
        this->C = A;
        this->D = B;
    };
};

class Rectangle_ : public Parallelogram
{
public:

    Rectangle_(int a, int b) :Parallelogram(a, b, A, B)
    {
        name = "Прямоугольник";
        this->a = a;
        this->b = b;
        this->c = a;
        this->d = b;
        this->A = 90;
        this->B = 90;
        this->C = 90;
        this->D = 90;
    };
};

class Rhombus : public Parallelogram
{
public:

    Rhombus(int a, int A, int B) :Parallelogram(a, b, A, B)
    {
        name = "Ромб";
        this->a = a;
        this->b = a;
        this->c = a;
        this->d = a;
        this->A = A;
        this->B = B;
        this->C = A;
        this->D = B;
    };
};

class Square : public Rhombus
{
public:

    Square(int a) :Rhombus(a, A, B)
    {
        name = "Квадрат";
        this->a = a;
        this->b = a;
        this->c = a;
        this->d = a;
        this->A = 90;
        this->B = 90;
        this->C = 90;
        this->D = 90;
    };
};

int main()
{
    system("chcp 1251");
    system("cls");

    Triangle tr(10, 20, 30, 50, 60, 70);
    Right_triangle rt(10,20,30,50,60);
    Isosceles_triangle it(10, 20, 50, 60);
    Equilateral_triangle et(30);
    Quadrangle qu(10, 20, 30, 40, 50, 60, 70, 80);
    Parallelogram pa(20, 30, 30, 40);
    Rectangle_ re(10, 20);
    Rhombus rh(30, 30, 40);
    Square sq(20);

    tr.print_info();
    rt.print_info();
    it.print_info();
    et.print_info();
    qu.print_info();
    re.print_info();
    sq.print_info();
    pa.print_info();
    rh.print_info();  
}
