#include <iostream>

using namespace std;

void crearMatriz(int **&M, int f, int c)
{
    M=new int *[f];
    for (int i=0; i<f; i++)
    {
        M[i]=new int[c];
    }
}
void llenar(int **M, int f, int c)
{
    for(int i=0;i<f;i++)
    {
        for (int j=0;j<c;j++)
            cin>>*(*(M+i)+j);
    }
}
void mostrar(int **M, int f, int c)
{
    for(int i=0;i<f;i++)
    {
        for (int j=0;j<c;j++)
            cout<<*(*(M+i)+j)<<" ";
        cout<<"\n";
    }
}
bool esCuadradoMagico(int **M, int n)
{

    int *sumF= new int[n];
    int *sumC= new int[n];
    for (int i=0; i<n; i++)
    {
        int sf=0,sc=0;
        for (int j=0;j<n;j++)
        {
            sf= sf+ *(*(M+i)+j);
            sc= sc+ *(*(M+i)+j);
        }
        *(sumF+i)=sf;
        *(sumC+i)=sc;
    }
    for (int i=0; i<n; i++)
    {
        if (*sumF!=*(sumF+i)||*sumF!=*(sumC+i))
            return false;
    }
    return true;
}
int main()

{
    int **M,f,c;
    cin>>f>>c;
    crearMatriz(M,f,c);
    llenar(M,f,c);
    mostrar(M,f,c);
    if(esCuadradoMagico(M,f))
        cout<<"Si es cuadrado magico\n";
    else
        cout<<"No es cuadrado magico";
    return 0;

}
