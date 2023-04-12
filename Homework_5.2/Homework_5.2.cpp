// Homework_5.2.cpp 


#include <iostream>
#include <windows.h>

class Figure
{
public:

    int a, b, c, d, A, B, C, D;
    std::string name = "";

    Figure(int a, int b, int c,int d, int A, int B, int C,int D)
    {
        name = "Фигура";
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    };

    std::string get_name()
    {
        return (name);
    };
    int get_a()
    {
        return (a);
    };
    int get_b()
    {
        return (b);
    }; 
    int get_c()
    {
        return (c);
    }; 
    int get_d()
    {
        return (d);
    }; 
    int get_A()
    {
        return (A);
    }; 
    int get_B()
    {
        return (B);
    }; 
    int get_C()
    {
        return (C);
    }; 
    int get_D()
    {
        return (D);
    };
};

class Triangle : public Figure
{
public:

    Triangle(int a,int b,int c,int A,int B,int C):Figure( a, b, c, d, A, B, C, D)
    {
        name = "Треугольник";
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = 0;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = 0;
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
        this->d = 0;
        this->A = A;
        this->B = B;
        this->C = 90;
        this->D = 0;
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
        this->d = 0;
        this->A = A;
        this->B = B;
        this->C = A;
        this->D = 0;
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
        this->d = 0;
        this->A = 60;
        this->B = 60;
        this->C = 60;
        this->D = 0;
    };
};

class Quadrangle : public Figure
{
public:

    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) :Figure(a,b,c,d,A,B,C,D)
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

void print_info(Figure* add) 
{
    std::cout << add->get_name() << ": " << std::endl;
    std::cout << "Cтороны: "; 
    if (add->get_a() != 0) {std::cout << "a=" << add->get_a();} else { std::cout << "";}
    if (add->get_b() != 0) {std::cout << " b=" << add->get_b();} else { std::cout << "";}
    if (add->get_c() != 0) {std::cout << " c=" << add->get_c();} else { std::cout << "";}
    if (add->get_d() != 0) {std::cout << " d=" << add->get_d();} else { std::cout << "";}
    std::cout << std::endl;
    std::cout << "Углы: "; 
    if (add->get_A() != 0) {std::cout << "A=" << add->get_A();} else { std::cout << "";}
    if (add->get_B() != 0) {std::cout << " B=" << add->get_B();} else { std::cout << "";}
    if (add->get_C() != 0) {std::cout << " C=" << add->get_C();} else { std::cout << "";}
    if (add->get_D() != 0) {std::cout << " D=" << add->get_D();} else { std::cout << "";}
    std::cout << std::endl << std::endl;


};

int main()
{
    system("chcp 1251");
    system("cls");

    Triangle tr(10, 20, 30, 50, 60, 70);
    Right_triangle rt(10,20,30,50,60);
    Isosceles_triangle it(10,20,50,60);
    Equilateral_triangle et(30);
    Quadrangle qu(10, 20, 30, 40, 50, 60, 70, 80);
    Parallelogram pa(20, 30, 30, 40);
    Rectangle_ re(10, 20);
    Rhombus rh(30, 30, 40);
    Square sq(20);

    print_info(&tr);
    print_info(&rt);
    print_info(&it);
    print_info(&et);
    print_info(&qu);
    print_info(&re);
    print_info(&sq);
    print_info(&pa);
    print_info(&rh);
    
}
