#include<stdio.h>
#include<math.h>

int main(){
    
    int size_f,size_c,f,c,M[10][10],c1=0,c2=0;
    float s2=0,prom;
    char op='Y';
    
    while (op=='Y'){
    //--------------------------Carga matriz--------------------------------
    printf ("\nIngrese la cantidad de filas y columas de la matriz.\n");
    scanf ("%d%d",&size_f,&size_c);

    printf ("\nIngrese los valores de la matriz.\n");
    for (f=1;f<=size_f;f++){
        for (c=1;c<=size_c;c++){
            printf ("M[%d,%d]",c,f);
            scanf ("%d",&M[f][c]);
        }
    }
    //----------------------------Division entre respuestas.----------------------------------
    printf ("\n-------------------------------------------------------------------------------------------\n");
    //-----------------------------Procesos en la matriz---------------------------------
    for (f=1;f<=size_f;f++){
        for (c=1;c<=size_c;c++){
            if (M[f][c]%2==0 && M[f][c]>0){
                c1=c1+1;
            }
            if (M[f][c]%2==0 && M[f][c]<0){
                c2=c2+1;
                s2=s2+(pow(M[f][c],2));
            }
        }
    }
    
    printf ("\nLa cantidad de valores pares positivos en la matriz es %d\n",c1);
    if (c2==0){
        printf ("\nEn la matriz no hay pares negativos.\n");
    }
    else{
        prom=s2/c2;
        printf ("\nEl promedio de los cuadrados de los pares negativos es %.2f\n",prom);
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
  s2=0;

 } //While
} //Main