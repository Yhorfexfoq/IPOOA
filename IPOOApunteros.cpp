#include <iostream>

using namespace std;
/*
void crear(int *&V,int n)
{
    V = new int [n];
}
void ingresar (int *V ,int n )
{
    for (int i=0;i<n;i++)
    {
        cout<<"Valor: ";
        cin>>*(V+i); //V[i]
    }
}
void mostrar(int *V,int n)
{
    for (int i=0;i<n;i++)
        cout<<*(V+i)<<" ";
}
void liberar(int *V)
{
    delete V;
}
int *sumar(int *v1,int *v2,int n )
{
    int *vsuma;
    crear(vsuma,n);
    for(int i=0; i<n; i++)
        *(vsuma+i)=*(v1+i) + *(v2+i);
    return vsuma;

}
int main()
{
    int *v1, *v2, *v3 ,n;
    cout<<"Cantidad de elementos: ";
    cin>>n;
    crear(v1,n); crear(v2,n); crear(v3,n);
    ingresar(v1,n);
    cout<<"---------------------------------------\n";
    ingresar(v2,n);
    v3=sumar(v1,v2,n);
    mostrar(v3,n);
    liberar(v1); liberar(v2); liberar(v3);
    return 0;
}
*/

void crear (string *&cola, int n){
    cola=new string[n];
}
void registrar(string *cola, string nombre, int pos){
        *(cola+pos)=nombre;
}
string darnombre(string *cola, int pos){
    string n =*cola;
    for(int i=0;i<pos-1;i++)
        *(cola + i)=*(cola+i+1);
    *(cola+pos-1)="";
    return n;
}
void mostrar(string *cola, int pos)
{   cout<<"-----------------------------\n";

    for(int i =0; i<pos; i++)
        cout<<*(cola+i)<<" ";
    cout<<"-----------------------------\n";
}
int main(){
    int n,opc,pos=0;
    string *cola, nombre;
    cout<<"cantidad maxima pacientes?";
    cin>>n;
    crear(cola, n);
    while (true)
    {
        cout<<"(1)registrar paciente\n";
        cout<<"(2)se atiende a: \n";
        cout<<"(3)ver lista de espera \n";
        cout<<"(4)salir \n";
        cin>>opc;
        if(opc==1)
        {
            if (pos<n)
            {
                cout<<"nombre?";
                cin>>nombre;
                registrar(cola, nombre,pos);
                pos++;
            }
            else
                cout<<"Ya no se puede ingresar mas pacientes\n";

        }
        else if(opc==2)
        {
            if (pos!=0)
            {
                cout<<"atender a: "<<darnombre(cola,pos)<<endl;
                pos--;
            }
            else
                cout<<"No hay mas pacientes por atender\n";
        }
        else if(opc==3)
        {
            if (pos!=0)
                mostrar(cola,pos);
            else
                cout<<"No hay ningun paciente\n";
        }

        else if(opc==4)
        {
            break;
        }
        else
            cout<<"opcion incorrecta \n";
    }
    return 0;
}
