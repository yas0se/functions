#include <stdio.h>
#include <stdlib.h>


void fonction1(){
    int a, b, c;
    float moy;
    printf("entrer le premier nombre: \n");
    scanf("%d", &a);
    printf("entrer le deuxieme nombre: \n");
    scanf("%d", &b);
    printf("entrer le troisieme nombre: \n");
    scanf("%d", &c);
    moy = (a+b+c)/3;
    printf("la moyenne des 3 nombres est: %.2f \n", moy);
}

void fonction2(){
    int a;
    printf("entrer un nombre: \n");
    scanf("%d", &a);
    if(a%5==0){
        printf("%d est divisible par 5\n", a);
    }else{
        printf("%d n'est pas divisible par 5\n", a);
    }
}
void fonction3(float ht, float tva){
    float ttc;
    ttc= ht+ (ht*tva)/100;
    printf("Le prix toutes taxes comprises (TTC) est : %.2f\n", ttc);
}
void multiplication(){
    int a, b, c;
    printf("entrer le premier nombre: \n");
    scanf("%d", &a);
    printf("entrer le deuxieme nombre: \n");
    scanf("%d", &b);
    c=a*b;
    printf("le resultat est: %d\n", c);
}
void addition(){
    int a, b, c;
    printf("entrer le premier nombre: \n");
    scanf("%d", &a);
    printf("entrer le deuxieme nombre: \n");
    scanf("%d", &b);
    c=a+b;
    printf("le resultat est: %d\n", c);
}
void soustraction(){
    int a, b, c;
    printf("entrer le premier nombre: \n");
    scanf("%d", &a);
    printf("entrer le deuxieme nombre: \n");
    scanf("%d", &b);
    c=a-b;
    printf("le resultat est: %d\n", c);
}
void modulo(){
    int a, b, c;
    printf("entrer le premier nombre: \n");
    scanf("%d", &a);
    printf("entrer le deuxieme nombre: \n");
    scanf("%d", &b);
    c=a%b;
    printf("le resultat est: %d\n", c);
}
void division(){
    int a, b;
    float c;
    printf("entrer le premier nombre: \n");
    scanf("%d", &a);
    printf("entrer le deuxieme nombre: \n");
    scanf("%d", &b);
    while(b==0){
        printf("EROR, b egale 0\n");
        printf("entrer b: ");
        scanf("%d", &b);
    }
    c=a/b;
    printf("le resultat est: %.2f\n", c);
}

void fonction4(int a,char b){
    if(a<=18 && b==toupper('homme')){
        printf("il est trop jeune");
    }else if(a<=18 && b==toupper('femme')){
        printf("elle est trop jeune");
    }else if(a>=40 && b=='homme'){
        printf("il est trop vieux");
    }else if(a>=40 && b=='femme'){
        printf("elle est trop vieille");
    }else{
        printf("have a nice day");
    }
}


int main()
{
//  fonction1();
//  fonction2();


    int a;      //pour foncrion4
    char b;     //pour foncrion4
    printf("entrer l'age: \n");     //pour foncrion4
    scanf("%d", &a);        //pour foncrion4
    printf("entrer le genre: \n");        //pour foncrion4
    scanf(" %c", &b);        //pour foncrion4
    fonction4(a,b);

/*  float ht,tva;       //pour TTC
    printf("entrer Ht: \n");        //pour TTC
    scanf("%f", &ht);       //pour TTC
    printf("Entrer La Taxe sur la Valeur Ajoutée %100(TVA): \n");       //pour TTC
    scanf("%f", &tva);      //pour TTC
    fonction3(ht, tva);
    */



}
