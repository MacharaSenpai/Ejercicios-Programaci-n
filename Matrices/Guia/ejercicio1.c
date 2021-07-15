/*DADA UNA MATRIZ MUESTRE   EL   
PROMEDIO   DE LOS CUBOS DE LOS 
ANTERIORES ORDINALES   DE SUS  
VALORES  POSITIVOS  EN COLUMNAS 
IMPARES*/

#include<stdio.h>
#include<math.h>

int main(){
    
    int size_f,size_c,size,f,c,M[10][10],c1=0;
    float s1=0,prom;
    char op='Y';
    
    while (op=='Y'){
    //--------------------------Carga matriz--------------------------------
    printf ("\nIngrese la cantidad de filas y columas de la matriz.\n");
    scanf ("%d%d",&size_f,&size_c);

    size=size_f*size_c;
    printf ("\nLa cantidad de valores que tendrá la matriz será de %d.\n",size);

    printf ("\nIngrese los valores de la matriz.\n");
    for (f=1;f<=size_f;f++){
        for (c=1;c<=size_c;c++){
            printf ("M[%d,%d] = ",f,c);
            scanf ("%d",&M[f][c]);
        }
    }
    //----------------------------Division entre respuestas.----------------------------------
    printf ("\n-------------------------------------------------------------------------------------------\n");
    //-----------------------------Procesos en la matriz---------------------------------
    for (f=1;f<=size_f;f++){
        for (c=1;c<=size_c;c++){
            if (M[f][c]>0 && c%2==1){
                c1=c1+1;
                s1=s1+(pow(M[f][c]-1,3));
            }
        }
    }

    if (c1==0){
        printf ("\nEn la matriz no hay valores positivos en columnas impares.\n");
    }
    else{
        prom=s1/c1;
        printf ("\nEl promedio de los valores positivos en columas impares es %.2f\n",prom);
    }
    //-----------------------------Final---------------------------------
    printf ("\n¿Deseas continuar? [Y/n]\n");
    scanf ("%s",&op);

    if (op!='Y'){
    printf ("\nEjecución finalizada.\n");
    printf ("\n");
    }

  c1=0;
  s1=0;

 } //While
} //Main