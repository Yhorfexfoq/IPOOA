#include <iostream>

using namespace std;
float suma (float a,float b)
{
    return a+b;
}
float resta (float a,float b)
{
    return a-b;
}
float multiplicacion (float  a,float b)
{
    return a*b;
}
float division (float a,float b)
{
    return a/b;
}
int main()
{
    int opc,a,b;
    float (*f[4])(int,int)={suma,resta,multiplicacion,division};
    cout<<"ingrese valores de a y b: \n"; cin>>a>>b;
    cout<<"(0)suma, (1)resta, (2)multiplicacion, (3)divicion\n";
    while (true){
        cout<<"Ingrese opcion; "; cin>>opc;
        if (opc==0)
            cout<<(*f[opc])(a,b)<<endl;
        else if (opc==1)
            cout<<(*f[opc])(a,b)<<endl;
        else if (opc==2)
            cout<<(*f[opc])(a,b)<<endl;
        else if (opc==3)
            cout<<(*f[opc])(a,b)<<endl;
        else
            cout<<"Opcion invalida\n";
    }

    return 0;
}
