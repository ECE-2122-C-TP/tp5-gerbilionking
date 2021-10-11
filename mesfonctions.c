//
// Created by PC on 06/10/2021.
//
#include<stdio.h>
#include"mesfonctions.h"
//saisirdeuxnombres
NombreRationnel SaisirRationnel()
{
    NombreRationnel rationnel;

    printf("donner le numerateur");
    scanf("%d",&rationnel.numerateur);
    printf("donner le denomitateur");
    scanf("%d",&rationnel.denominateur);
    return rationnel;
}
NombreRationnel AdditionnerRationnel(NombreRationnel nombre1,NombreRationnel nombre2)
{
    NombreRationnel total;
    total.numerateur= (nombre1.numerateur *nombre2.denominateur)+(nombre1.denominateur *nombre2.numerateur);
    total.denominateur=nombre1.denominateur *nombre2.denominateur;
    return total;
}
NombreRationnel MultipleRationnel(NombreRationnel nombre1,NombreRationnel nombre2)
{
    NombreRationnel totalMultiple;
    totalMultiple.numerateur= (nombre1.numerateur *nombre2.numerateur);
    totalMultiple.denominateur= (nombre1.denominateur *nombre2.denominateur);
            return totalMultiple;
} //renvoie l'addition et la multiplication

//affiche un rationnel
void AfficherRationnel(NombreRationnel nombre)
{
    printf("%d/%d\n",nombre.numerateur,nombre.denominateur);
return;
}


int PGCD(NombreRationnel fraction)
{
    int n=0, pgcd=0,petit=0;
    if(fraction.numerateur < fraction.denominateur)
        petit=fraction.denominateur;
    else
        petit=fraction.numerateur;
    do
    { n=n+1;
        if(fraction.numerateur%n==0 &&fraction.denominateur%n==0)
        {
            pgcd=n;
        }

    }while(petit>= n);

    return pgcd;
}

