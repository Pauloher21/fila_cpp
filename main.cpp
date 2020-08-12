#include<stdlib.h>
#include <iostream>
#include <locale.h>
#include<string>
#define T 10
using namespace std;
void imprime_vetor(int fila[T],int tamanho){
int contador;
    for(contador=0;contador<T;contador++){
    cout<<fila[contador]<<"\n";
    }
}

void fila_construtor(int *inicio,int*fim){
*inicio=0;
*fim=-1;
}

bool esta_cheio(int fim){
    if(fim==T-1){
    return true;

    }

    else{
     return false;
    }
}
bool contem(int fim){
 if(fim>T){
 return true;
 }
 else{
    return false;
 }
}

void enfileirar_fila(int fila[T],int valor,int *fim){
    if(esta_cheio(*fim)){
    cout<<"Fila cheia\n";
    }


    else{
        *fim=*fim+1;
        fila[*fim]=valor;
    }
}
int fila_tamanho(int fim,int inicio){
return(fim-inicio)+1;
}

bool esta_vazio(int inicio,int fim){

    if(inicio>fim){
    return true;
    }
    else{
    return false;
    }
}
void desinfileirar_fila(int fila[T],int *inicio,int fim){
    if(esta_vazio(*inicio,fim)){
    cout<<"\nFila completamente vazia\n";
}

    else{
    cout<<"\nO valor "<<fila[*inicio]<<" foi removido\n";

    fila[*inicio]=0;
    *inicio=*inicio+1;

}
}

int main()
{
    setlocale(LC_ALL,"portuguese");
    int fila[T]={0,0,0,0,0,0,0,0,0,0};
    int inicio,fim;
    int valor;
    fila_construtor(&inicio,&fim);
    enfileirar_fila(fila,5,&fim);
    enfileirar_fila(fila,10,&fim);
    enfileirar_fila(fila,2,&fim);
    enfileirar_fila(fila,93,&fim);
    enfileirar_fila(fila,100,&fim);
    enfileirar_fila(fila,50,&fim);
    enfileirar_fila(fila,87,&fim);
    enfileirar_fila(fila,89,&fim);
    enfileirar_fila(fila,110,&fim);
    enfileirar_fila(fila,34,&fim);
 

        desinfileirar_fila(fila,&inicio,fim);
         desinfileirar_fila(fila,&inicio,fim);
          desinfileirar_fila(fila,&inicio,fim);
           desinfileirar_fila(fila,&inicio,fim);
             desinfileirar_fila(fila,&inicio,fim);
         desinfileirar_fila(fila,&inicio,fim);
          desinfileirar_fila(fila,&inicio,fim);
           desinfileirar_fila(fila,&inicio,fim);
             desinfileirar_fila(fila,&inicio,fim);
         desinfileirar_fila(fila,&inicio,fim);
          desinfileirar_fila(fila,&inicio,fim);
           desinfileirar_fila(fila,&inicio,fim);
             enfileirar_fila(fila,87,&fim);
    enfileirar_fila(fila,89,&fim);
    enfileirar_fila(fila,110,&fim);
    enfileirar_fila(fila,34,&fim);
imprime_vetor(fila,fila_tamanho(fim,inicio));
    
    return 0;
}





