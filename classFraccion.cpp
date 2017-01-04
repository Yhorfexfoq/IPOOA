#include <iostream>
#include <sstream>
using namespace std;

class Fraccion
{
    int num,den;
public:
    Fraccion(int,int);
    Fraccion sumar(Fraccion);
    Fraccion simplificar();
    string mostrar();
};
Fraccion::Fraccion(int x,int y)
{
    num=x;
    den=y;
}
Fraccion Fraccion::sumar(Fraccion f)
{
    int n,d;
    n=num*f.den+den*f.num;
    d=den*f.den;
    Fraccion fsuma(n,d);
    return fsuma;

}
Fraccion Fraccion::simplificar()
{
    int men;
    if (num<=den)
        men=num;
    else
        men=den;
    for (int i=2; i<men;i++)
    {
        while(num%i==0 && den%i==0)
        {
            num=num/i;
            den=den/i;
        }

    }
    Fraccion fsimple(num,den);
    return fsimple;
}
string Fraccion::mostrar()
{
    stringstream n,d;
        n<<num;
        d<<den;
        return n.str()+"/"+d.str();
}
int main()
{
    Fraccion f1(2,4),f2(5,3),f3(0,1),f4(0,0);
    cout<<"Fraccion 1: "<<f1.mostrar()<<endl;
    cout<<"Fraccion 2 "<<f2.mostrar()<<endl;
    f3=f1.sumar(f2);
    cout<<"Suma= "<<f3.mostrar()<<endl;
    f4=f3.simplificar();
    cout<<"Fraccion simplificada= "<<f4.mostrar()<<endl;
}
