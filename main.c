#include <stdio.h>

void RentrePrenom();

void RentrerPrenom()
{
        char prenom[5]; //création d'un tableau de 5 char
        printf("\nRentrez un prenom: ");
        scanf("%s", &prenom); // %s pour les chaines, %c pour un char. L'utilisateur rentre une chaine de caractère mais il n'y a pas de vérification de la taille de la chaîne ce qui fait que l'utilisateur peut rentrer plus de 5 caractère et donc il y'a un dépassement de mémoire d'ou le "buffer overflow"
        printf("Prenom: %s \n\n", prenom); // %s pour les chaines, %c pour un char. On affiche ce qu'on vient d'entrer dans le scanf()
}

int main()
{
    char choix; //variable qui nous permettra de choisir un char pour quitter ou non l'application depuis le while()

    do {
        RentrerPrenom(); //appel de la function RentrePrenom() présente juste au dessus

        printf("Voulez-vous quitter ?: ");
        scanf("%s", &choix); //L'utilisateur rentre le charactère qu'il souhaite pour savoir s'il souhaite quitter l'application ou non
        system("cls"); //netoyage de l'écran pour éviter les duplications de messages dans la console (application)
    } while(choix != 'o'); //création d'une boucle pour rester dans l'application tant qu'on a pas appuyer sur "o" pour dire que l'on souhaite quitter l'application
    return 0;
}
