#include <iostream>
#include <iomanip>
#include <cmath>
void T()
{
    std::cout << "hello!!!" << std::endl;

    int x;
    std::cout << "To accommodate the x⁷-5x⁵-1 equation enter x :";
    std::cin >> x ;

    int c = pow(x, 7) - 5*pow(x, 5) -1 ;

    std::cout << "result  : " << std::showpos << c << std::endl ;

}

void T2()
{
    std::cout << "hello!!!" << std::endl;

    unsigned a;

    std::cout << "To accommodate the |a-2|+√a+1 equation enter а :";
    std::cin >> a ;

    float b = fabs(a-2)+ sqrt(a+1) ;
    std::cout << " result  : " << std::setprecision(3) << b << std::endl ;

}

void T3()
{
    std::cout << "hello!!!" << std::endl;

    bool k, l, m, n ;

    std::cout << "enter 4 number (0;1) :" << std::endl;


    std::cout << "first number = ";
    std::cin >> k ;


    std::cout << "second number = ";
    std::cin >> l ;


    std::cout << "third number  = ";
    std::cin >> m ;


    std::cout << "fourth number = ";
    std::cin >> n ;

    bool v = n && l || ((m||!k)&&!(m&&!k)) ;

    std::cout << "result  : " << std::boolalpha << v << std::endl;

}

void T4 ()
{
    std::cout << "hello!!!" << std::endl;
    std::cout << "To accommodate the 2ᵇ equation enter b  :";

    unsigned short int b;

    std::cin >> b;

    unsigned short int x = pow(2,b);

    std::cout<< "decimal result : " << std::dec << x <<std::endl;
    std::cout<< "octal result : " << std::oct << x <<std::endl;

}

void T5()
{

    std::cout << "hello!!!" << std::endl;

    unsigned short int e, d, c, f ;

    std::cout << "enter 4 number " << std::endl;


    std::cout << "first number = ";
    std::cin >> e ;


    std::cout << "second number = ";
    std::cin >> d ;


    std::cout << "third number = ";
    std::cin >> c ;


    std::cout << "fourth number = ";
    std::cin >> f ;

    unsigned short int q = (!e|d)&c^f;

    std::cout << "result  : " << std::hex << std::showbase<< std::internal << std::setw(6) << std::setfill('0') << q << std::endl;


}



int main()
{
    T();
    T2();
    T3();
    T4();
    T5();
}
