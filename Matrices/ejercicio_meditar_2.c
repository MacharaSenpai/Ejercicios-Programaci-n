#include<stdio.h>
#include<math.h>

int main(){
    
    int size_f,size_c,size,f,c,i;
    int M[10][10],V1[10],V1_1[10],V1_2[10];
    int c1=0;
    float prom,s1=0;
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
        if(f%2==0){
        s1=0;
        c1=0;
        for (c=1;c<=size_c;c++){
            if (M[f][c]%2==0 && f%2==0){
                c1=c1+1; //Cuántos.
                s1=s1+M[f][c]; //Promedio.
                V1[c1]=M[f][c]; //Cuáles.
                V1_1[c1]=f; //Filas.
                V1_2[c1]=c; //Columnas.
            }
        }
        
        prom=s1/c1;

        if (c1==0){
            printf ("\nEn la fila %d no hay valores pares.\n",f);
            printf ("\n-------------------------------------------------------------------------------------------\n");
        }
        else{
        printf ("\nEn la fila %d hay %d valores pares. Estos son en estas posiciones:\n",f,c1);
        for (i=1;i<=c1;i++){
            printf ("\n%d --> [%d,%d]\n",V1[i],V1_1[i],V1_2[i]);
        }
        
        printf ("\nEl promedio de los valores de la fila es %.2f\n",prom);
        printf ("\n-------------------------------------------------------------------------------------------\n");
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
  s1=0;

 } //While
} //Main