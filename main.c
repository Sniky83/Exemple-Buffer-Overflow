#include <stdio.h>

void RentrerPrenom()
{
        char prenom[5];
        printf("\nRentrez un prenom: ");
        scanf("%s", &prenom); // %s pour les chaines, %c pour un char.
        printf("Prenom: %s \n\n", prenom); // %s pour les chaines, %c pour un char.
}

int main()
{
    char choix;

    do {
        RentrerPrenom();

        printf("Voulez-vous quitter ?: ");
        scanf("%s", &choix);
        system("cls");
    } while(choix != 'o');
    return 0;
}
