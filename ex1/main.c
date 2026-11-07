#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int nombreMagique;
    int proposition = 0;
    int nbEssais = 0;

    /* Initialisation du générateur aléatoire */
    srand((unsigned int)time(NULL));

    /* Tirage d'un nombre entre 1 et 100 */
    nombreMagique = (rand() % 100) + 1;

    printf("=== Le Numéro Magique ===\n");
    printf("J'ai choisi un nombre entre 1 et 100. A vous de le trouver !\n\n");

    do
    {
        printf("Votre proposition : ");

        /* Vérifie que la saisie est bien un entier */
        if (scanf("%d", &proposition) != 1)
        {
            printf("Saisie invalide, veuillez entrer un nombre entier.\n");
            /* Vide le buffer d'entrée */
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            continue;
        }

        nbEssais++;

        if (proposition < nombreMagique)
        {
            printf("C'est plus grand !\n\n");
        }
        else if (proposition > nombreMagique)
        {
            printf("C'est plus petit !\n\n");
        }
        else
        {
            printf("\nBravo ! Vous avez trouvé le nombre magique (%d) en %d essai(s).\n",
                   nombreMagique, nbEssais);
        }

    } while (proposition != nombreMagique);

    return 0;
}
