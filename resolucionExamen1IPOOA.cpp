#include <iostream>
using namespace std;
//ejercicio1
/*
int menPares(int A[], int n )
{
	int men=A[0];
	for (int i=2; i<n;i+=2)
		if (A[i]<men)
			men=A[i];
	return men;

}

int mayImpares(int A[], int n )
{
	int may=A[1];
	for (int i=1; i<n;i+=2)
		if (A[i]>may)
			may=A[i];
	return may;

}

bool esPartidario(int A[], int n)
{
	if (menPares(A,n)> mayImpares(A,n))
	{
		return true;
	}
	return false
}
int main()
{
	int A[100]={100,5,200,1,1000,0,600,50,300,4};
	if(esPartidario(A,10))
		cout<<"Es partidario ";
	else
		cout<<"No es partidario ";
	return 0;
}
*/

//Ejercicio 2
/*
int contarEnteros(string cad)
{
	int cont=0;
	for(int i=0; i<cad.size(); i++)
		if (cad [i]>='0' && cad[i]<='9')
		{
			while(cad[i]>='0' && cad[i]<='9')
				i++;
			cont ++;

		}

	return cont;
}

int main()
{
	cout<<"Existen "<<contarEnteros("Hola 23 24 3,45") << "numeros enteros";
	return 0;
}

*/
//Ejercicio 3
bool puntoSilla (int M[][3],int f ,int c)
{
    for(int i=0;i<f;i++)
    {


        int menFila=M[i][0],col=0;
        for (int j=0;j<c;j++)
        {
            if (M[i][j]<menFila)
            {
                menFila=M[i][j];
                col=j;
            }
        }
        int mayCol=M[0][col];
        if (M[i][col]>mayCol)
        {
            mayCol=M[i][col];
        }
        if (menFila==mayCol)
                return true;
    }
    return false;

}
int main()
{
    int M[3][3]={{6,5,3},{3,4,2},{3,2,1}};
    if (puntoSilla(M,3,3))
        cout<<"Si tiene punto de silla";
    else
        cout<<"No tiene punto de silla";
    return 0;
}