#include<stdio.h>
#include <stdlib.h>
#include <iostream>
#define LINHA 20
#define COLUNA 6

using namespace std;
FILE *arq;
bool Result(int resultados[]){
    arq = fopen("mega.txt","r");
    if(arq==NULL){
        return false;
    }
 int n=0;
while(!feof(arq)){
fscanf(arq,"%d  %d  %d  %d  %d  %d",&resultados[n],&resultados[n+1],&resultados[n+2],&resultados[n+3],&resultados[n+4],&resultados[n+5]);
        n+=6;
    }
    fclose(arq);

    return true;
}


int main() {
    
int numeros[60];
int resultados[120];
int i,j;
int matrix[LINHA][COLUNA];
int sorteio=1892;
    
    arq = fopen("mega.txt","r");
    for(i=0;i<LINHA;i++){
     for(j=0;j<COLUNA;j++){	
         fscanf(arq,"%d", &matrix[i][j]);  
        }
    }
    
    printf("\t\t Os numeros dos ultimos 20 sorteios são:\n\n");
    
    for(i=0;i<LINHA;i++){
     for(j=0;j<COLUNA;j++){
      printf("%d\t",matrix[i][j]);
        }
            printf("Sorteio: %d", sorteio);
            sorteio++;
            printf("\n\n");
    }
    printf("\n");
   
    for(i =0;i<60;i++)
        numeros[i]=0;
    if(Result(resultados)){
        
    for(int i=0;i<120;i++){
            numeros[resultados[i]-1]++;
    }
    for(int i=0; i<120; i++){

    }
    for(int i=0;i<60;i++){
        cout<<i+1<<" Apareceu:"<<numeros[i] << " vezes"<<endl;
        }
    }else{
    printf("Ocorreu um erro ao ler do arquivo");
    } 
}

