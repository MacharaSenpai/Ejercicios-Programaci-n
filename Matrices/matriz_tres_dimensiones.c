#include<stdio.h>
#include<math.h>

int main(){

    int size_x,size_y,size_z,x,y,z,M[10][10][10];
    char op='Y';

    while (op=='Y'){
    //--------------------------Carga matriz--------------------------------
    printf ("\nIngrese los tamaños en X, Y, Z.\n");
    scanf ("%d%d%d",&size_x,&size_y,&size_z);

    printf ("\nIngrese los valores de la matriz en X, Y, Z.\n");
    for (x=1;x<=size_x;x++){
        for (y=1;y<=size_y;y++){
            for (z=1;z<=size_z;z++){
                printf ("M[%d,%d,%d] = ",x,y,z);
                scanf ("%d",&M[x][y][z]);
            }
        }
    }

    //----------------------------Division entre respuestas.----------------------------------
    printf ("\n-------------------------------------------------------------------------------------------\n");
    //-----------------------------Procesos en la matriz---------------------------------
    for (x=1;x<=size_x;x++){
        for (y=1;y<=size_y;y++){
            for (z=1;z<=size_z;z++){
                printf ("Los valores en X,Y,Z son [%d]\n",M[x][y][z]);
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

  //Contadores y suamdores en 0

 } //While
} //Main
