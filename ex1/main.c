#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(){
    srand(time(NULL));
    int entre_1_et_100 = rand() % 100+1;
    int nombre = 111;

     printf("écris un nombre entre 1 et 100 \n");
    while (entre_1_et_100 != nombre) {

        scanf("%d", &nombre);

        if (entre_1_et_100 == nombre) {
            printf("Bien joué tu a réussi a trouver le nombre  %d \n", entre_1_et_100);

        }
        if (nombre < entre_1_et_100){
            printf("Dommage le nombre est plud grand que  %d \n", nombre);
        }
        if (nombre > entre_1_et_100){
            printf("Dommage le nombre est plus petit que  %d \n", nombre);
        }
    }
    exit(0);
}
