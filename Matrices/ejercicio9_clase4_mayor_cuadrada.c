#include<stdio.h>
#include<math.h>

int main(){
    
    int size_f,size_c,size,f,c,i,c1=0;
    int M[10][10],V1[10],V1_1[10],V1_2[10];
    int Pmy,Pmy2,My;
    char op='Y';
    
    while (op=='Y'){
    //--------------------------Carga matriz--------------------------------
    printf ("\nIngrese la cantidad de filas y columas de la matriz.\n");
    scanf ("%d%d",&size_f,&size_c);
    
    if (size_f==size_c){
    size=size_f*size_c;
    printf ("\nLa cantidad de valores que tendrá la matriz será de %d.\n",size);

    printf ("\nIngrese los valores de la matriz.\n");
    for (f=1;f<=size_f;f++){
        for (c=1;c<=size_c;c++){
            printf ("M[%d,%d] = ",f,c);
            scanf ("%d",&M[f][c]);
        }
    }
    My=M[1][1]; //Mayor
    Pmy=1; //Posición en fila
    Pmy2=1; //Posición en columna
    //----------------------------Division entre respuestas.----------------------------------
    printf ("\n-------------------------------------------------------------------------------------------\n");
    //-----------------------------Procesos en la matriz---------------------------------
    for (f=1;f<=size_f;f++){
        for (c=1;c<=size_c;c++){
           if (M[f][c]>My && f==c)/*Cuadrada*/{
                My=M[f][c];
                Pmy=f;
                Pmy2=c;
            }
        }
    }

    printf ("\nEl mayor de la matriz es %d en la fila %d y columna %d\n",My,Pmy,Pmy2);
    }
    //-----------------------------Sino es cuadrada---------------------------------
    else{
        printf ("\nLa matriz no es cuadrada.\n");
    } 
    //-----------------------------Final---------------------------------
    printf ("\n¿Deseas continuar? [Y/n]\n");
    scanf ("%s",&op);

    if (op!='Y'){
    printf ("\nEjecución finalizada.\n");
    printf ("\n");
    }

  c1=0;

 } //While
} //Main