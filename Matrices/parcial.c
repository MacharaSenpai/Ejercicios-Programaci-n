#include<stdio.h>
#include<math.h>

int main(){
    
    int size_f,size_c,size,f,c,x,i,M[10][10],c1=0,c2=0;
    int V1[10],V1_1[10],V1_2[10],V2[10],V2_1[10],V2_2[10];
    float s1=0,s2=0,prom,prom2;
    
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
    //----------------------------Division entre respuestas.----------------------------------
    printf ("\n-------------------------------------------------------------------------------------------\n");
    //-----------------------------Procesos en la matriz---------------------------------
    x=size_c;
    c2=0;
    s2=0;
    for (f=1;f<=size_f;f++){
        if (M[f][x]%3==0 && M[f][x]%2==0){
            c2=c2+1;
            s2=s2+(pow(M[f][x],2)); //Promedio.
            V2[c2]=M[f][x]; //Cuáles. Es importante que acá esté M[f][x]
            V2_1[c2]=f; //Filas.
            V2_2[c2]=c; //Columnas.
        }
        x = x-1;
    }

    s1=0;
    for (f=1;f<=size_f;f++){
        for (c=1;c<=size_c;c++){
            if (M[f][c]%2==0 && M[f][c]%3==0 && f==c){
                c1=c1+1; //Cuántos.
                s1=s1+(pow(M[f][c],2)); //Promedio.
                V1[c1]=M[f][c]; //Cuáles.
                V1_1[c1]=f; //Filas.
                V1_2[c1]=c; //Columnas.
            }
        }
    }

    if (c1>c2){
        prom=s1/c1;
        printf ("\nEn la matriz hay más valores pares múltiplos de tres en su diagonal principal. En total hay %d. Estos son en estas posiciones:\n",c1);
        for (i=1;i<=c1;i++){
        printf ("\n%d --> [%d,%d]\n",V1[i],V1_1[i],V1_2[i]);}
        printf ("\nY el promedio de los cuadrados de los valores es %.2f\n",prom);}

    if (c2>c1){
        prom2=s2/c2;
        printf ("\nEn la matriz hay más valores pares múltiplos de tres en su diagonal secundaria. En total hay %d. Estos son en estas posiciones:\n",c2);
        for (i=1;i<=c2;i++){
        printf ("\n%d --> [%d,%d]\n",V2[i],V2_1[i],V2_2[i]);}
        printf ("\nY el promedio de los cuadrados de los valores es %.2f\n",prom2);
    }

    } //Cierre si es cuadrada
    
    else{
        printf ("\nLa matriz no es cuadrada.\n");
    } 
    //-----------------------------Final---------------------------------
    printf ("\nEjecución finalizada.\n");
    printf ("\n");

} //Main