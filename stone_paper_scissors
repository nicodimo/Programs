#include <stdio.h>
#include <stdlib.h>

//#define N 20


/*
 * typedef struct {
    char player[N];
    int points;
} data;

data* creaData(void){
    data *x = malloc(sizeof(data));
    return x;
}
 */

void winpl(void){
    printf("\nHai vinto!\n");
}

void winpc(void){
    printf("\nIl computer vince!\n");
}

void info(void){
    printf("Niccolo' Dimonte 2019\nAll rights reserved\n");
    system("pause");
}
int check(int c1){
    int c2 = rand()%3 + 1;
    switch (c1){
        case 1:
            if(c2 == 1){
                printf("Sasso contro sasso.\n");

                return 0;
            }
            if(c2 == 2) {
                printf("Sasso contro carta.\n");
                return 2;
            }
            if(c2 == 3) {
                printf("Sasso contro forbici.\n");
                return 1;
            }
        case 2:
            if(c2 == 2){
                printf("Carta contro carta.\n");
                return 0;
            }
            if(c2 == 3){
                printf("Carta contro forbici.\n");
                return 2;
            }
            if(c2 == 1) {
                printf("Carta contro sasso.\n");
                return 1;
            }
        case 3:
            if(c2 == 3){
                printf("Forbici contro forbici.\n");
                return 0;
            }
            if(c2 == 1){
                printf("Forbici contro sasso.\n");
                return 2;
            }
            if(c2 == 2){
                printf("Forbici contro carta\n");
                return 1;
            }
    }
}
void startGame(int p_max){
    int p1 = 0, p2 = 0;
    int choice;
    while(p1 < p_max && p2 < p_max){
        system("pause");
        system("cls");
        printf("TU: %d       COMPUTER: %d\n", p1, p2);
        printf("[1].Sasso\n[2].Carta\n[3].Forbici\n");
        scanf("%d", &choice);
        switch (check(choice)){
            case 1:
                p1++;
                break;
            case 2:
                p2++;
                break;
            case 0:
                printf("Pari!");
                break;
        }
    }
    if(p1 == p_max)
        winpl();
    else winpc();
}

void winCond(void){
    int p;
    printf("Punteggio per la vittoria:\n-3\n-5\n-10\nInsert:");
    scanf("%d", &p);
    startGame(p);
}

void Error(void){
    printf("Error");
}



void menu(int cmd){
    switch(cmd) {
        case 1:
            winCond();
            break;
        case 2:
            info();
            break;
    }
}
int main() {
    int cmd = 0;


    while(cmd != 3) {
        printf("Benvenuto in Sasso, Carta, Forbici\n\n[1]. Nuova partita\n[2]. Credits\n[3]. Esci\nInsert:");
        scanf("%d", &cmd);
        menu(cmd);
    }




    return 0;
}
