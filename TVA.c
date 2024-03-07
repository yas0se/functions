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
    printf("%d\n", c);
}
int addition(int a, int b){
    int c=a+b;
    return c;
}
int soustraction(int a, int b){
    int c=a-b;
    return c;
}
int modulo(int a, int b){
    int c=a%b;
    return c;
}
float division(int a, int b){
    while(b==0){
        printf("EROR, b egale 0\n");
        printf("entrer b: ");
        scanf("%d", &b);
    }
    int c=a/b;
    return c;
}


int main()
{
    //fonction1();
    //fonction2();
    multiplication();
    float ht,tva;
    printf("entrer Ht: \n");
    scanf("%f", &ht);
    printf("Entrer La Taxe sur la Valeur Ajoutée %100(TVA): \n");
    scanf("%f", &tva);
    fonction3(ht, tva);



}
