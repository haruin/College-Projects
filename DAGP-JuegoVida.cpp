/*
Nombre:
Autor:
Fecha:
Descripcion:
*/

#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <time.h>
#define COL 20


void ArregloInicial(int Arreglo[][COL],int n);
void ImprimirArreglo(int Arreglo[][COL],int n);
int Nacimiento(int Arreglo[][COL],int n,int ArregloNuevo[][COL]);
int Supervivencia(int Arreglo[][COL],int n,int ArregloNuevo[][COL]);
int Muerte(int Arreglo[][COL],int n,int ArregloNuevo[][COL]);
void PasarArreglo(int Arreglo[][COL],int ArregloNuevo[][COL],int n);

using namespace std;
int main()
{
    int n;
    do{
    cout<<"Tama\xA4o tablero[5][20]:";
    cin>>n;
    }while(n<5 ||n>20);
    int Arreglo[n][COL];
    int ArregloNuevo[n][COL];

    ArregloInicial(Arreglo, n);
    ImprimirArreglo(Arreglo, n);
    PasarArreglo(Arreglo,ArregloNuevo,n);
    system("pause");
    system("cls");

    Nacimiento(Arreglo,n,ArregloNuevo);
    Supervivencia(Arreglo,n,ArregloNuevo);
    Muerte(Arreglo,n,ArregloNuevo);

    ImprimirArreglo(ArregloNuevo,n);



 system("pause");
 return 0;
}
void ArregloInicial(int Arreglo[][COL],int n){
    srand(time(NULL));
    for(int i=0;i<n;i++){
        for(int j=0;j<COL;j++){
            Arreglo[i][j]=rand()%2;

        }
    }
    return;
}

void ImprimirArreglo(int Arreglo[][COL],int n){
    //system("cls");
    for(int i=0;i<n;i++){
        for(int j=0;j<COL;j++){
            cout<<(char)Arreglo[i][j]<<" ";
        }
        cout<<endl;
}
}
void PasarArreglo(int Arreglo[][COL],int ArregloNuevo[][COL],int n){
for(int i=0;i<n;i++){
    for(int j=0;j<COL;j++){
        ArregloNuevo[i][j]=Arreglo[i][j];

    }
}

}

int Nacimiento(int Arreglo[][COL],int n,int ArregloNuevo[][COL]){

    for(int i=0;i<n;i++){
        for(int j=0;j<COL;j++){
            int vecinos=0,aux=0;
             if(Arreglo[i][j]==0){


                for(int t=j-1;t<=j+1;t++){
                    if(j==0){

                        if(Arreglo[i-1][t+1]==1)vecinos++;
                        if(Arreglo[i-1][t+2]==2)vecinos++;
                        break;
                        }
                    if(i==0 )break;
                    if(Arreglo[i-1][t]==1){
                        vecinos++;
                    }
                    if(t==COL-1)break;
                }
                if(j==0);
                else if(Arreglo[i][j-1]==1) vecinos++;

                if(j==10);
                else if(Arreglo[i][j+1]==1) vecinos++;

                for(int t=j-1;t<=j+1;t++){    //liena inferior

                    if(j==0){

                        if(Arreglo[i-1][t+1]==1)vecinos++;
                        if(Arreglo[i-1][t+2]==2)vecinos++;
                        break;
                        }
                    if(i==COL-1)break;
                    if(Arreglo[i+1][t]==1){
                        vecinos++;
                    }
                     if(t==COL-1)break;
                }

                if(vecinos==3){
                    ArregloNuevo[i][j]=1;
                }
                int vecinos=0;
            }
        }
    }

}

int Muerte(int Arreglo[][COL],int n,int ArregloNuevo[][COL]){

    for(int i=0;i<n;i++){
        for(int j=0;j<COL;j++){

            if(Arreglo[i][j]==1){
                    int vecinos=0;

                ;
               for(int t=j-1;t<=j+1;t++){

                    if(j==0){

                        if(Arreglo[i-1][t+1]==1)vecinos++;
                        if(Arreglo[i-1][t+2]==2)vecinos++;
                        break;
                        }
                    if(i==0 )break;
                    if(Arreglo[i-1][t]==1){

                        vecinos++;
                    }
                    if(t==COL-1)break;
                }
                if(j==0);
                else if(Arreglo[i][j-1]==1) vecinos++;

                if(j==10);
                else if(Arreglo[i][j+1]==1) vecinos++;


                for(int t=j-1;t<=j+1;t++){    //liena inferior

                    if(j==0){

                        if(Arreglo[i-1][t+1]==1)vecinos++;
                        if(Arreglo[i-1][t+2]==2)vecinos++;
                        break;
                        }
                    if(i==COL-1)break;
                    if(Arreglo[i+1][t]==1){
                        vecinos++;
                    }
                    if(t==COL-1)break;
                }

                if(vecinos < 2 || vecinos > 3){
                    ArregloNuevo[i][j]=0;
                }

            }
        }
    }

}
int Supervivencia(int Arreglo[][COL],int n,int ArregloNuevo[][COL]){

    for(int i=0;i<n;i++){
        for(int j=0;j<COL;j++){

              if(Arreglo[i][j]==1){
                    int vecinos=0;


                for(int t=j-1;t<=j+1;t++){

                    if(j==0){

                        if(Arreglo[i-1][t+1]==1)vecinos++;
                        if(Arreglo[i-1][t+2]==2)vecinos++;
                        break;
                        }
                    if(i==0 )break;
                    if(Arreglo[i-1][t]==1){

                        vecinos++;
                    }
                    if(t==COL-1)break;
                }
                if(j==0);
                else if(Arreglo[i][j-1]==1) vecinos++;

                if(j==10);
                else if(Arreglo[i][j+1]==1) vecinos++;

                if(j==0);

                for(int t=j-1;t<=j+1;t++){    //liena inferior

                    if(j==0){

                        if(Arreglo[i-1][t+1]==1)vecinos++;
                        if(Arreglo[i-1][t+2]==2)vecinos++;
                        break;
                        }
                    if(i==COL-1)break;
                    if(Arreglo[i+1][t]==1){
                        vecinos++;
                    }
                    if(t==COL-1)break;
                }

                if(vecinos==3 || vecinos==2){
                    ArregloNuevo[i][j]=1;
                }

            }
        }
    }

}
