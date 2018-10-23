#include <stdio.h>
#include <stdlib.h>
// --- CONST --- //

// --- PCD/FCT --- //

int saisie_taille()//cette fonction sert a demander a l'utilisateur une taille, et retournera la taille qu'il souhaite dans le prog. principale.
{
    int dTaille;
    printf("Entrez la taille de votre croix :\n");
    fflush(stdin);
    scanf("%d", &dTaille);
    return dTaille;
}


char saisie_car()//cette fonction sert a demander a l'utilisateur un caractere, et retournera le caractere qu'il souhaite dans le prog. principale.
{
    char cMaterial;
    printf("Entrez le caractere de votre croix :\n");
    fflush(stdin);
    scanf("%c", &cMaterial);
    return cMaterial;
}


void aff_ligne(int dI, int dTaille, char cMaterial)//procedure d'affichage d'une ligne, elle fait également le test pour savoir ou mettre tel caractere
{
    int dJ;//variable compteur
    for(dJ=1;dJ<=dTaille;dJ++){
        if((dJ==dI)||(dJ==(dTaille-dI+1))){
            printf("%c",cMaterial);
        }else{
            printf(" ");
        }
    }
}


// --- PROG PRINC --- //

int main()
{
    //initialisation de nos variables
    int dTaille;//sera la variable taille de notre croix
    int dI;//variable compteur
    char cMaterial;//variable caractere de notre croix

    //saisie des valeurs des variables
    dTaille=saisie_taille();//L.7
    cMaterial=saisie_car();//L.15
    printf("\n");//espacemenet pour la visibilité de la croix

    //boucle de creation et d'affichage de la croix
    for(dI=1;dI<=dTaille;dI++){
        aff_ligne(dI,dTaille,cMaterial);//L.25
        printf("\n");
    }
    return 0;
}
