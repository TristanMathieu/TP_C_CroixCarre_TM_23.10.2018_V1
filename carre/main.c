#include <stdio.h>
#include <stdlib.h>
// --- CONST --- //

// --- PCD/FCT --- //

int saisie_taille()//cette fonction sert a demander a l'utilisateur une taille, et retournera la taille qu'il souhaite dans le prog. principale.
{
    int dTaille;
    printf("Entrez la taille de votre carre :\n");
    fflush(stdin);
    scanf("%d", &dTaille);
    return dTaille;
}


char saisie_car()//cette fonction sert a demander a l'utilisateur un caractere, et retournera le caractere qu'il souhaite dans le prog. principale.
{
    char cMaterial;
    printf("Entrez le caractere de votre carre :\n");
    fflush(stdin);
    scanf("%c", &cMaterial);
    return cMaterial;
}


void aff_ligne(int dI, int dTaille, char cMaterial1, char cMaterial2)//procedure d'affichage d'une ligne, elle fait également le test pour savoir ou mettre tel caractere
{
    int dJ;//variable compteur
    for(dJ=1;dJ<=dTaille;dJ++){
        if((dJ==1)||(dJ==dTaille)){
            printf("%c",cMaterial1);
        }else{
            printf("%c",cMaterial2);
        }
    }
}


void aff_ligne_comp(int dI, int dTaille, char cMaterial1)
{
    int dJ;//variable compteur
    for(dJ=1;dJ<=dTaille;dJ++){
        printf("%c", cMaterial1);
    }
}


// --- PROG PRINC --- //

int main()
{
    //initialisation de nos variables
    int dTaille;//sera la variable taille du carre
    int dI;//variable compteur
    char cMaterial1;//variable caractere du contour du carre
    char cMaterial2;//variable caractere du remplissage du carre

    //saisie des valeurs des variables
    dTaille=saisie_taille();//L.7
    cMaterial1=saisie_car();//L.15
    cMaterial2=saisie_car();//L.15
    printf("\n");//espacemenet pour la visibilité du carre

    //boucle de creation et d'affichage du carre
    for(dI=1;dI<=dTaille;dI++){
        if((dI==1)||(dI==dTaille)){
            aff_ligne_comp(dI,dTaille,cMaterial1);//L.40
        }else{
            aff_ligne(dI,dTaille,cMaterial1,cMaterial2);//L.27
        }
        printf("\n");
    }
    return 0;
}
