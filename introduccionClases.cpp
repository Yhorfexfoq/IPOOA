#include <iostream>

using namespace std;
/*
class Rectangulo
{
    float base,altura;
public:
    void setBase(float);
    void setAltura(float);
    float getBase();
    float getAltura();
    float area();
    float perimetro();

};
void Rectangulo::setBase(float x)
{
    base=x;
}
void Rectangulo::setAltura(float x)
{
    altura=x;
}
float Rectangulo::getBase()
{
    return base;
}
float Rectangulo::getAltura()
{
    return altura;
}
float Rectangulo::area()
{
    return base*altura;
}
float Rectangulo::perimetro()
{
    return 2*(base+altura);
}

int main()
{
    Rectangulo r1,r2;
    r1.setBase(3.5);
    r1.setAltura(2);
    cout <<"Base de r1= "<<r1.getBase()<<endl;//":" punto de acceso
    cout <<"Altura de r1= "<<r1.getAltura()<<endl;
    cout <<"Area de r1= "<<r1.area()<<endl;
    cout <<"Perimetro de r1= "<<r1.perimetro()<<endl;
    r2.setBase(2);
    r2.setAltura(4);
    cout <<"Area de r2= "<<r2.area()<<endl;
    cout <<"Perimetro de r2= "<<r2.perimetro();
    return 0;
}
*/
class Entero
{
    int valor;
public:
    void setValor(int);
    int getValor();
    Entero sumar(Entero);
    Entero restar(Entero);
    Entero cambiarSigno();
};
void Entero::setValor(int x)
{
    valor=x;
}
int Entero::getValor()
{
    return valor;
}
Entero Entero::sumar(Entero x)
{
    Entero ns;
    ns.setValor(valor + x.getValor());
    return ns;
}

Entero Entero::cambiarSigno()
{
    Entero inv;
    inv.setValor(valor*-1);
    return inv;
}

Entero Entero::restar(Entero x)
{
    Entero nr;
    return sumar(x.cambiarSigno());
}

int main()
{
    Entero r1,r2,rs,rr,rc;
    r1.setValor(6);
    r2.setValor(5);

    rs=r1.sumar(r2);
    rr=r1.restar(r2);
    cout<<"La suma es= "<<rs.getValor()<<endl;
    cout<<"La resta es= "<<rr.getValor()<<endl;
    return 0;
}
