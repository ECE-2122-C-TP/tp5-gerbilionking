//
// Created by PC on 06/10/2021.
//
#include<stdlib.h>
#include<stdio.h>
#include"exercice.h"
#include"mesfonctions.h"
void exercice1()
{ NombreRationnel nombre1,  nombre2,addition,multiplication;
    nombre1=SaisirRationnel();
   nombre2= SaisirRationnel();
  addition=  AdditionnerRationnel(  nombre1,  nombre2);
    AfficherRationnel(addition);
   multiplication= MultipleRationnel(nombre1,  nombre2);
    AfficherRationnel(multiplication );
}
//saisir des nombres du tableau
#define taillemaxs 100
void exercice2()
{
   int n=0,i= 0, table[taillemaxs]={0},comparer;
   printf("donner la taille du tableau");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("saisir la valeur numero %d\n",i+1);
        scanf("%d",&table[i]);
    }
    comparer=table[0];
    for(i=1;i<n;i++)
    {
            if (comparer < table[i ])

                comparer = table[i];

        }

    printf("le plus grand du tableau est %d\n",comparer);
}
//saisir un tableau de 3*4 et l'affiche
 void exercice3()
 {
   int t[3][4],i=0,table[12],j=0;

   for(i=0;i<3;i++)
   {
       for(j=0;j<4;j++)
       {
           printf("donner le nombre de la case %d\n",i,j);
           scanf("%d",&t[i][j]);
       }
   }
     for(i=0;i<3;i++)
     {
         for(j=0;j<4;j++)
         {
             printf("%d\t",t[i][j]);
         }
         printf("\n");
     }
     //affecter le tableau a deux dimensions dans un tableau à une dimension
   puts("\n*****tableau a une dimension******\n");

     for(i=0;i<3;i++)
     {
         for (j = 0; j < 4; j++)
         {
              table[4*i+j]=t[i][j];
             printf("%d\t",table[4*i+j]);
         }
     }
 }

 void exercice4()
 {
    int diviseur=0;
    NombreRationnel fraction;
     fraction=SaisirRationnel();

    diviseur= PGCD(fraction);
    printf("le PGCD est %d",diviseur);
 }