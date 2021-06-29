#include<stdio.h>
#include<math.h>

int main(){

  int size_vec_1,size_vec_2,i,j,V1[10],V1_2[10],V1_3[10],V2[10],V2_2[10],V2_3[10],VM1,PM1,VM2,PM2,c1=0,c2=0;
  char op='Y';

  while (op=='Y'){
  //--------------------------Carga primer vector--------------------------------
  printf ("Ingrese el tamaño del vector uno.\n");
  scanf ("%d",&size_vec_1);

  printf ("\nIngrese los valores del vector uno.\n");
  for (i=1;i<=size_vec_1;i++){
    scanf ("%d",&V1[i]);
  }
 //----------------------------Carga segundo vector----------------------------------
  printf ("\nIngrese el tamaño del vector dos.\n");
  scanf ("%d",&size_vec_2);

  printf ("\nIngrese los valores del vector dos.\n");
  for (j=1;j<=size_vec_2;j++){
    scanf ("%d",&V2[j]);
  }
 //-----------------------------Menor primer vector---------------------------------
  VM1=V1[1];
  PM1=1;

  for (i=1;i<=size_vec_1;i++){
    if (V1[i] < VM1){
        VM1=V1[i];
        PM1=i;
    }
  }

  printf ("\nEl valor menor del primer vector es %d, en la posición %d\n",VM1,PM1);
 //----------------------------Menor segundo vector----------------------------------
  VM2=V2[1];
  PM2=1;

  for (j=1;j<=size_vec_2;j++){
    if (V2[j] < VM2){
        VM2=V2[j];
        PM2=j;
    }
  }

  printf ("El valor menor del segundo vector es %d, en la posición %d\n",VM2,PM2);
 //-----------------------------Operacion primer vector---------------------------------
 if (VM1%3==0){
    c1=0;
    for (i=1;i<=size_vec_1;i++){
        if (V1[i]%3==0 && V1[i]>0){
            c1=c1+1; //Cuántos.
            V1_2[c1]=V1[i]; //Cuáles.
            V1_3[c1]=i; //Posiciones
            V1[i]=V1[i]+(V1[i]-1);
        }
    }

    if (c1==0){
        printf ("\nEl primer vector no tiene positivos múltiplos de tres.\n");
    }
    else{
        printf ("\nEl primer vector tiene %d positivos múltiplos de tres. Estos son, en estas posiciones:\n",c1);
        for (i=1;i<=c1;i++){
            printf ("\n[%d]-->%d",V1_2[i],V1_3[i]);
        }
        printf ("\n");
        printf ("\nEl vector resultante es:\n");
        for (i=1;i<=size_vec_1;i++){
            printf ("\n[%d]",V1[i]);
        }
        printf ("\n");
    }
 }
 //-----------------------------Operacion segundo vector---------------------------------
 if (VM2%5==0){
    c2=0;
    for (j=1;j<=size_vec_2;j++){
        if (V2[j]%5==0 && V2[j]>0){
            c2=c2+1; //Cuántos.
            V2_2[c2]=V2[j]; //Cuáles.
            V2_3[c2]=j; //Posiciones
            V2[j]=V2[j]+(V2[j]+1);
        }
    }

    if (c2==0){
        printf ("\nEl segundo vector no tiene positivos múltiplos de cinco.\n");
    }
    else{
        printf ("\nEl segundo vector tiene %d positivos múltiplos de cinco. Estos son, en estas posiciones:\n",c2);
        for (j=1;j<=c2;j++){
            printf ("\n[%d]-->%d",V2_2[j],V2_3[j]);
        }
        printf ("\n");
        printf ("\nEl vector resultante es:\n");
        for (j=1;j<=size_vec_2;j++){
            printf ("\n[%d]",V2[j]);
        }
        printf ("\n");
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
  c2=0;

 } //While

} //Main
