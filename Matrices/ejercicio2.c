#include<stdio.h>
#include<math.h>

int main(){
    
    int size_f,size_c,size,f,c,M[10][10],c1=0,c2=0;
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
            if (M[f][c]>0){
                c1=c1+1;
            }
            if (M[f][c]<0){
                c2=c2+1;
                
            }
        }
    }
    
    if (c1>c2){
        printf ("\nEn la matriz hay más valores positivos que valores negativos. En total hay %d.\n",c1);
    }

    if (c2>c1){
        printf ("\nEn la matriz hay más valores negativos que valores positivos. En total hay %d.\n",c2);
    }
    //-----------------------------Final---------------------------------
    printf ("\n¿Deseas continuar? [Y/n]\n");
    scanf ("%s",&op);

    if (op!='Y'){
    printf ("\nEjecución finalizada.\n");
    printf ("\n");
    }

  c1=0;
  c2=0;

 } //While
} //Main