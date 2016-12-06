// FELIX ORLANDO ORURO QUISPE 

#include <iostream>
using namespace std;

//Prototipos
void crearMatriz(int **&,int );
void ingresarMatriz(int **,int ,int );
void mostrarMatriz(int **,int ,int );
void liberarMatriz(int **,int );
void crearVector(int *&,int );
void liberarVector(int *);
void cambiarOrdenMatriz(int **,int **,int *,int , int,int ,int );

int main()
{
    int f,c,**M,**M1,*V,f1,c1,n;
    cout<<"Ingresa  filas y columnas: "<<endl;
    cin>>f>>c;
    n=f*c;
    crearMatriz(M,n);
    crearMatriz(M1,n);
    ingresarMatriz(M,f,c);
    mostrarMatriz(M,f,c);
    crearVector(V,n);
    cout<<"Ingresa nuevas filas y columnas: "<<endl;
    cin>>f1>>c1;
    if (f1*c1==f*c)
    {
        cambiarOrdenMatriz (M,M1,V,f,c,f1,c1);
        mostrarMatriz(M1,f1,c1);
    }
    else
        cout<<"Orden no valido\n";
    liberarVector(V);
    liberarMatriz(M,n);
    liberarMatriz(M1,n);
    return 0;
}
void crearMatriz(int **&M,int n)
{
	M=new int*[n];
	for (int i=0;i<n;i++)
		*(M+i)=new int[n];
}
void ingresarMatriz(int **M,int f,int c)
{
    for (int i=0;i<f;i++)
        for(int j=0;j<c;j++)
        {
            cout<<"Valor?: ";
            cin>>*(*(M+i)+j);
        }
}
void mostrarMatriz(int **M,int f,int c)
{
	for(int i=0;i<f;i++)
	{
		for (int j=0;j<c;j++)
			cout<<*(*(M+i)+j)<<"\t";
		cout<<"\n";
	}
}
void liberarMatriz(int **M,int f)
{
    for (int i=0; i<f;i++)
        delete[] M[i];
    delete[] M;
}
void crearVector(int *&V,int n)
{
    V = new int [n];
}

void liberarVector(int *V)
{
    delete V;
}
void cambiarOrdenMatriz(int **M,int **M1,int *V,int f ,int c,int f1,int c1)
{
    int n=0,n1=0;
    for(int i=0;i<f;i++)
	{
		for (int j=0;j<c;j++)
			{
            *(V+n)=*(*(M+i)+j);
            n++;
			}
	}
	for (int i=0; i<f1; i++)
    {
        for (int j=0; j<c1;j++)
        {
            *(*(M1+i)+j)=*(V+n1);
            n1++;
        }
    }

}
