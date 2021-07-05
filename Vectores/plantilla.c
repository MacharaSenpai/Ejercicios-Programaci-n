#include<stdio.h>
#include<math.h>

int main(){

  int size_vec,i,V[10];
  char op='Y';

  while (op=='Y'){
  //--------------------------Carga vector--------------------------------
  printf ("Ingrese el tamaño del vector.\n");
  scanf ("%d",&size_vec);

  printf ("\nIngrese los valores del vector.\n");
  for (i=1;i<=size_vec;i++){
    scanf ("%d",&V[i]);
  }
  //----------------------------Division entre respuestas.----------------------------------

 printf ("\n-------------------------------------------------------------------------------------------\n");
 //-----------------------------Procesos en el vector---------------------------------
 for (i=1;i<=size_vec;i++){



 } 
 //-----------------------------Final---------------------------------
  printf ("\n¿Deseas continuar? [Y/n]\n");
  scanf ("%s",&op);

  if (op!='Y'){
    printf ("\nEjecución finalizada.\n");
    printf ("\n");
  }

  //Contadores y suamdores en 0.

 } //While

} //Main

