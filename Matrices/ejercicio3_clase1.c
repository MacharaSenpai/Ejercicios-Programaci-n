#include<stdio.h>
#include<math.h>

int main(){
    
    int size_f,size_c,size,f,c,M[10][10],c1=0;
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
            if (M[f][c]%2==0 && M[f][c]%5==0 && f%2==0){
                c1=c1+1;
                M[f][c]=M[f][c]+(M[f][c]+1);
            }
        }
    }

    if (c1==0){
        printf ("\nEn la matriz no hay valores pares múltiplos de cinco en filas pares.\n");
    }
    else{
        printf ("\nEn la matriz hay %d valores pares múltiplos de cinco en filas pares.\n",c1);
        printf ("\nLa matriz con los cambios es:\n");
        for (f=1;f<=size_f;f++){
            for (c=1;c<=size_c;c++){
            printf ("%d\n",M[f][c]);
            }
        }

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