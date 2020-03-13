#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
typedef struct{

char username2[12];
char password2[20];
int pin2;
int chip;
}account;

typedef struct{
int face ;
char suit[1] ;
}cards;
cards card[53] = {{0,"a"},{1,"l"},{2,"l"},{3,"l"},{4,"l"},{5,"l"},{6,"l"},{7,"l"},{8,"l"},{9,"l"},{10,"l"},{11,"l"},{12,"l"},{13,"l"},
                    {1,"s"},{2,"s"},{3,"s"},{4,"s"},{5,"s"},{6,"s"},{7,"s"},{8,"s"},{9,"s"},{10,"s"},{11,"s"},{12,"s"},{13,"s"},
                    {1,"d"},{2,"d"},{3,"d"},{4,"d"},{5,"d"},{6,"d"},{7,"d"},{8,"d"},{9,"d"},{10,"d"},{11,"d"},{12,"d"},{13,"d"},
                   {1,"c"},{2,"c"},{3,"c"},{4,"c"},{5,"c"},{6,"c"},{7,"c"},{8,"c"},{9,"c"},{10,"c"},{11,"c"},{12,"c"},{13,"c"}};
cards tampung[52] ;
int tampung2[52];
cards cardp1[5];
cards cardp2[5];
char m;
int allin;
int sama = 0 ;
int k;
int urutanp1 = 0 ;
int urutanp2 = 0;
int urutanboard = 2 ;
int tebarankartu = 0 ;
int i ; int j ;
int hitungarr = 0 ;
int lower ;
int upper ;
int urutankartu;
int countusername = 0 ;
char username[12];
char password[20];
char repassword[20];
char ch ;
int pin;
int count ;
int status1 = 1 ;
int urutanlog = 0 ;
int var ;
int status2 = 0 ;
int bet ;
int rank, rankp2;
char kuis[20];
void delay(unsigned int mseconds){
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
void setcolor(unsigned short color){
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);

SetConsoleTextAttribute(hCon,color);

}
void satuspade (x,y) {
gotoxy(x,y);
printf("_________________\n") ;
gotoxy(x,y+1);
printf("|               |\n") ;
gotoxy(x,y+2);
printf("| 1             |\n") ;
gotoxy(x,y+3);
printf("|       .       |\n") ;
gotoxy(x,y+4);
printf("|      / \\      |\n") ;
gotoxy(x,y+5);
printf("|     /   \\     |\n") ;
gotoxy(x,y+6);
printf("|    (_   _)    |\n") ;
gotoxy(x,y+7);
printf("|      |_|      |\n") ;
gotoxy(x,y+8);
printf("|               |\n") ;
gotoxy(x,y+9);
printf("|             1 |\n") ;
gotoxy(x,y+10);
printf("|_______________|\n") ;
}
void duaspade (x,y) {
gotoxy(x,y);
printf("_________________\n") ;
gotoxy(x,y+1);
printf("|               |\n") ;
gotoxy(x,y+2);
printf("| 2             |\n") ;
gotoxy(x,y+3);
printf("|       .       |\n") ;
gotoxy(x,y+4);
printf("|      / \\      |\n") ;
gotoxy(x,y+5);
printf("|     /   \\     |\n") ;
gotoxy(x,y+6);
printf("|    (_   _)    |\n") ;
gotoxy(x,y+7);
printf("|      |_|      |\n") ;
gotoxy(x,y+8);
printf("|               |\n") ;
gotoxy(x,y+9);
printf("|             2 |\n") ;
gotoxy(x,y+10);
printf("|_______________|\n") ;
}
void tigaspade (x,y) {
gotoxy(x,y);
printf("_________________\n") ;
gotoxy(x,y+1);
printf("|               |\n") ;
gotoxy(x,y+2);
printf("| 3             |\n") ;
gotoxy(x,y+3);
printf("|       .       |\n") ;
gotoxy(x,y+4);
printf("|      / \\      |\n") ;
gotoxy(x,y+5);
printf("|     /   \\     |\n") ;
gotoxy(x,y+6);
printf("|    (_   _)    |\n") ;
gotoxy(x,y+7);
printf("|      |_|      |\n") ;
gotoxy(x,y+8);
printf("|               |\n") ;
gotoxy(x,y+9);
printf("|             3 |\n") ;
gotoxy(x,y+10);
printf("|_______________|\n") ;
}
void empatspade (x,y) {
gotoxy(x,y);
printf("_________________\n") ;
gotoxy(x,y+1);
printf("|               |\n") ;
gotoxy(x,y+2);
printf("| 4             |\n") ;
gotoxy(x,y+3);
printf("|       .       |\n") ;
gotoxy(x,y+4);
printf("|      / \\      |\n") ;
gotoxy(x,y+5);
printf("|     /   \\     |\n") ;
gotoxy(x,y+6);
printf("|    (_   _)    |\n") ;
gotoxy(x,y+7);
printf("|      |_|      |\n") ;
gotoxy(x,y+8);
printf("|               |\n") ;
gotoxy(x,y+9);
printf("|             4 |\n") ;
gotoxy(x,y+10);
printf("|_______________|\n") ;
}
void limaspade (x,y) {
gotoxy(x,y);
printf("_________________\n") ;
gotoxy(x,y+1);
printf("|               |\n") ;
gotoxy(x,y+2);
printf("| 5             |\n") ;
gotoxy(x,y+3);
printf("|       .       |\n") ;
gotoxy(x,y+4);
printf("|      / \\      |\n") ;
gotoxy(x,y+5);
printf("|     /   \\     |\n") ;
gotoxy(x,y+6);
printf("|    (_   _)    |\n") ;
gotoxy(x,y+7);
printf("|      |_|      |\n") ;
gotoxy(x,y+8);
printf("|               |\n") ;
gotoxy(x,y+9);
printf("|             5 |\n") ;
gotoxy(x,y+10);
printf("|_______________|\n") ;
}
void enamspade (x,y) {
gotoxy(x,y);
printf("_________________\n") ;
gotoxy(x,y+1);
printf("|               |\n") ;
gotoxy(x,y+2);
printf("| 6             |\n") ;
gotoxy(x,y+3);
printf("|       .       |\n") ;
gotoxy(x,y+4);
printf("|      / \\      |\n") ;
gotoxy(x,y+5);
printf("|     /   \\     |\n") ;
gotoxy(x,y+6);
printf("|    (_   _)    |\n") ;
gotoxy(x,y+7);
printf("|      |_|      |\n") ;
gotoxy(x,y+8);
printf("|               |\n") ;
gotoxy(x,y+9);
printf("|             6 |\n") ;
gotoxy(x,y+10);
printf("|_______________|\n") ;
}
void tujuhspade (x,y) {
gotoxy(x,y);
printf("_________________\n") ;
gotoxy(x,y+1);
printf("|               |\n") ;
gotoxy(x,y+2);
printf("| 7             |\n") ;
gotoxy(x,y+3);
printf("|       .       |\n") ;
gotoxy(x,y+4);
printf("|      / \\      |\n") ;
gotoxy(x,y+5);
printf("|     /   \\     |\n") ;
gotoxy(x,y+6);
printf("|    (_   _)    |\n") ;
gotoxy(x,y+7);
printf("|      |_|      |\n") ;
gotoxy(x,y+8);
printf("|               |\n") ;
gotoxy(x,y+9);
printf("|             7 |\n") ;
gotoxy(x,y+10);
printf("|_______________|\n") ;
}
void delapanspade (x,y) {
gotoxy(x,y);
printf("_________________\n") ;
gotoxy(x,y+1);
printf("|               |\n") ;
gotoxy(x,y+2);
printf("| 8             |\n") ;
gotoxy(x,y+3);
printf("|       .       |\n") ;
gotoxy(x,y+4);
printf("|      / \\      |\n") ;
gotoxy(x,y+5);
printf("|     /   \\     |\n") ;
gotoxy(x,y+6);
printf("|    (_   _)    |\n") ;
gotoxy(x,y+7);
printf("|      |_|      |\n") ;
gotoxy(x,y+8);
printf("|               |\n") ;
gotoxy(x,y+9);
printf("|             8 |\n") ;
gotoxy(x,y+10);
printf("|_______________|\n") ;
}
void sembilanspade (x,y) {
gotoxy(x,y);
printf("_________________\n") ;
gotoxy(x,y+1);
printf("|               |\n") ;
gotoxy(x,y+2);
printf("| 9             |\n") ;
gotoxy(x,y+3);
printf("|       .       |\n") ;
gotoxy(x,y+4);
printf("|      / \\      |\n") ;
gotoxy(x,y+5);
printf("|     /   \\     |\n") ;
gotoxy(x,y+6);
printf("|    (_   _)    |\n") ;
gotoxy(x,y+7);
printf("|      |_|      |\n") ;
gotoxy(x,y+8);
printf("|               |\n") ;
gotoxy(x,y+9);
printf("|             9 |\n") ;
gotoxy(x,y+10);
printf("|_______________|\n") ;
}
void sepuluhspade (x,y) {
gotoxy(x,y);
printf("_________________\n") ;
gotoxy(x,y+1);
printf("|               |\n") ;
gotoxy(x,y+2);
printf("| 10            |\n") ;
gotoxy(x,y+3);
printf("|       .       |\n") ;
gotoxy(x,y+4);
printf("|      / \\      |\n") ;
gotoxy(x,y+5);
printf("|     /   \\     |\n") ;
gotoxy(x,y+6);
printf("|    (_   _)    |\n") ;
gotoxy(x,y+7);
printf("|      |_|      |\n") ;
gotoxy(x,y+8);
printf("|               |\n") ;
gotoxy(x,y+9);
printf("|            10 |\n") ;
gotoxy(x,y+10);
printf("|_______________|\n") ;
}
void jackspade (x,y) {
gotoxy(x,y);
printf("_________________\n") ;
gotoxy(x,y+1);
printf("|               |\n") ;
gotoxy(x,y+2);
printf("| J             |\n") ;
gotoxy(x,y+3);
printf("|       .       |\n") ;
gotoxy(x,y+4);
printf("|      / \\      |\n") ;
gotoxy(x,y+5);
printf("|     /   \\     |\n") ;
gotoxy(x,y+6);
printf("|    (_   _)    |\n") ;
gotoxy(x,y+7);
printf("|      |_|      |\n") ;
gotoxy(x,y+8);
printf("|               |\n") ;
gotoxy(x,y+9);
printf("|             J |\n") ;
gotoxy(x,y+10);
printf("|_______________|\n") ;
}
void queenspade (x,y) {
gotoxy(x,y);
printf("_________________\n") ;
gotoxy(x,y+1);
printf("|               |\n") ;
gotoxy(x,y+2);
printf("| Q             |\n") ;
gotoxy(x,y+3);
printf("|       .       |\n") ;
gotoxy(x,y+4);
printf("|      / \\      |\n") ;
gotoxy(x,y+5);
printf("|     /   \\     |\n") ;
gotoxy(x,y+6);
printf("|    (_   _)    |\n") ;
gotoxy(x,y+7);
printf("|      |_|      |\n") ;
gotoxy(x,y+8);
printf("|               |\n") ;
gotoxy(x,y+9);
printf("|             Q |\n") ;
gotoxy(x,y+10);
printf("|_______________|\n") ;
}
void kingspade (x,y) {
gotoxy(x,y);
printf("_________________\n") ;
gotoxy(x,y+1);
printf("|               |\n") ;
gotoxy(x,y+2);
printf("| K             |\n") ;
gotoxy(x,y+3);
printf("|       .       |\n") ;
gotoxy(x,y+4);
printf("|      / \\      |\n") ;
gotoxy(x,y+5);
printf("|     /   \\     |\n") ;
gotoxy(x,y+6);
printf("|    (_   _)    |\n") ;
gotoxy(x,y+7);
printf("|      |_|      |\n") ;
gotoxy(x,y+8);
printf("|               |\n") ;
gotoxy(x,y+9);
printf("|             K |\n") ;
gotoxy(x,y+10);
printf("|_______________|\n") ;
}
void asspade (x,y) {

gotoxy(x,y);
printf("_________________\n") ;
gotoxy(x,y+1);
printf("|               |\n") ;
gotoxy(x,y+2);
printf("| A             |\n") ;
gotoxy(x,y+3);
printf("|       .       |\n") ;
gotoxy(x,y+4);
printf("|      / \\      |\n") ;
gotoxy(x,y+5);
printf("|     /   \\     |\n") ;
gotoxy(x,y+6);
printf("|    (_   _)    |\n") ;
gotoxy(x,y+7);
printf("|      |_|      |\n") ;
gotoxy(x,y+8);
printf("|               |\n") ;
gotoxy(x,y+9);
printf("|             A |\n") ;
gotoxy(x,y+10);
printf("|_______________|\n") ;
}

void satudiamond (x,y) {
setcolor(12);
gotoxy(x,y);
printf("__________________\n") ;
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| 1              |\n") ;
gotoxy(x,y+3);
printf("|       /\\       |\n") ;
gotoxy(x,y+4);
printf("|      /  \\      |\n") ;
gotoxy(x,y+5);
printf("|     /    \\     |\n") ;
gotoxy(x,y+6);
printf("|     \\    /     |\n") ;
gotoxy(x,y+7);
printf("|      \\  /      |\n") ;
gotoxy(x,y+8);
printf("|       \\/       |\n") ;
gotoxy(x,y+9);
printf("|              1 |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;setcolor(7);
}
void duadiamond (x,y) {
    setcolor(12);
gotoxy(x,y);
printf("__________________\n") ;
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| 2              |\n") ;
gotoxy(x,y+3);
printf("|       /\\       |\n") ;
gotoxy(x,y+4);
printf("|      /  \\      |\n") ;
gotoxy(x,y+5);
printf("|     /    \\     |\n") ;
gotoxy(x,y+6);
printf("|     \\    /     |\n") ;
gotoxy(x,y+7);
printf("|      \\  /      |\n") ;
gotoxy(x,y+8);
printf("|       \\/       |\n") ;
gotoxy(x,y+9);
printf("|              2 |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;setcolor(7);
}
void tigadiamond (x,y) {
    setcolor(12);
gotoxy(x,y);
printf("__________________\n") ;
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| 3              |\n") ;
gotoxy(x,y+3);
printf("|       /\\       |\n") ;
gotoxy(x,y+4);
printf("|      /  \\      |\n") ;
gotoxy(x,y+5);
printf("|     /    \\     |\n") ;
gotoxy(x,y+6);
printf("|     \\    /     |\n") ;
gotoxy(x,y+7);
printf("|      \\  /      |\n") ;
gotoxy(x,y+8);
printf("|       \\/       |\n") ;
gotoxy(x,y+9);
printf("|              3 |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;setcolor(7);
}
void empatdiamond (x,y) {
    setcolor(12);
gotoxy(x,y);
printf("__________________\n") ;
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| 4              |\n") ;
gotoxy(x,y+3);
printf("|       /\\       |\n") ;
gotoxy(x,y+4);
printf("|      /  \\      |\n") ;
gotoxy(x,y+5);
printf("|     /    \\     |\n") ;
gotoxy(x,y+6);
printf("|     \\    /     |\n") ;
gotoxy(x,y+7);
printf("|      \\  /      |\n") ;
gotoxy(x,y+8);
printf("|       \\/       |\n") ;
gotoxy(x,y+9);
printf("|              4 |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;setcolor(7);
}
void limadiamond (x,y) {
    setcolor(12);
gotoxy(x,y);
printf("__________________\n") ;
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| 5              |\n") ;
gotoxy(x,y+3);
printf("|       /\\       |\n") ;
gotoxy(x,y+4);
printf("|      /  \\      |\n") ;
gotoxy(x,y+5);
printf("|     /    \\     |\n") ;
gotoxy(x,y+6);
printf("|     \\    /     |\n") ;
gotoxy(x,y+7);
printf("|      \\  /      |\n") ;
gotoxy(x,y+8);
printf("|       \\/       |\n") ;
gotoxy(x,y+9);
printf("|              5 |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;setcolor(7);
}
void enamdiamond (x,y) {
    setcolor(12);
gotoxy(x,y);
printf("__________________\n") ;
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| 6              |\n") ;
gotoxy(x,y+3);
printf("|       /\\       |\n") ;
gotoxy(x,y+4);
printf("|      /  \\      |\n") ;
gotoxy(x,y+5);
printf("|     /    \\     |\n") ;
gotoxy(x,y+6);
printf("|     \\    /     |\n") ;
gotoxy(x,y+7);
printf("|      \\  /      |\n") ;
gotoxy(x,y+8);
printf("|       \\/       |\n") ;
gotoxy(x,y+9);
printf("|              6 |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;setcolor(7);
}
void tujuhdiamond (x,y) {
    setcolor(12);
gotoxy(x,y);
printf("__________________\n") ;
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| 7              |\n") ;
gotoxy(x,y+3);
printf("|       /\\       |\n") ;
gotoxy(x,y+4);
printf("|      /  \\      |\n") ;
gotoxy(x,y+5);
printf("|     /    \\     |\n") ;
gotoxy(x,y+6);
printf("|     \\    /     |\n") ;
gotoxy(x,y+7);
printf("|      \\  /      |\n") ;
gotoxy(x,y+8);
printf("|       \\/       |\n") ;
gotoxy(x,y+9);
printf("|              7 |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;setcolor(7);
}
void delapandiamond (x,y) {
    setcolor(12);
gotoxy(x,y);
printf("__________________\n") ;
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| 8              |\n") ;
gotoxy(x,y+3);
printf("|       /\\       |\n") ;
gotoxy(x,y+4);
printf("|      /  \\      |\n") ;
gotoxy(x,y+5);
printf("|     /    \\     |\n") ;
gotoxy(x,y+6);
printf("|     \\    /     |\n") ;
gotoxy(x,y+7);
printf("|      \\  /      |\n") ;
gotoxy(x,y+8);
printf("|       \\/       |\n") ;
gotoxy(x,y+9);
printf("|              8 |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;setcolor(7);
}
void sembilandiamond (x,y) {
    setcolor(12);
gotoxy(x,y);
printf("__________________\n") ;
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| 9              |\n") ;
gotoxy(x,y+3);
printf("|       /\\       |\n") ;
gotoxy(x,y+4);
printf("|      /  \\      |\n") ;
gotoxy(x,y+5);
printf("|     /    \\     |\n") ;
gotoxy(x,y+6);
printf("|     \\    /     |\n") ;
gotoxy(x,y+7);
printf("|      \\  /      |\n") ;
gotoxy(x,y+8);
printf("|       \\/       |\n") ;
gotoxy(x,y+9);
printf("|              9 |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;setcolor(7);
}
void sepuluhdiamond (x,y) {
    setcolor(12);
gotoxy(x,y);
printf("__________________\n") ;
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| 10             |\n") ;
gotoxy(x,y+3);
printf("|       /\\       |\n") ;
gotoxy(x,y+4);
printf("|      /  \\      |\n") ;
gotoxy(x,y+5);
printf("|     /    \\     |\n") ;
gotoxy(x,y+6);
printf("|     \\    /     |\n") ;
gotoxy(x,y+7);
printf("|      \\  /      |\n") ;
gotoxy(x,y+8);
printf("|       \\/       |\n") ;
gotoxy(x,y+9);
printf("|             10 |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;setcolor(7);
}
void jackdiamond (x,y) {
    setcolor(12);
gotoxy(x,y);
printf("__________________\n") ;
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| J              |\n") ;
gotoxy(x,y+3);
printf("|       /\\       |\n") ;
gotoxy(x,y+4);
printf("|      /  \\      |\n") ;
gotoxy(x,y+5);
printf("|     /    \\     |\n") ;
gotoxy(x,y+6);
printf("|     \\    /     |\n") ;
gotoxy(x,y+7);
printf("|      \\  /      |\n") ;
gotoxy(x,y+8);
printf("|       \\/       |\n") ;
gotoxy(x,y+9);
printf("|              J |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;setcolor(7);
}
void queendiamond (x,y) {
    setcolor(12);
gotoxy(x,y);
printf("__________________\n") ;
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| Q              |\n") ;
gotoxy(x,y+3);
printf("|       /\\       |\n") ;
gotoxy(x,y+4);
printf("|      /  \\      |\n") ;
gotoxy(x,y+5);
printf("|     /    \\     |\n") ;
gotoxy(x,y+6);
printf("|     \\    /     |\n") ;
gotoxy(x,y+7);
printf("|      \\  /      |\n") ;
gotoxy(x,y+8);
printf("|       \\/       |\n") ;
gotoxy(x,y+9);
printf("|              Q |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;setcolor(7);
}
void kingdiamond (x,y) {
    setcolor(12);
gotoxy(x,y);
printf("__________________\n") ;
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| K              |\n") ;
gotoxy(x,y+3);
printf("|       /\\       |\n") ;
gotoxy(x,y+4);
printf("|      /  \\      |\n") ;
gotoxy(x,y+5);
printf("|     /    \\     |\n") ;
gotoxy(x,y+6);
printf("|     \\    /     |\n") ;
gotoxy(x,y+7);
printf("|      \\  /      |\n") ;
gotoxy(x,y+8);
printf("|       \\/       |\n") ;
gotoxy(x,y+9);
printf("|              K |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;setcolor(7);
}
void asdiamond (x,y) {
    setcolor(12);
gotoxy(x,y);
printf("__________________\n") ;
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| A              |\n") ;
gotoxy(x,y+3);
printf("|       /\\       |\n") ;
gotoxy(x,y+4);
printf("|      /  \\      |\n") ;
gotoxy(x,y+5);
printf("|     /    \\     |\n") ;
gotoxy(x,y+6);
printf("|     \\    /     |\n") ;
gotoxy(x,y+7);
printf("|      \\  /      |\n") ;
gotoxy(x,y+8);
printf("|       \\/       |\n") ;
gotoxy(x,y+9);
printf("|              A |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;setcolor(7);
}

void satuclover (x,y) {
gotoxy(x,y);
printf("__________________\n");
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| 1              |\n") ;
gotoxy(x,y+3);
printf("|       ___      |\n");
gotoxy(x,y+4);
printf("|     _(   )_    |\n");
gotoxy(x,y+5);
printf("|    (__   __)   |\n");
gotoxy(x,y+6);
printf("|       | |      |\n");
gotoxy(x,y+7);
printf("|       |_|      |\n");
gotoxy(x,y+8);
printf("|                |\n") ;
gotoxy(x,y+9);
printf("|              1 |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;
}
void duaclover (x,y) {
gotoxy(x,y);
printf("__________________\n");
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| 2              |\n") ;
gotoxy(x,y+3);
printf("|       ___      |\n");
gotoxy(x,y+4);
printf("|     _(   )_    |\n");
gotoxy(x,y+5);
printf("|    (__   __)   |\n");
gotoxy(x,y+6);
printf("|       | |      |\n");
gotoxy(x,y+7);
printf("|       |_|      |\n");
gotoxy(x,y+8);
printf("|                |\n") ;
gotoxy(x,y+9);
printf("|              2 |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;
}
void tigaclover (x,y) {
gotoxy(x,y);
printf("__________________\n");
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| 3              |\n") ;
gotoxy(x,y+3);
printf("|       ___      |\n");
gotoxy(x,y+4);
printf("|     _(   )_    |\n");
gotoxy(x,y+5);
printf("|    (__   __)   |\n");
gotoxy(x,y+6);
printf("|       | |      |\n");
gotoxy(x,y+7);
printf("|       |_|      |\n");
gotoxy(x,y+8);
printf("|                |\n") ;
gotoxy(x,y+9);
printf("|              3 |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;
}
void empatclover (x,y) {
gotoxy(x,y);
printf("__________________\n");
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| 4              |\n") ;
gotoxy(x,y+3);
printf("|       ___      |\n");
gotoxy(x,y+4);
printf("|     _(   )_    |\n");
gotoxy(x,y+5);
printf("|    (__   __)   |\n");
gotoxy(x,y+6);
printf("|       | |      |\n");
gotoxy(x,y+7);
printf("|       |_|      |\n");
gotoxy(x,y+8);
printf("|                |\n") ;
gotoxy(x,y+9);
printf("|              4 |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;
}
void limaclover (x,y) {
gotoxy(x,y);
printf("__________________\n");
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| 5              |\n") ;
gotoxy(x,y+3);
printf("|       ___      |\n");
gotoxy(x,y+4);
printf("|     _(   )_    |\n");
gotoxy(x,y+5);
printf("|    (__   __)   |\n");
gotoxy(x,y+6);
printf("|       | |      |\n");
gotoxy(x,y+7);
printf("|       |_|      |\n");
gotoxy(x,y+8);
printf("|                |\n") ;
gotoxy(x,y+9);
printf("|              5 |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;
}
void enamclover (x,y) {
gotoxy(x,y);
printf("__________________\n");
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| 6              |\n") ;
gotoxy(x,y+3);
printf("|       ___      |\n");
gotoxy(x,y+4);
printf("|     _(   )_    |\n");
gotoxy(x,y+5);
printf("|    (__   __)   |\n");
gotoxy(x,y+6);
printf("|       | |      |\n");
gotoxy(x,y+7);
printf("|       |_|      |\n");
gotoxy(x,y+8);
printf("|                |\n") ;
gotoxy(x,y+9);
printf("|              6 |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;
}
void tujuhclover (x,y) {
gotoxy(x,y);
printf("__________________\n");
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| 7              |\n") ;
gotoxy(x,y+3);
printf("|       ___      |\n");
gotoxy(x,y+4);
printf("|     _(   )_    |\n");
gotoxy(x,y+5);
printf("|    (__   __)   |\n");
gotoxy(x,y+6);
printf("|       | |      |\n");
gotoxy(x,y+7);
printf("|       |_|      |\n");
gotoxy(x,y+8);
printf("|                |\n") ;
gotoxy(x,y+9);
printf("|              7 |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;
}
void delapanclover (x,y) {
gotoxy(x,y);
printf("__________________\n");
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| 8              |\n") ;
gotoxy(x,y+3);
printf("|       ___      |\n");
gotoxy(x,y+4);
printf("|     _(   )_    |\n");
gotoxy(x,y+5);
printf("|    (__   __)   |\n");
gotoxy(x,y+6);
printf("|       | |      |\n");
gotoxy(x,y+7);
printf("|       |_|      |\n");
gotoxy(x,y+8);
printf("|                |\n") ;
gotoxy(x,y+9);
printf("|              8 |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;
}
void sembilanclover (x,y) {
gotoxy(x,y);
printf("__________________\n");
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| 9              |\n") ;
gotoxy(x,y+3);
printf("|       ___      |\n");
gotoxy(x,y+4);
printf("|     _(   )_    |\n");
gotoxy(x,y+5);
printf("|    (__   __)   |\n");
gotoxy(x,y+6);
printf("|       | |      |\n");
gotoxy(x,y+7);
printf("|       |_|      |\n");
gotoxy(x,y+8);
printf("|                |\n") ;
gotoxy(x,y+9);
printf("|              9 |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;
}
void sepuluhclover (x,y) {
gotoxy(x,y);
printf("__________________\n");
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| 10             |\n") ;
gotoxy(x,y+3);
printf("|       ___      |\n");
gotoxy(x,y+4);
printf("|     _(   )_    |\n");
gotoxy(x,y+5);
printf("|    (__   __)   |\n");
gotoxy(x,y+6);
printf("|       | |      |\n");
gotoxy(x,y+7);
printf("|       |_|      |\n");
gotoxy(x,y+8);
printf("|                |\n") ;
gotoxy(x,y+9);
printf("|             10 |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;
}
void jackclover (x,y) {
gotoxy(x,y);
printf("__________________\n");
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| J              |\n") ;
gotoxy(x,y+3);
printf("|       ___      |\n");
gotoxy(x,y+4);
printf("|     _(   )_    |\n");
gotoxy(x,y+5);
printf("|    (__   __)   |\n");
gotoxy(x,y+6);
printf("|       | |      |\n");
gotoxy(x,y+7);
printf("|       |_|      |\n");
gotoxy(x,y+8);
printf("|                |\n") ;
gotoxy(x,y+9);
printf("|              J |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;
}
void queenclover (x,y) {
gotoxy(x,y);
printf("__________________\n");
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| Q              |\n") ;
gotoxy(x,y+3);
printf("|       ___      |\n");
gotoxy(x,y+4);
printf("|     _(   )_    |\n");
gotoxy(x,y+5);
printf("|    (__   __)   |\n");
gotoxy(x,y+6);
printf("|       | |      |\n");
gotoxy(x,y+7);
printf("|       |_|      |\n");
gotoxy(x,y+8);
printf("|                |\n") ;
gotoxy(x,y+9);
printf("|              Q |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;
}
void kingclover (x,y) {
gotoxy(x,y);
printf("__________________\n");
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| K              |\n") ;
gotoxy(x,y+3);
printf("|       ___      |\n");
gotoxy(x,y+4);
printf("|     _(   )_    |\n");
gotoxy(x,y+5);
printf("|    (__   __)   |\n");
gotoxy(x,y+6);
printf("|       | |      |\n");
gotoxy(x,y+7);
printf("|       |_|      |\n");
gotoxy(x,y+8);
printf("|                |\n") ;
gotoxy(x,y+9);
printf("|              K |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;
}
void asclover (x,y) {
gotoxy(x,y);
printf("__________________\n");
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| A              |\n") ;
gotoxy(x,y+3);
printf("|       ___      |\n");
gotoxy(x,y+4);
printf("|     _(   )_    |\n");
gotoxy(x,y+5);
printf("|    (__   __)   |\n");
gotoxy(x,y+6);
printf("|       | |      |\n");
gotoxy(x,y+7);
printf("|       |_|      |\n");
gotoxy(x,y+8);
printf("|                |\n") ;
gotoxy(x,y+9);
printf("|              A |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;
}

void satulove (x,y) {
    setcolor(12);
gotoxy(x,y);
printf("__________________\n");
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| 1              |\n") ;
gotoxy(x,y+3);
printf("|    __    __    |\n");
gotoxy(x,y+4);
printf("|   (  \\__/  )   |\n");
gotoxy(x,y+5);
printf("|    \\      /    |\n");
gotoxy(x,y+6);
printf("|     \\    /     |\n");
gotoxy(x,y+7);
printf("|      \\  /      |\n");
gotoxy(x,y+8);
printf("|       \\/       |\n") ;
gotoxy(x,y+9);
printf("|              1 |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;setcolor(7);
}
void dualove (x,y) {
    setcolor(12);
gotoxy(x,y);
printf("__________________\n");
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| 2              |\n") ;
gotoxy(x,y+3);
printf("|    __    __    |\n");
gotoxy(x,y+4);
printf("|   (  \\__/  )   |\n");
gotoxy(x,y+5);
printf("|    \\      /    |\n");
gotoxy(x,y+6);
printf("|     \\    /     |\n");
gotoxy(x,y+7);
printf("|      \\  /      |\n");
gotoxy(x,y+8);
printf("|       \\/       |\n") ;
gotoxy(x,y+9);
printf("|              2 |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;setcolor(7);
}
void tigalove (x,y) {
    setcolor(12);
gotoxy(x,y);
printf("__________________\n");
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| 3              |\n") ;
gotoxy(x,y+3);
printf("|    __    __    |\n");
gotoxy(x,y+4);
printf("|   (  \\__/  )   |\n");
gotoxy(x,y+5);
printf("|    \\      /    |\n");
gotoxy(x,y+6);
printf("|     \\    /     |\n");
gotoxy(x,y+7);
printf("|      \\  /      |\n");
gotoxy(x,y+8);
printf("|       \\/       |\n") ;
gotoxy(x,y+9);
printf("|              3 |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;setcolor(7);
}
void empatlove (x,y) {
    setcolor(12);
gotoxy(x,y);
printf("__________________\n");
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| 4              |\n") ;
gotoxy(x,y+3);
printf("|    __    __    |\n");
gotoxy(x,y+4);
printf("|   (  \\__/  )   |\n");
gotoxy(x,y+5);
printf("|    \\      /    |\n");
gotoxy(x,y+6);
printf("|     \\    /     |\n");
gotoxy(x,y+7);
printf("|      \\  /      |\n");
gotoxy(x,y+8);
printf("|       \\/       |\n") ;
gotoxy(x,y+9);
printf("|              4 |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;setcolor(7);
}
void limalove (x,y) {
    setcolor(12);
gotoxy(x,y);
printf("__________________\n");
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| 5              |\n") ;
gotoxy(x,y+3);
printf("|    __    __    |\n");
gotoxy(x,y+4);
printf("|   (  \\__/  )   |\n");
gotoxy(x,y+5);
printf("|    \\      /    |\n");
gotoxy(x,y+6);
printf("|     \\    /     |\n");
gotoxy(x,y+7);
printf("|      \\  /      |\n");
gotoxy(x,y+8);
printf("|       \\/       |\n") ;
gotoxy(x,y+9);
printf("|              5 |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;setcolor(7);
}
void enamlove (x,y) {
    setcolor(12);
gotoxy(x,y);
printf("__________________\n");
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| 6              |\n") ;
gotoxy(x,y+3);
printf("|    __    __    |\n");
gotoxy(x,y+4);
printf("|   (  \\__/  )   |\n");
gotoxy(x,y+5);
printf("|    \\      /    |\n");
gotoxy(x,y+6);
printf("|     \\    /     |\n");
gotoxy(x,y+7);
printf("|      \\  /      |\n");
gotoxy(x,y+8);
printf("|       \\/       |\n") ;
gotoxy(x,y+9);
printf("|              6 |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;setcolor(7);
}
void tujuhlove (x,y) {
    setcolor(12);
gotoxy(x,y);
printf("__________________\n");
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| 7              |\n") ;
gotoxy(x,y+3);
printf("|    __    __    |\n");
gotoxy(x,y+4);
printf("|   (  \\__/  )   |\n");
gotoxy(x,y+5);
printf("|    \\      /    |\n");
gotoxy(x,y+6);
printf("|     \\    /     |\n");
gotoxy(x,y+7);
printf("|      \\  /      |\n");
gotoxy(x,y+8);
printf("|       \\/       |\n") ;
gotoxy(x,y+9);
printf("|              7 |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;setcolor(7);
}
void delapanlove (x,y) {
    setcolor(12);
gotoxy(x,y);
printf("__________________\n");
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| 8              |\n") ;
gotoxy(x,y+3);
printf("|    __    __    |\n");
gotoxy(x,y+4);
printf("|   (  \\__/  )   |\n");
gotoxy(x,y+5);
printf("|    \\      /    |\n");
gotoxy(x,y+6);
printf("|     \\    /     |\n");
gotoxy(x,y+7);
printf("|      \\  /      |\n");
gotoxy(x,y+8);
printf("|       \\/       |\n") ;
gotoxy(x,y+9);
printf("|              8 |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;setcolor(7);
}
void sembilanlove (x,y) {
    setcolor(12);
gotoxy(x,y);
printf("__________________\n");
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| 9              |\n") ;
gotoxy(x,y+3);
printf("|    __    __    |\n");
gotoxy(x,y+4);
printf("|   (  \\__/  )   |\n");
gotoxy(x,y+5);
printf("|    \\      /    |\n");
gotoxy(x,y+6);
printf("|     \\    /     |\n");
gotoxy(x,y+7);
printf("|      \\  /      |\n");
gotoxy(x,y+8);
printf("|       \\/       |\n") ;
gotoxy(x,y+9);
printf("|              9 |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;setcolor(7);
}
void sepuluhlove (x,y) {
    setcolor(12);
gotoxy(x,y);
printf("__________________\n");
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| 10             |\n") ;
gotoxy(x,y+3);
printf("|    __    __    |\n");
gotoxy(x,y+4);
printf("|   (  \\__/  )   |\n");
gotoxy(x,y+5);
printf("|    \\      /    |\n");
gotoxy(x,y+6);
printf("|     \\    /     |\n");
gotoxy(x,y+7);
printf("|      \\  /      |\n");
gotoxy(x,y+8);
printf("|       \\/       |\n") ;
gotoxy(x,y+9);
printf("|             10 |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;setcolor(7);
}
void jacklove (x,y) {
    setcolor(12);
gotoxy(x,y);
printf("__________________\n");
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| J              |\n") ;
gotoxy(x,y+3);
printf("|    __    __    |\n");
gotoxy(x,y+4);
printf("|   (  \\__/  )   |\n");
gotoxy(x,y+5);
printf("|    \\      /    |\n");
gotoxy(x,y+6);
printf("|     \\    /     |\n");
gotoxy(x,y+7);
printf("|      \\  /      |\n");
gotoxy(x,y+8);
printf("|       \\/       |\n") ;
gotoxy(x,y+9);
printf("|              J |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;setcolor(7);
}
void queenlove (x,y) {
    setcolor(12);
gotoxy(x,y);
printf("__________________\n");
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| Q              |\n") ;
gotoxy(x,y+3);
printf("|    __    __    |\n");
gotoxy(x,y+4);
printf("|   (  \\__/  )   |\n");
gotoxy(x,y+5);
printf("|    \\      /    |\n");
gotoxy(x,y+6);
printf("|     \\    /     |\n");
gotoxy(x,y+7);
printf("|      \\  /      |\n");
gotoxy(x,y+8);
printf("|       \\/       |\n") ;
gotoxy(x,y+9);
printf("|              Q |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;setcolor(7);
}
void kinglove (x,y) {
    setcolor(12);
gotoxy(x,y);
printf("__________________\n");
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| K              |\n") ;
gotoxy(x,y+3);
printf("|    __    __    |\n");
gotoxy(x,y+4);
printf("|   (  \\__/  )   |\n");
gotoxy(x,y+5);
printf("|    \\      /    |\n");
gotoxy(x,y+6);
printf("|     \\    /     |\n");
gotoxy(x,y+7);
printf("|      \\  /      |\n");
gotoxy(x,y+8);
printf("|       \\/       |\n") ;
gotoxy(x,y+9);
printf("|              K |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;
setcolor(7);
}
void aslove (x,y) {

gotoxy(x,y);
setcolor(12);
printf("__________________\n");
gotoxy(x,y+1);
printf("|                |\n") ;
gotoxy(x,y+2);
printf("| A              |\n") ;
gotoxy(x,y+3);
printf("|    __    __    |\n");
gotoxy(x,y+4);
printf("|   (  \\__/  )   |\n");
gotoxy(x,y+5);
printf("|    \\      /    |\n");
gotoxy(x,y+6);
printf("|     \\    /     |\n");
gotoxy(x,y+7);
printf("|      \\  /      |\n");
gotoxy(x,y+8);
printf("|       \\/       |\n") ;
gotoxy(x,y+9);
printf("|              A |\n") ;
gotoxy(x,y+10);
printf("|________________|\n") ;
setcolor(7);
}
void loading(int x,int y,int dly){
for ( i = 1 ; i <= 100 ; i ++  ){
    gotoxy(x,y);
    delay(dly);
    printf("NOW LOADING %i%%",i);


    }
}
void countdown(int x,int y,int dly){
for ( i = 5 ; i >= 1 ; i --  ){
    gotoxy(x,y);
    delay(dly);
    printf("%i",i);


    }
}
void gotoxy(int x, int y) {

     COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void printRandoms(int lower, int upper, int count){
    for (i = 0; i < count; i++) {
        int num = (rand() %
           (upper - lower + 1)) + lower;
        printf("%d ", num);
    }
}
void enter(j){
    for ( i = 0 ; i < j ; i++ ) {
        printf("\n");
    }
}

void acakkartu(int x , int y) {
       acakkartu2:
                i = rand()%53 ;
                if(i == 0 ) {
                    goto acakkartu2;}
                for(k = 0 ; k < tebarankartu ; k++){
                    if(tampung2[k] == i ) {
                        goto acakkartu2;
                    }
                }
                cardp1[urutanp1].face = card[i].face ;
                strcpy(cardp1[urutanp1].suit , card[i].suit) ;
                tampung2[tebarankartu] = i ;
                tebarankartu = tebarankartu+1;



if (i == 1 ) {
    dualove(x,y);
}
else if (i == 2 ) {
    tigalove(x,y);
}
else if (i == 3 ) {
    empatlove(x,y);
}
else if (i == 4   ) {
    limalove(x,y);
}
else if (i == 5   ) {
    enamlove(x,y);
}
else if (i == 6   ) {
    tujuhlove(x,y);
}
else if (i == 7   ) {
    delapanlove(x,y);
}
else if (i == 8   ) {
    sembilanlove(x,y);
}
else if (i == 9   ) {
    sepuluhlove(x,y);
}
else if (i == 10   ) {
    jacklove(x,y);
}
else if (i == 11   ) {
    queenlove(x,y);
}
else if (i == 12   ) {
    kinglove(x,y);
}
else if (i == 13   ) {
    aslove(x,y);
}
else if (i == 14   ) {
    duaspade(x,y);
}
else if (i == 15   ) {
    tigaspade(x,y);
}
else if (i == 16   ) {
    empatspade(x,y);
}
else if (i == 17   ) {
    limaspade(x,y);
}
else if (i == 18   ) {
    enamspade(x,y);
}
else if (i == 19   ) {
    tujuhspade(x,y);
}
else if (i == 20   ) {
    delapanspade(x,y);
}
else if (i == 21   ) {
    sembilanspade(x,y);
}
else if (i == 22   ) {
    sepuluhspade(x,y);
}
else if (i == 23   ) {
    jackspade(x,y);
}
else if (i == 24   ) {
    queenspade(x,y);
}
else if (i == 25   ) {
    kingspade(x,y);
}
else if (i == 26   ) {
    asspade(x,y);
}
else if (i == 27   ) {
    duadiamond(x,y);
}
else if (i == 28   ) {
    tigadiamond(x,y);
}
else if (i == 29   ) {
    empatdiamond(x,y);
}
else if (i == 30   ) {
    limadiamond(x,y);
}
else if (i == 31   ) {
    enamdiamond(x,y);
}
else if (i == 32   ) {
    tujuhdiamond(x,y);
}
else if (i == 33   ) {
    delapandiamond(x,y);
}
else if (i == 34   ) {
    sembilandiamond(x,y);
}
else if (i == 35   ) {
    sepuluhdiamond(x,y);
}
else if (i == 36   ) {
    jackdiamond(x,y);
}
else if (i == 37   ) {
    queendiamond(x,y);
}
else if (i == 38   ) {
    kingdiamond(x,y);
}
else if (i == 39   ) {
    asdiamond(x,y);
}
else if (i == 40   ) {
    duaclover(x,y);
}
else if (i == 41   ) {
    tigaclover(x,y);
}
else if (i == 42   ) {
    empatclover(x,y);
}
else if (i == 43   ) {
    limaclover(x,y);
}
else if (i == 44   ) {
    enamclover(x,y);
}
else if (i == 45   ) {
    tujuhclover(x,y);
}
else if (i == 46   ) {
    delapanclover(x,y);
}
else if (i == 47   ) {
    sembilanclover(x,y);
}
else if (i == 48   ) {
    sepuluhclover(x,y);
}
else if (i == 49   ) {
    jackclover(x,y);

}
else if (i == 50   ) {
    queenclover(x,y);

}
else if (i == 51   ) {
    kingclover(x,y);
}
else if (i == 52   ) {
    asclover(x,y);
}

urutanp1++;
}

void acakkartup2() {
             acakkartu2:
                i = rand()%53 ;
                if(i == 0 ) {
                    goto acakkartu2;}
                for(k = 0 ; k < tebarankartu ; k++){
                    if(tampung2[k] == i ) {
                        goto acakkartu2;
                    }
                }
                cardp2[urutanp2].face = card[i].face ;
                strcpy(cardp2[urutanp2].suit , card[i].suit) ;
                tampung2[tebarankartu] = i ;
                tebarankartu = tebarankartu+1;

urutanp2++;
}

void acakkartuboard(int x , int y) {
        acakkartu2:
                i = rand()%53 ;
                if(i == 0 ) {
                    goto acakkartu2;}
                for(k = 0 ; k < tebarankartu ; k++){
                    if(tampung2[k] == i ) {
                        goto acakkartu2;
                    }
                }
                cardp1[urutanp1].face = card[i].face ;
                strcpy(cardp1[urutanp1].suit , card[i].suit) ;
                cardp2[urutanp2].face = card[i].face ;
                strcpy(cardp2[urutanp2].suit , card[i].suit) ;
                tampung2[tebarankartu] = i ;
                tebarankartu = tebarankartu+1;
                urutanp1++ ;
                urutanp2++ ;


if (i == 1 ) {
    dualove(x,y);
}
else if (i == 2 ) {
    tigalove(x,y);
}
else if (i == 3 ) {
    empatlove(x,y);
}
else if (i == 4   ) {
    limalove(x,y);
}
else if (i == 5   ) {
    enamlove(x,y);
}
else if (i == 6   ) {
    tujuhlove(x,y);
}
else if (i == 7   ) {
    delapanlove(x,y);
}
else if (i == 8   ) {
    sembilanlove(x,y);
}
else if (i == 9   ) {
    sepuluhlove(x,y);
}
else if (i == 10   ) {
    jacklove(x,y);
}
else if (i == 11   ) {
    queenlove(x,y);
}
else if (i == 12   ) {
    kinglove(x,y);
}
else if (i == 13   ) {
    aslove(x,y);
}
else if (i == 14   ) {
    duaspade(x,y);
}
else if (i == 15   ) {
    tigaspade(x,y);
}
else if (i == 16   ) {
    empatspade(x,y);
}
else if (i == 17   ) {
    limaspade(x,y);
}
else if (i == 18   ) {
    enamspade(x,y);
}
else if (i == 19   ) {
    tujuhspade(x,y);
}
else if (i == 20   ) {
    delapanspade(x,y);
}
else if (i == 21   ) {
    sembilanspade(x,y);
}
else if (i == 22   ) {
    sepuluhspade(x,y);
}
else if (i == 23   ) {
    jackspade(x,y);
}
else if (i == 24   ) {
    queenspade(x,y);
}
else if (i == 25   ) {
    kingspade(x,y);
}
else if (i == 26   ) {
    asspade(x,y);
}
else if (i == 27   ) {
    duadiamond(x,y);
}
else if (i == 28   ) {
    tigadiamond(x,y);
}
else if (i == 29   ) {
    empatdiamond(x,y);
}
else if (i == 30   ) {
    limadiamond(x,y);
}
else if (i == 31   ) {
    enamdiamond(x,y);
}
else if (i == 32   ) {
    tujuhdiamond(x,y);
}
else if (i == 33   ) {
    delapandiamond(x,y);
}
else if (i == 34   ) {
    sembilandiamond(x,y);
}
else if (i == 35   ) {
    sepuluhdiamond(x,y);
}
else if (i == 36   ) {
    jackdiamond(x,y);
}
else if (i == 37   ) {
    queendiamond(x,y);
}
else if (i == 38   ) {
    kingdiamond(x,y);
}
else if (i == 39   ) {
    asdiamond(x,y);
}
else if (i == 40   ) {
    duaclover(x,y);
}
else if (i == 41   ) {
    tigaclover(x,y);
}
else if (i == 42   ) {
    empatclover(x,y);
}
else if (i == 43   ) {
    limaclover(x,y);
}
else if (i == 44   ) {
    enamclover(x,y);
}
else if (i == 45   ) {
    tujuhclover(x,y);
}
else if (i == 46   ) {
    delapanclover(x,y);
}
else if (i == 47   ) {
    sembilanclover(x,y);
}
else if (i == 48   ) {
    sepuluhclover(x,y);
}
else if (i == 49   ) {
    jackclover(x,y);

}
else if (i == 50   ) {
    queenclover(x,y);

}
else if (i == 51   ) {
    kingclover(x,y);
}
else if (i == 52   ) {
    asclover(x,y);
}


}

void welcome(){


        printf("            /$$      /$$           /$$                                                                                    ||\n");
        printf("||                             | $$  /$ | $$          | $$                                                                                    ||\n");
        printf("||                             | $$ /$$$| $$  /$$$$$$ | $$  /$$$$$$$  /$$$$$$  /$$$$$$/$$$$   /$$$$$$                                         ||\n");
        printf("||                             | $$/$$ $$ $$ /$$__  $$| $$ /$$_____/ /$$__  $$| $$_  $$_  $$ /$$__  $$                                        ||\n");
        printf("||                             | $$$$_  $$$$| $$$$$$$$| $$| $$      | $$  \\ $$| $$ \\ $$ \\ $$| $$$$$$$$                                       \n");
        printf("||                             | $$$/ \\  $$$| $$_____/| $$| $$      | $$  | $$| $$ | $$ | $$| $$_____/                                       \n");
        printf("||                             | $$/   \\  $$|  $$$$$$$| $$|  $$$$$$$|  $$$$$$/| $$ | $$ | $$|  $$$$$$$                                       \n");
        printf("||                             |__/     \\__/ \\_______/|__/ \\_______/ \\______/ |__/ |__/ |__/ \\_______/                                        ||\n");
        printf("||                                                                                                                                            ||\n");
        printf("||                                                                                                                                            ||\n");
        printf("||                                                                                                                                            ||\n");
        printf("||                                                           /$$$$$$$$                                                                        ||\n");
        printf("||                                                          |__  $$__/                                                                        ||\n");
        printf("||                                                             | $$  /$$$$$$                                                                  ||\n");
        printf("||                                                             | $$ /$$__  $$                                                                 ||\n");
        printf("||                                                             | $$| $$  \\ $$                                                                 ||\n");
        printf("||                                                             | $$| $$  | $$                                                                 ||\n");
        printf("||                                                             | $$|  $$$$$$/                                                                \n");
        printf("||                                                             |__/ \\______/                                                                  ||\n");
        printf("||                                                                                                                                            ||\n");
        printf("||                                                                                                                                          \n");
        printf("||                                                                                                                                           \n");
        printf("||  /$$$$$$$           /$$                                  /$$$$$$  /$$                         /$$             /$$                          ||\n");
        printf("|| | $$__  $$         | $$                                 /$$__  $$|__/                        | $$            | $$                          ||\n");
        printf("|| | $$  \\ $$ /$$$$$$ | $$   /$$  /$$$$$$   /$$$$$$       | $$  \\__/ /$$ /$$$$$$/$$$$  /$$   /$$| $$  /$$$$$$  /$$$$$$    /$$$$$$   /$$$$$$\n");
        printf("|| | $$$$$$$//$$__  $$| $$  /$$/ /$$__  $$ /$$__  $$      |  $$$$$$ | $$| $$_  $$_  $$| $$  | $$| $$ |____  $$|_  $$_/   /$$__  $$ /$$__  $$\n");
        printf("|| | $$____/| $$  \\ $$| $$$$$$/ | $$$$$$$$| $$  \\__/       \\____  $$| $$| $$ \\ $$ \\ $$| $$  | $$| $$  /$$$$$$$  | $$    | $$  \\ $$| $$  \\__/\n");
        printf("|| | $$     | $$  | $$| $$_  $$ | $$_____/| $$             /$$  \\ $$| $$| $$ | $$ | $$| $$  | $$| $$ /$$__  $$  | $$ /$$| $$  | $$| $$\n");
        printf("|| | $$     |  $$$$$$/| $$ \\  $$|  $$$$$$$| $$            |  $$$$$$/| $$| $$ | $$ | $$|  $$$$$$/| $$|  $$$$$$$  |  $$$$/|  $$$$$$/| $$\n");
        printf("|| |__/      \\______/ |__/  \\__/ \\_______/|__/             \\______/ |__/|__/ |__/ |__/ \\______/ |__/ \\_______/   \\___/   \\______/ |__/\n");
        printf("||                                                                                                                                          \n");
        printf("||                                                                                                                                          \n");
        printf("||                                                                                                  Copyright by : M.Rizky Ferlanda & Eky  \n");

}
void instruction(){
    gotoxy(50,10);
printf("\t\tREADME.PLS\n\n");
printf("\tSelamat Datang, ini adalah game poker sederhana hasil implementasi dari Zynga Poker di Facebook.\n");
printf("\tGame ini dibuat untuk memenuhi tugas besar Algoritma dan Pemrograman di Prodi Pend.Ilkom 2018.\n");
printf("\tDiharapkan kepada penilai jika menemukan bug dalam game ini harap dimaklumi.\n\n\n\n");
printf("\tKETENTUAN\n\n");
printf("\t1. Setiap User yang baru mendaftar akun, mendapatkan chip sebesar $100.00 \n");
printf("\t2. User Bisa memilih, ingin melawan bot yang berjumlah 1 ataupun 3. \n");
printf("\t3. Jika User kehabisan chip, akan terjadi game over dan user terkick dari room\n");
printf("\t4. Untuk Melanjutkan Game, User bisa membuat akun baru atau menyelesaikan Quest di menu Earn Chip\n");
printf("\t5. Quest Berisi Operasi Matematika Sederhana yang jika diselesaikan dengan benar akan mendapatkan chip sebagai reward.\n\n");
printf("\tMengenai Aturan bermain, akan dijelaskan Di Menu Rules didalam game.\n\n\n\n");
printf("\t");
system("pause");
system("cls");
}
void instruction2(){
    system("cls");
gotoxy(50,10);
printf("\t\tRules.txt\n\n");
printf("\t1. Setiap Player akan diberikan 2 kartu secara acak\n");
printf("\t2. Diawal permainan, player wajib membayar bid sebesar $1 sebagai biaya partisipasi\n");
printf("\t3. Setelah membayar bid, secara bergiliran player bisa memilih apakah ingin menaikkan taruhan\n\tcheck, ataupun fold \n");
printf("\t4. Setelah itu, akan dibentangkan 3 kartu diatas board\n");
printf("\t5. Ronde 2 dimulai, user kembali bisa memilih apakah ingin menaikkan taruhan , check maupun fold\n");
printf("\t6. Kartu ke 4 dibentangkan , user kembali memilih\n");
printf("\t7. Setelah itu , kartu kelima dibentangkan sekaligus sebagai penanda final round\n");
printf("\t8. User memilih aksi terakhir sebelum pengumuman pemenang diumumkan\n");
printf("\t9. Jika tingkat kartu sama, maka hadiah akan dibagi rata\n\n");
printf("\n\tMengenai Tingkat kekuatan kartu, akan dijelaskan setelah slide berikut\n\n\n\n");
printf("\t");
system("pause");
system("cls");
gotoxy(50,10);
printf("\t\Card Rank\n\n");
printf("\t1. Royal Flush\n\n");
printf("\tRoyal Flush Merupakan Tingkatan Kartu Paling kuat\n");
printf("\tTerjadi Ketika Straight dan Flush bersamaan, dengan As sebagai straight terakhir\n");
gotoxy(50,15);
sepuluhspade(8,16);
jackspade(8+19,16);
queenspade(19+8+19,16);
kingspade(8+19+19+19,16);
asspade(8+19+19+19+19,16);

gotoxy(4,29);
printf("\t2. Straight Flush\n\n");
printf("\tTerjadi Ketika  Straight dan Flush bersamaan secara biasa\n");
tigalove(8,32);
empatlove(8+19,32);
limalove(19+8+19,32);
enamlove(8+19+19+19,32);
tujuhlove(8+19+19+19+19,32);


gotoxy(4,45);
printf("\t3. Four of a Kind\n\n");
printf("\tTerjadi Ketika kartu di tangan dan di board memiliki 4 angka/huruf yg sama \n");
asspade(8,48);
asclover(8+19,48);
aslove(19+8+19,48);
asdiamond(8+19+19+19,48);
tigaspade(8+19+19+19+19,48);

gotoxy(4,61);
printf("\t4. Full House\n\n");
printf("\tTerjadi Ketika Three of a kind ditambah 1 Pair\n");
jackspade(8,64);
jackclover(8+19,64);
jacklove(19+8+19,64);
duaclover(8+19+19+19,64);
duadiamond(8+19+19+19+19,64);


gotoxy(4,77);
printf("\t5. Flush\n\n");
printf("\tTerjadi Ketika Tersusun 5 kartu dengan Seri yang sama \n");
satudiamond(8,80);
enamdiamond(8+19,80);
queendiamond(19+8+19,80);
empatdiamond(8+19+19+19,80);
sembilandiamond(8+19+19+19+19,80);

gotoxy(4,93);
printf("\t6. Straight \n\n");
printf("\tTerjadi Ketika  Tersusun 5 kartu dengan susunan berderet\n");
tigaspade(8,96);
empatclover(8+19,96);
limadiamond(19+8+19,96);
enamspade(8+19+19+19,96);
tujuhlove(8+19+19+19+19,96);

gotoxy(4,109);
printf("\t7. Three of kind \n\n");
printf("\tTerjadi Ketika Tersusun 3 kartu dengan huruf/angka yang sama\n");
tigaspade(8,112);
tigalove(8+19,112);
tigadiamond(19+8+19,112);
enamspade(8+19+19+19,112);
tujuhlove(8+19+19+19+19,112);

gotoxy(4,125);
printf("\t8. Two Pair \n\n");
printf("\tTerjadi Ketika  Tersusun 2 pasang kartu dengan angka / huruf yang sama\n");
jackclover(8,128);
jackdiamond(8+19,128);
queenlove(19+8+19,128);
queenspade(8+19+19+19,128);
empatclover(8+19+19+19+19,128);

gotoxy(4,141);
printf("\t9. Pair \n\n");
printf("\tTerjadi Ketika  Tersusun 1 pasang kartu dengan angka / huruf yang sama\n");
tigaspade(8,144);
tigalove(8+19,144);
limadiamond(19+8+19,144);
queenclover(8+19+19+19,144);
tujuhlove(8+19+19+19+19,144);

gotoxy(4,157);
printf("\t10. High card \n\n");
printf("\tTerjadi Ketika Tidak ada kombinasi yang bisa disusun, diambil kartu tertinggi\n");
tigaspade(8,160);
queenclover(8+19,160);
asdiamond(19+8+19,160);
empatclover(8+19+19+19,160);
tujuhspade(8+19+19+19+19,160);

gotoxy(8,175);

}



void kotak(){
int i ;
printf("================================================================================================================================================\n");
for ( i = 0 ; i < 43 ; i++) {

    printf("||                                                                                                                                            ||\n");
}
printf("================================================================================================================================================\n");
}
void welcome2(){
gotoxy(20,10);
kingspade();
gotoxy(39,10);
kingclover();
gotoxy(58,10);
kingdiamond();
gotoxy(77,10);
kinglove();
}
void welcome3(){
gotoxy(20,2);
printf("  _____      _                ____   __  __ _ _    \n");
gotoxy(20,3);
printf(" |  __ \\    | |              / __ \\ / _|/ _| (_)    \n");
gotoxy(20,4);
printf(" | |__) |__ | | _____ _ __  | |  | | |_| |_| |_ _ __   ___    \n");
gotoxy(20,5);
printf(" |  ___/ _ \\| |/ / _ \\ '__| | |  | |  _|  _| | | '_ \\ / _ \\    \n");
gotoxy(20,6);
printf(" | |  | (_) |   <  __/ |    | |__| | | | | | | | | | |  __/    \n");
gotoxy(20,7);
printf(" |_|   \\___/|_|\\_\\___|_|     \\____/|_| |_| |_|_|_| |_|\\___|    \n");
                                                           } ;
void invoice(){
                gotoxy(20,29);
                printf("+ = = = = = = = = = = = = = = = = = = = = = = = +\n");
                gotoxy(20,30);
                printf("|        Selamat Akun Anda Telah Dibuat         |\n");
                gotoxy(20,31);
                printf("+ = = = = = = = = = = = = = = = = = = = = = = = +\n");
                gotoxy(20,32);
                printf("|                                       \t\n");
                gotoxy(20,33);
                printf("|                                         \t\n");
                gotoxy(20,34);
                printf("|                                        \t\n");
                gotoxy(20,35);
                printf("|            Username: %s\n", username);
                gotoxy(20,36);
                printf("|            Password: %s\n", password);
                gotoxy(20,37);
                printf("|            PIN     : %i\n", pin);
                gotoxy(20,38);
                printf("|                                        \t\n");
                gotoxy(20,39);
                printf("|                                        \t\n");
                gotoxy(20,40);
                printf("|                                        \t\n");
                gotoxy(20,41);
                printf("|    Harap Simpan Data Ini sebaik mungkin\t\n");
                gotoxy(20,42);
                printf("|   Untuk Mencegah Hal Yang Tidak Diinginkan\t\n");
                gotoxy(20,43);
                printf("|                                           \t\n");
                gotoxy(20,44);
                printf("+ = = = = = = = = = = = = = = = = = = = = = = = +\n");
                gotoxy(68,32 - 43);
                for ( i= 32 ; i <= 43 ; i ++) {
                    gotoxy(68,i);
                    printf("|");
                                            }

                gotoxy(20,46);
                system("pause");
                system("cls");}

void lowercase(){
 i= 0 ;

                while(username[i] != '\0'){
                    ch = username[i] ;
                    if ( ch >= 'A' && ch <= 'Z'){
                        username[i] = username[i] + 32;
                    }
                    i++;

                }
}
int comparator(const void* a, const void* b){
    const int *ia = (const int *)a; // casting pointer types
    const int *ib = (const int *)b;
    return *ia  - *ib;
}

void sort(){
qsort(cardp1,5,sizeof(cards),comparator);
qsort(cardp2,5,sizeof(cards),comparator);
}

void analyzep1(){
if ( cardp1[0].face == 10 && cardp1[1].face == cardp1[0].face + 1 &&
	 cardp1[2].face == cardp1[1].face + 1 &&
	 cardp1[3].face == cardp1[2].face + 1 &&
	 cardp1[4].face == cardp1[3].face + 1 &&
	 strcmp(cardp1[0].suit,cardp1[1].suit) == 0 &&
	 strcmp(cardp1[1].suit,cardp1[2].suit) == 0 &&
	 strcmp(cardp1[2].suit,cardp1[3].suit) == 0 &&
	 strcmp(cardp1[3].suit,cardp1[4].suit) == 0	) {
		 rank = 10 ;
		 printf("P1 : Royal Flush"); }

else if (cardp1[1].face == cardp1[0].face + 1 &&
			cardp1[2].face == cardp1[1].face + 1 &&
			cardp1[3].face == cardp1[2].face + 1 &&
			cardp1[4].face == cardp1[3].face + 1 &&
			strcmp(cardp1[0].suit,cardp1[1].suit) == 0 &&
			strcmp(cardp1[1].suit,cardp1[2].suit) == 0 &&
			strcmp(cardp1[2].suit,cardp1[3].suit) == 0 &&
			strcmp(cardp1[3].suit,cardp1[4].suit) == 0 ) {
		 rank = 9 ;
		 printf("P1 : Straight Flush"); }

else if ( (cardp1[0].face == cardp1[1].face &&
		  cardp1[1].face == cardp1[2].face &&
		  cardp1[2].face == cardp1[3].face )
		  ||
		  (cardp1[1].face == cardp1[2].face &&
		  cardp1[2].face == cardp1[3].face &&
		  cardp1[3].face == cardp1[4].face ) ) {
		rank = 8 ;
		printf("P1 : Four Of A Kind"); }

else if ( (cardp1[0].face == cardp1[1].face &&
		  cardp1[1].face == cardp1[2].face &&
		  cardp1[3].face == cardp1[4].face)
		  ||
		  (cardp1[0].face == cardp1[1].face &&
		  cardp1[2].face == cardp1[3].face &&
		  cardp1[3].face == cardp1[4].face)){
		rank = 7 ;
		printf("P1 : Full House"); }
else if ( strcmp(cardp1[0].suit,cardp1[1].suit) == 0 &&
	 strcmp(cardp1[1].suit,cardp1[2].suit) == 0 &&
	 strcmp(cardp1[2].suit,cardp1[3].suit) == 0 &&
	 strcmp(cardp1[3].suit,cardp1[4].suit) == 0 ) {
		 rank = 6 ;
	 printf("P1 : Flush "); }
else if (cardp1[1].face == cardp1[0].face + 1 &&
			cardp1[2].face == cardp1[1].face + 1 &&
			cardp1[3].face == cardp1[2].face + 1 &&
			cardp1[4].face == cardp1[3].face + 1 ){
				rank = 5 ;
				printf("P1 : Straight" ); }
else if ( (cardp1[0].face == cardp1[1].face &&
		  cardp1[1].face == cardp1[2].face )
		  ||
		  (cardp1[2].face == cardp1[3].face &&
		  cardp1[3].face == cardp1[4].face )) {
			  rank = 4 ;
			  printf("P1 : Three of A Kind"); }
else if ( (cardp1[0].face == cardp1[1].face &&
		  cardp1[2].face == cardp1[3].face ) ||
		  (cardp1[0].face == cardp1[1].face &&
		  cardp1[3].face == cardp1[4].face ) ||
		  (cardp1[1].face == cardp1[2].face &&
		  cardp1[3].face == cardp1[4].face ) ) {
			  rank = 3;
			  printf("P1 : Two Pair"); }
else if (  (cardp1[0].face == cardp1[1].face ) ||
			(cardp1[1].face == cardp1[2].face ) ||
		(cardp1[2].face == cardp1[3].face ) ||
		(cardp1[3].face == cardp1[4].face )  ) {
			rank = 2 ;
			printf("P1 : One Pair "); }
else {
	rank = 1 ;
	printf("P1 : High Card");
}
		}
void analyzep2(){
if ( cardp2[0].face == 9 && cardp2[1].face == cardp2[0].face + 1 &&
	 cardp2[2].face == cardp2[1].face + 1 &&
	 cardp2[3].face == cardp2[2].face + 1 &&
	 cardp2[4].face == cardp2[3].face + 1 &&
	 strcmp(cardp2[0].suit,cardp2[1].suit) == 0 &&
	 strcmp(cardp2[1].suit,cardp2[2].suit) == 0 &&
	 strcmp(cardp2[2].suit,cardp2[3].suit) == 0 &&
	 strcmp(cardp2[3].suit,cardp2[4].suit) == 0	) {
		 rankp2 = 10 ;
		 printf("p2 : Royal Flush"); }

else if (cardp2[1].face == cardp2[0].face + 1 &&
			cardp2[2].face == cardp2[1].face + 1 &&
			cardp2[3].face == cardp2[2].face + 1 &&
			cardp2[4].face == cardp2[3].face + 1 &&
			strcmp(cardp2[0].suit,cardp2[1].suit) == 0 &&
			strcmp(cardp2[1].suit,cardp2[2].suit) == 0 &&
			strcmp(cardp2[2].suit,cardp2[3].suit) == 0 &&
			strcmp(cardp2[3].suit,cardp2[4].suit) == 0 ) {
		 rankp2 = 9 ;
		 printf("p2 : Straight Flush"); }

else if ( (cardp2[0].face == cardp2[1].face &&
		  cardp2[1].face == cardp2[2].face &&
		  cardp2[2].face == cardp2[3].face )
		  ||
		  (cardp2[1].face == cardp2[2].face &&
		  cardp2[2].face == cardp2[3].face &&
		  cardp2[3].face == cardp2[4].face ) ) {
		rankp2 = 8 ;
		printf("p2 : Four Of A Kind"); }

else if ( (cardp2[0].face == cardp2[1].face &&
		  cardp2[1].face == cardp2[2].face &&
		  cardp2[3].face == cardp2[4].face)
		  ||
		  (cardp2[0].face == cardp2[1].face &&
		  cardp2[2].face == cardp2[3].face &&
		  cardp2[3].face == cardp2[4].face)){
		rankp2 = 7 ;
		printf("p2 : Full House"); }
else if ( strcmp(cardp2[0].suit,cardp2[1].suit) == 0 &&
	 strcmp(cardp2[1].suit,cardp2[2].suit) == 0 &&
	 strcmp(cardp2[2].suit,cardp2[3].suit) == 0 &&
	 strcmp(cardp2[3].suit,cardp2[4].suit) == 0 ) {
		 rankp2 = 6 ;
	 printf("p2 : Flush "); }
else if (cardp2[1].face == cardp2[0].face + 1 &&
			cardp2[2].face == cardp2[1].face + 1 &&
			cardp2[3].face == cardp2[2].face + 1 &&
			cardp2[4].face == cardp2[3].face + 1 ){
				rankp2 = 5 ;
				printf("p2 : Straight" ); }
else if ( (cardp2[0].face == cardp2[1].face &&
		  cardp2[1].face == cardp2[2].face )
		  ||
		  (cardp2[2].face == cardp2[3].face &&
		  cardp2[3].face == cardp2[4].face )) {
			  rankp2 = 4 ;
			  printf("p2 : Three of A Kind"); }
else if ( (cardp2[0].face == cardp2[1].face &&
		  cardp2[2].face == cardp2[3].face ) ||
		  (cardp2[0].face == cardp2[1].face &&
		  cardp2[3].face == cardp2[4].face ) ||
		  (cardp2[1].face == cardp2[2].face &&
		  cardp2[3].face == cardp2[4].face ) ) {
			  rankp2 = 3;
			  printf("p2 : Two Pair"); }
else if (  (cardp2[0].face == cardp2[1].face ) ||
			(cardp2[1].face == cardp2[2].face ) ||
		(cardp2[2].face == cardp2[3].face ) ||
		(cardp2[3].face == cardp2[4].face )  ) {
			rankp2 = 2 ;
			printf("p2 : One Pair "); }
else {
	rankp2 = 1 ;
	printf("p2 : High Card");
}
		}

int main() {
srand(time(0));
account akun[100];
gotoxy(30,13);
printf("TO USE THIS PROGRAM, YOU NEED TO FULLSCREEN THIS WINDOW\n\n");
gotoxy(75,25);
system("pause");
system("cls");
kotak();
gotoxy(20,7);
welcome();
gotoxy(50,46);
system("pause");
system("cls");
instruction();
system("cls");

while(status1 = 1){
awal:
system("cls");
welcome3();
welcome2();
enter(3);

gotoxy(25,23);
printf("1. Sign in\n");
gotoxy(25,24);
printf("2. Sign up\n");
gotoxy(25,25);
printf("3. Forgot Password\n");
gotoxy(25,26);
printf("4. Exit\n");
gotoxy(25,28);
printf("Choose Menu : ");
var = scanf("%i",&i) ;
if (var == 1 ) {
if ( i == 1 ) {
system("cls");
            welcome3();
            welcome2();
            gotoxy(20,23);
            printf("Enter Your Username (4-12 Char) : ");
            scanf("%s",&username) ;
            lowercase();
            gotoxy(20,24);
            printf("Enter Your Password (8-20 Char) : ");
            scanf("%s",&password) ;
               for ( i = 0 ; i <= hitungarr ; i ++) {
                if (strcmp(username,akun[i].username2) == 0 )  {
                    urutanlog = i ;
                    } }
               if (strcmp(username,akun[urutanlog].username2) == 0 &&  strcmp(password,akun[urutanlog].password2) == 0)  {
                    status2 = 1 ;
                while(status2 == 1 ) {

                awalan:
                system("cls");
                welcome3();
                welcome2();
                enter(3);
                gotoxy(25,24);
                printf("Welcome %s , Your Chip is $%i",akun[urutanlog].username2,akun[urutanlog].chip);
                gotoxy(25,26);
                printf("1. 2 Players Table \n");
                gotoxy(25,27);
                printf("2. Earn Chip\n");
                gotoxy(25,28);
                printf("3. Poker Rules\n");
                gotoxy(25,29);
                printf("4. Log Out\n");
                gotoxy(26,31);
                printf("Choose Menu : ");
                var = scanf("%i",&i) ;
                if (var == 1){
                if ( i == 1 ) {

                int chipp2 = 100;
                int round = 1 ;
                system("cls");

                ulang:
                if (chipp2 == 0 || akun[urutanlog].chip == 0 ){
                    system("cls");
                    gotoxy(30,30);
                    printf("MATCH ENDED, SOMEONE LOSING HIS MONEY !!");
                     gotoxy(30,31);
                    printf("BACK TO MAIN MENU : ");
                    countdown(50,31,500);
                    goto awalan;
                }
                tebarankartu = 0 ;
                urutanp1 = 0 ;
                urutanp2 = 0 ;
                bet = 0 ;
                memset(cardp1,0,sizeof(cardp1));
                memset(cardp2,0,sizeof(cardp2));
                system("cls");
                acakkartu(40,35);
                acakkartu(60,35);
                acakkartup2();
                acakkartup2();

                gotoxy(55,1);
                printf("Player 2");
                gotoxy(55,2);
                printf("Chip : %i",chipp2);
                 gotoxy(80,36);
                printf("%s",akun[urutanlog].username2);
                gotoxy(80,37);
                printf("Chip : %i",akun[urutanlog].chip);
                gotoxy(0,0);
                printf("ROUND %i ",round);
                countdown(0,1,500);
                gotoxy(0,1);
                puts("EACH PLAYER BET $5");

                chipp2 = chipp2 - 5 ;
                akun[urutanlog].chip =  akun[urutanlog].chip -5 ;
                bet+=10;
                gotoxy(40,33);
                printf("Total Bet : $%i",bet);
                gotoxy(55,2);
                printf("Chip : %i ",chipp2);
                gotoxy(80,36);
                printf("%s",akun[urutanlog].username2);
                gotoxy(80,37);
                printf("Chip : %i ",akun[urutanlog].chip);
                gotoxy(80,38);
                printf("Select Action : ");
                gotoxy(80,39);
                printf("1.Fold");
                 gotoxy(80,40);
                printf("2.Check");
                 gotoxy(80,41);
                printf("3.All in");
                gotoxy(80,42);
                  printf("OtherNum. Quit The Game");
                gotoxy(80,43);
                var = scanf("%i",&i);
                if ( var == 1 ) {
                if ( i == 1 ) {
                gotoxy(0,3);
                printf("PLAYER 2 WIN $%i  ",bet);
                delay(1000);
                chipp2 = chipp2 + bet ;
                goto ulang;
                }
                else if (i == 2){
                acakkartuboard(35,15);
                 gotoxy(0,1);
                 printf("PLAYER 1 CHECK");
                gotoxy(0,2);
                printf("Waiting For Player 2 . . ");
                countdown(0,3,500);
                gotoxy(0,3);
                printf("PLAYER 2 CHECK");
                gotoxy(80,38);
                printf("Select Action : ");
                gotoxy(80,39);
                printf("1.Fold");
                gotoxy(80,40);
                printf("2.Check");
                gotoxy(80,41);
                printf("3.All in");
                gotoxy(80,42);
                printf("OtherNum. Quit The Game");
               gotoxy(80,43);
            printf("    ");
            gotoxy(80,43);
            var = scanf("%i",&i);
                if ( var == 1 ){

                if ( i == 1 ) {
                gotoxy(0,3);
                printf("PLAYER 2 WIN $%i  ",bet);
                delay(1000);
                chipp2 = chipp2 + bet ;
                goto ulang;
                }
                   else if ( i == 2 ) {
                 acakkartuboard(54,15);
                 gotoxy(0,1);
                 printf("PLAYER 1 CHECK        ");
                gotoxy(0,2);
                printf("Waiting For Player 2 . . ");
                gotoxy(0,3);
                    printf("               ");
                    countdown(0,3,500);
                gotoxy(0,3);
                printf("PLAYER 2 CHECK");
                gotoxy(80,38);
                printf("Select Action : ");
                gotoxy(80,39);
                printf("1.Fold");
                gotoxy(80,40);
                printf("2.Check");
                gotoxy(80,41);
                printf("3.All in");
                gotoxy(80,42);
                  printf("OtherNum. Quit The Game");
              gotoxy(80,43);
                                                                            printf("    ");
                                                                            gotoxy(80,43);
                                                                            var = scanf("%i",&i);
                                                                        if ( var == 1 ){
                                                                            if ( i == 1 ) {
                                                                            gotoxy(0,3);
                                                                            printf("PLAYER 2 WIN $%i  ",bet);
                                                                            delay(1000);
                                                                            chipp2 = chipp2 + bet ;
                                                                            goto ulang;
                                                                            }
                                                                            else if (i==2){
                                                                                acakkartuboard(73,15);
                                                                             gotoxy(0,1);
                                                                             printf("PLAYER 1 CHECK        ");
                                                                            gotoxy(0,2);
                                                                            printf("Waiting For Player 2 . . ");
                                                                            gotoxy(0,3);
                                                                                printf("               ");
                                                                                countdown(0,3,500);
                                                                            gotoxy(0,3);
                                                                            printf("PLAYER 2 CHECK");
                                                                            gotoxy(80,38);
                                                                            printf("Select Action : ");
                                                                            gotoxy(80,39);
                                                                            printf("1.Fold");
                                                                            gotoxy(80,40);
                                                                            printf("2.Show Card");
                                                                            gotoxy(80,41);
                                                                            printf("3. All In");
                                                                            gotoxy(80,42);
                                                                            printf("OtherNum. Quit The Game");
                                                                            gotoxy(80,43);
                                                                            printf("    ");
                                                                            gotoxy(80,43);
                                                                            var = scanf("%i",&i);
                                                                                                                                            if ( var == 1){
                                                                                                                                            if ( i == 1 ) {
                                                                                                                                            gotoxy(0,3);
                                                                                                                                            printf("PLAYER 2 WIN $%i  ",bet);
                                                                                                                                            delay(1000);
                                                                                                                                            chipp2 = chipp2 + bet ;
                                                                                                                                            goto ulang;
                                                                                                                                            }
                                                                                                                                            else if (i == 2){
                                                                                                                                                      gotoxy(0,40);
                                                                                                                                                 printf("LOG : \n");
                                                                                                                                        for (i=0 ; i < 5 ; i++){
                                                                                                                                            printf("%i%s ",cardp1[i].face,cardp1[i].suit);
                                                                                                                                             }
                                                                                                                                             enter(1);
                                                                                                                                              for (i=0 ; i < 5 ; i++){
                                                                                                                                           printf("%i%s ",cardp2[i].face,cardp2[i].suit);
                                                                                                                                             }
                                                                                                                                              enter(1);
                                                                                                                                             sort();
                                                                                                                                              for (i=0 ; i < 5 ; i++){
                                                                                                                                            printf("%i%s ",cardp1[i].face,cardp1[i].suit);
                                                                                                                                             }
                                                                                                                                              enter(1);
                                                                                                                                              for (i=0 ; i < 5 ; i++){
                                                                                                                                            printf("%i%s ",cardp2[i].face,cardp2[i].suit);
                                                                                                                                             }
                                                                                                                                                 enter(1);
                                                                                                                                                analyzep1();
                                                                                                                                                enter(1);
                                                                                                                                                analyzep2();
                                                                                                                                                enter(1);
                                                                                                                                                if ( rank > rankp2){
                                                                                                                                                    printf("Player 1 Win $%i",bet);
                                                                                                                                                    akun[urutanlog].chip =  akun[urutanlog].chip  + bet;
                                                                                                                                                    gotoxy(80,37);
                                                                                                                                                    printf("Chip : %i   ",akun[urutanlog].chip);

                                                                                                                                                     }
                                                                                                                                                else if ( rankp2 > rank){
                                                                                                                                                    printf("Player 2 Win $%i",bet);
                                                                                                                                                    chipp2 =  chipp2 + bet;

                                                                                                                                                    gotoxy(55,2);
                                                                                                                                                    printf("Chip : %i   ",chipp2);

                                                                                                                                                    }
                                                                                                                                                else {
                                                                                                                                                     printf("TIE !!!",bet);
                                                                                                                                                    chipp2 =  chipp2 + bet/2;
                                                                                                                                                    akun[urutanlog].chip =  akun[urutanlog].chip  + bet/2;

                                                                                                                                                    gotoxy(55,2);
                                                                                                                                                    printf("Chip : %i   ",chipp2);
                                                                                                                                                    gotoxy(80,37);
                                                                                                                                                    printf("Chip : %i   ",akun[urutanlog].chip);


                                                                                                                                                }
                                                                                                                                                gotoxy(0,7);
                                                                                                                                                system("pause");
                                                                                                                                                goto ulang;
                                                                                                                                                }
                                                                                                                                                else if (i==3){

                                                                                                                                                    gotoxy(0,0);
                                                                                                                                                printf("ROUND %i ",round);
                                                                                                                                                gotoxy(0,1);
                                                                                                                                                if (akun[urutanlog].chip >= chipp2){
                                                                                                                                                    allin = chipp2 ;
                                                                                                                                                }
                                                                                                                                                else {
                                                                                                                                                    allin = akun[urutanlog].chip;
                                                                                                                                                }
                                                                                                                                                printf("PLAYER 1 ALL IN !! $%i",allin);


                                                                                                                                                bet = bet + allin;
                                                                                                                                                  gotoxy(40,33);
                                                                                                                                            printf("Total Bet : $%i",bet);
                                                                                                                                            gotoxy(0,2);
                                                                                                                                                printf("Waiting For Player 2 . . ");
                                                                                                                                                gotoxy(0,3);
                                                                                                                                                printf("               ");
                                                                                                                                                countdown(0,3,500);
                                                                                                                                                akun[urutanlog].chip =   akun[urutanlog].chip - allin  ;
                                                                                                                                                gotoxy(0,3);
                                                                                                                                                printf("Total Bet : $%i  ",bet);
                                                                                                                                                gotoxy(55,2);
                                                                                                                                                printf("Chip : %i   ",chipp2);
                                                                                                                                                gotoxy(80,36);
                                                                                                                                                printf("%s",akun[urutanlog].username2);
                                                                                                                                                gotoxy(80,37);
                                                                                                                                                printf("Chip : %i   ",akun[urutanlog].chip);
                                                                                                                                                j = rand()%2;
                                                                                                                                                if ( j == 0 ){
                                                                                                                                                     gotoxy(0,4);
                                                                                                                                                     printf("PLAYER 2 FOLD .. PLAYER 1 WIN THE GAMES");
                                                                                                                                                     delay(1500);
                                                                                                                                                     akun[urutanlog].chip = akun[urutanlog].chip + bet ;
                                                                                                                                                     goto ulang; }
                                                                                                                                                else if (j == 1 ){

                                                                                                                                                    gotoxy(0,4);
                                                                                                                                                    printf("PLAYER 2 FOLLOW THE ALL IN !!!");
                                                                                                                                                    if (chipp2 >= allin ){
                                                                                                                                                    bet = bet + allin ;
                                                                                                                                                    chipp2 = chipp2 - allin ; }
                                                                                                                                                    else {
                                                                                                                                                    bet = bet + chipp2 ;
                                                                                                                                                    chipp2 = 0 ;
                                                                                                                                                    }
                                                                                                                                                    gotoxy(40,33);
                                                                                                                                                    printf("Total Bet : $%i",bet);
                                                                                                                                                    gotoxy(0,5);
                                                                                                                                                    printf("Total Bet : $%i",bet);
                                                                                                                                                    gotoxy(55,2);
                                                                                                                                                    printf("Chip : %i   ",chipp2);
                                                                                                                                                    gotoxy(80,36);
                                                                                                                                                    printf("%s",akun[urutanlog].username2);
                                                                                                                                                    gotoxy(80,37);
                                                                                                                                                    printf("Chip : %i   ",akun[urutanlog].chip);
                                                                                                                                                    allin = 0 ;
                                                                                                                                                    printf("TEBARAN KARTU : %i",tebarankartu);
                                                                                                                                                     gotoxy(0,40);
                                                                                                                                                     printf("LOG : \n");
                                                                                                                                            for (i=0 ; i < 5 ; i++){
                                                                                                                                                printf("%i%s ",cardp1[i].face,cardp1[i].suit);
                                                                                                                                                 }
                                                                                                                                                 enter(1);
                                                                                                                                                  for (i=0 ; i < 5 ; i++){
                                                                                                                                               printf("%i%s ",cardp2[i].face,cardp2[i].suit);
                                                                                                                                                 }
                                                                                                                                                  enter(1);
                                                                                                                                                 sort();
                                                                                                                                                  for (i=0 ; i < 5 ; i++){
                                                                                                                                                printf("%i%s ",cardp1[i].face,cardp1[i].suit);
                                                                                                                                                 }
                                                                                                                                                  enter(1);
                                                                                                                                                  for (i=0 ; i < 5 ; i++){
                                                                                                                                                printf("%i%s ",cardp2[i].face,cardp2[i].suit);
                                                                                                                                                 }
                                                                                                                                                 enter(1);
                                                                                                                                                analyzep1();
                                                                                                                                                enter(1);
                                                                                                                                                analyzep2();
                                                                                                                                                enter(1);
                                                                                                                                                if ( rank > rankp2){
                                                                                                                                                    printf("Player 1 Win $%i",bet);
                                                                                                                                                    akun[urutanlog].chip =  akun[urutanlog].chip  + bet;
                                                                                                                                                    gotoxy(80,37);
                                                                                                                                                    printf("Chip : %i   ",akun[urutanlog].chip);

                                                                                                                                                     }
                                                                                                                                                else if ( rankp2 > rank){
                                                                                                                                                    printf("Player 2 Win $%i",bet);
                                                                                                                                                    chipp2 =  chipp2 + bet;

                                                                                                                                                    gotoxy(55,2);
                                                                                                                                                    printf("Chip : %i   ",chipp2);

                                                                                                                                                    }
                                                                                                                                                else {
                                                                                                                                                     printf("TIE !!!",bet);
                                                                                                                                                    chipp2 =  chipp2 + bet/2;
                                                                                                                                                    akun[urutanlog].chip =  akun[urutanlog].chip  + bet/2;

                                                                                                                                                    gotoxy(55,2);
                                                                                                                                                    printf("Chip : %i   ",chipp2);
                                                                                                                                                    gotoxy(80,37);
                                                                                                                                                    printf("Chip : %i   ",akun[urutanlog].chip);


                                                                                                                                                }
                                                                                                                                                gotoxy(0,7);
                                                                                                                                                system("pause");
                                                                                                                                                goto ulang;
                                                                                                                                                }
                                                                                                                                                }
                                                                                                                                                }

                                                                                                                                                else {
                                                                                                                                                     system("cls");
                                                                                                                                                    gotoxy(30,30);
                                                                                                                                                    printf("FATAL ERROR !! INVALID INPUT DETECTED");
                                                                                                                                                    gotoxy(30,31);
                                                                                                                                                    printf("Terminating The Game in : ");
                                                                                                                                                    countdown(55,31,500);
                                                                                                                                                    exit("EXIT_FAILURE");
                                                                                                                                                }
                                                                            }
                                                                            else if(i==3){
                                                                            gotoxy(0,0);
                                                                                printf("ROUND %i ",round);
                                                                                gotoxy(0,1);
                                                                                if (akun[urutanlog].chip >= chipp2){
                                                                                    allin = chipp2 ;
                                                                                }
                                                                                else {
                                                                                    allin = akun[urutanlog].chip;
                                                                                }
                                                                                printf("PLAYER 1 ALL IN !! $%i",allin);


                                                                                bet = bet + allin;
                                                                                  gotoxy(40,33);
                                                                            printf("Total Bet : $%i",bet);
                                                                            gotoxy(0,2);
                                                                                printf("Waiting For Player 2 . . ");
                                                                                countdown(0,3,500);
                                                                                akun[urutanlog].chip =   akun[urutanlog].chip - allin  ;
                                                                                gotoxy(0,3);
                                                                                printf("Total Bet : $%i  ",bet);
                                                                                gotoxy(55,2);
                                                                                printf("Chip : %i   ",chipp2);
                                                                                gotoxy(80,36);
                                                                                printf("%s",akun[urutanlog].username2);
                                                                                gotoxy(80,37);
                                                                                printf("Chip : %i   ",akun[urutanlog].chip);
                                                                                j = rand()%2;
                                                                                if ( j == 0 ){
                                                                                     gotoxy(0,4);
                                                                                     printf("PLAYER 2 FOLD .. PLAYER 1 WIN THE GAMES");
                                                                                     delay(1500);
                                                                                     akun[urutanlog].chip = akun[urutanlog].chip + bet ;
                                                                                     goto ulang; }
                                                                                else if (j == 1 ){

                                                                                    gotoxy(0,4);
                                                                                    printf("PLAYER 2 FOLLOW THE ALL IN !!!");
                                                                                    if (chipp2 >= allin ){
                                                                                    bet = bet + allin ;
                                                                                    chipp2 = chipp2 - allin ; }
                                                                                    else {
                                                                                    bet = bet + chipp2 ;
                                                                                    chipp2 = 0 ;
                                                                                    }
                                                                                    gotoxy(40,33);
                                                                                    printf("Total Bet : $%i",bet);
                                                                                    gotoxy(0,5);
                                                                                    printf("Total Bet : $%i",bet);
                                                                                    gotoxy(55,2);
                                                                                    printf("Chip : %i   ",chipp2);
                                                                                    gotoxy(80,36);
                                                                                    printf("%s",akun[urutanlog].username2);
                                                                                    gotoxy(80,37);
                                                                                    printf("Chip : %i   ",akun[urutanlog].chip);
                                                                                    allin = 0 ;
                                                                                    acakkartuboard(73,15);
                                                                                    printf("TEBARAN KARTU : %i",tebarankartu);
                                                                                     gotoxy(0,40);
                                                                                     printf("LOG : \n");
                                                                            for (i=0 ; i < 5 ; i++){
                                                                                printf("%i%s ",cardp1[i].face,cardp1[i].suit);
                                                                                 }
                                                                                 enter(1);
                                                                                  for (i=0 ; i < 5 ; i++){
                                                                               printf("%i%s ",cardp2[i].face,cardp2[i].suit);
                                                                                 }
                                                                                  enter(1);
                                                                                 sort();
                                                                                  for (i=0 ; i < 5 ; i++){
                                                                                printf("%i%s ",cardp1[i].face,cardp1[i].suit);
                                                                                 }
                                                                                  enter(1);
                                                                                  for (i=0 ; i < 5 ; i++){
                                                                                printf("%i%s ",cardp2[i].face,cardp2[i].suit);
                                                                                 }
                                                                                 enter(1);
                                                                                analyzep1();
                                                                                enter(1);
                                                                                analyzep2();
                                                                                enter(1);
                                                                                if ( rank > rankp2){
                                                                                    printf("Player 1 Win $%i",bet);
                                                                                    akun[urutanlog].chip =  akun[urutanlog].chip  + bet;
                                                                                    gotoxy(80,37);
                                                                                    printf("Chip : %i   ",akun[urutanlog].chip);

                                                                                     }
                                                                                else if ( rankp2 > rank){
                                                                                    printf("Player 2 Win $%i",bet);
                                                                                    chipp2 =  chipp2 + bet;

                                                                                    gotoxy(55,2);
                                                                                    printf("Chip : %i   ",chipp2);

                                                                                    }
                                                                                else {
                                                                                     printf("TIE !!!",bet);
                                                                                    chipp2 =  chipp2 + bet/2;
                                                                                    akun[urutanlog].chip =  akun[urutanlog].chip  + bet/2;

                                                                                    gotoxy(55,2);
                                                                                    printf("Chip : %i   ",chipp2);
                                                                                    gotoxy(80,37);
                                                                                    printf("Chip : %i   ",akun[urutanlog].chip);


                                                                                }
                                                                                gotoxy(0,7);
                                                                                system("pause");
                                                                                goto ulang;
                                                                                }
                                                                            }
                                                                            }
                                                                        else {
                                                                        system("cls");
                                                                        gotoxy(30,30);
                                                                        printf("FATAL ERROR !! INVALID INPUT DETECTED");
                                                                        gotoxy(30,31);
                                                                        printf("Terminating The Game in : ");
                                                                        countdown(55,31,500);
                                                                        exit("EXIT_FAILURE");
                                                                        }

                }
                else if (i == 3 ){

                                                                            gotoxy(0,0);
                                                                                printf("ROUND %i ",round);
                                                                                gotoxy(0,1);
                                                                                if (akun[urutanlog].chip >= chipp2){
                                                                                    allin = chipp2 ;
                                                                                }
                                                                                else {
                                                                                    allin = akun[urutanlog].chip;
                                                                                }
                                                                                printf("PLAYER 1 ALL IN !! $%i",allin);


                                                                                bet = bet + allin;
                                                                                  gotoxy(40,33);
                                                                            printf("Total Bet : $%i",bet);
                                                                            gotoxy(0,2);
                                                                                printf("Waiting For Player 2 . . ");
                                                                                countdown(0,3,500);
                                                                                akun[urutanlog].chip =   akun[urutanlog].chip - allin  ;
                                                                                gotoxy(0,3);
                                                                                printf("Total Bet : $%i  ",bet);
                                                                                gotoxy(55,2);
                                                                                printf("Chip : %i   ",chipp2);
                                                                                gotoxy(80,36);
                                                                                printf("%s",akun[urutanlog].username2);
                                                                                gotoxy(80,37);
                                                                                printf("Chip : %i   ",akun[urutanlog].chip);
                                                                                j = rand()%2;
                                                                                if ( j == 0 ){
                                                                                     gotoxy(0,4);
                                                                                     printf("PLAYER 2 FOLD .. PLAYER 1 WIN THE GAMES");
                                                                                     delay(1500);
                                                                                     akun[urutanlog].chip = akun[urutanlog].chip + bet ;
                                                                                     goto ulang; }
                                                                                else if (j == 1 ){

                                                                                    gotoxy(0,4);
                                                                                    printf("PLAYER 2 FOLLOW THE ALL IN !!!");
                                                                                    if (chipp2 >= allin ){
                                                                                    bet = bet + allin ;
                                                                                    chipp2 = chipp2 - allin ; }
                                                                                    else {
                                                                                    bet = bet + chipp2 ;
                                                                                    chipp2 = 0 ;
                                                                                    }
                                                                                    gotoxy(40,33);
                                                                                    printf("Total Bet : $%i",bet);
                                                                                    gotoxy(0,5);
                                                                                    printf("Total Bet : $%i",bet);
                                                                                    gotoxy(55,2);
                                                                                    printf("Chip : %i   ",chipp2);
                                                                                    gotoxy(80,36);
                                                                                    printf("%s",akun[urutanlog].username2);
                                                                                    gotoxy(80,37);
                                                                                    printf("Chip : %i   ",akun[urutanlog].chip);
                                                                                    allin = 0 ;
                                                                                    acakkartuboard(54,15);
                                                                                    acakkartuboard(73,15);
                                                                                    printf("TEBARAN KARTU : %i",tebarankartu);
                                                                                     gotoxy(0,40);
                                                                                     printf("LOG : \n");
                                                                            for (i=0 ; i < 5 ; i++){
                                                                                printf("%i%s ",cardp1[i].face,cardp1[i].suit);
                                                                                 }
                                                                                 enter(1);
                                                                                  for (i=0 ; i < 5 ; i++){
                                                                               printf("%i%s ",cardp2[i].face,cardp2[i].suit);
                                                                                 }
                                                                                  enter(1);
                                                                                 sort();
                                                                                  for (i=0 ; i < 5 ; i++){
                                                                                printf("%i%s ",cardp1[i].face,cardp1[i].suit);
                                                                                 }
                                                                                  enter(1);
                                                                                  for (i=0 ; i < 5 ; i++){
                                                                                printf("%i%s ",cardp2[i].face,cardp2[i].suit);
                                                                                 }
                                                                                 enter(1);
                                                                                analyzep1();
                                                                                enter(1);
                                                                                analyzep2();
                                                                                enter(1);
                                                                                if ( rank > rankp2){
                                                                                    printf("Player 1 Win $%i",bet);
                                                                                    akun[urutanlog].chip =  akun[urutanlog].chip  + bet;
                                                                                    gotoxy(80,37);
                                                                                    printf("Chip : %i   ",akun[urutanlog].chip);

                                                                                     }
                                                                                else if ( rankp2 > rank){
                                                                                    printf("Player 2 Win $%i",bet);
                                                                                    chipp2 =  chipp2 + bet;

                                                                                    gotoxy(55,2);
                                                                                    printf("Chip : %i   ",chipp2);

                                                                                    }
                                                                                else {
                                                                                     printf("TIE !!!",bet);
                                                                                    chipp2 =  chipp2 + bet/2;
                                                                                    akun[urutanlog].chip =  akun[urutanlog].chip  + bet/2;

                                                                                    gotoxy(55,2);
                                                                                    printf("Chip : %i   ",chipp2);
                                                                                    gotoxy(80,37);
                                                                                    printf("Chip : %i   ",akun[urutanlog].chip);


                                                                                }
                                                                                gotoxy(0,7);
                                                                                system("pause");
                                                                                goto ulang;
                                                                                }
                }
                }
                else {
                    system("cls");
                    gotoxy(30,30);
                    printf("FATAL ERROR !! INVALID INPUT DETECTED");
                    gotoxy(30,31);
                    printf("Terminating The Game in : ");
                    countdown(55,31,500);
                    exit("EXIT_FAILURE");
                }



                }

                else if (i == 3){
                    gotoxy(0,0);
                    printf("ROUND %i ",round);
                    gotoxy(0,1);
                    if (akun[urutanlog].chip >= chipp2){
                        allin = chipp2 ;
                    }
                    else {
                        allin = akun[urutanlog].chip;
                    }
                    printf("PLAYER 1 ALL IN !! $%i",allin);


                    bet = bet + allin;
                      gotoxy(40,33);
                printf("Total Bet : $%i",bet);
                gotoxy(0,2);
                    printf("Waiting For Player 2 . . ");
                    countdown(0,3,500);
                    akun[urutanlog].chip =   akun[urutanlog].chip - allin  ;
                    gotoxy(0,3);
                    printf("Total Bet : $%i  ",bet);
                    gotoxy(55,2);
                    printf("Chip : %i   ",chipp2);
                    gotoxy(80,36);
                    printf("%s",akun[urutanlog].username2);
                    gotoxy(80,37);
                    printf("Chip : %i   ",akun[urutanlog].chip);
                    j = rand()%2;
                    if ( j == 0 ){
                         gotoxy(0,4);
                         printf("PLAYER 2 FOLD .. PLAYER 1 WIN THE GAMES");
                         delay(1500);
                         akun[urutanlog].chip = akun[urutanlog].chip + bet ;
                         goto ulang; }
                    else if (j == 1 ){

                        gotoxy(0,4);
                        printf("PLAYER 2 FOLLOW THE ALL IN !!!");
                        if (chipp2 >= allin ){
                        bet = bet + allin ;
                        chipp2 = chipp2 - allin ; }
                        else {
                        bet = bet + chipp2 ;
                        chipp2 = 0 ;
                        }
                        gotoxy(40,33);
                        printf("Total Bet : $%i",bet);
                        gotoxy(0,5);
                        printf("Total Bet : $%i",bet);
                        gotoxy(55,2);
                        printf("Chip : %i   ",chipp2);
                        gotoxy(80,36);
                        printf("%s",akun[urutanlog].username2);
                        gotoxy(80,37);
                        printf("Chip : %i   ",akun[urutanlog].chip);
                        allin = 0 ;
                        acakkartuboard(35,15);
                        acakkartuboard(54,15);
                        acakkartuboard(73,15);
                        printf("TEBARAN KARTU : %i",tebarankartu);
                         gotoxy(0,40);
                         printf("LOG : \n");
                for (i=0 ; i < 5 ; i++){
                    printf("%i%s ",cardp1[i].face,cardp1[i].suit);
                     }
                     enter(1);
                      for (i=0 ; i < 5 ; i++){
                   printf("%i%s ",cardp2[i].face,cardp2[i].suit);
                     }
                      enter(1);
                     sort();
                      for (i=0 ; i < 5 ; i++){
                    printf("%i%s ",cardp1[i].face,cardp1[i].suit);
                     }
                      enter(1);
                      for (i=0 ; i < 5 ; i++){
                    printf("%i%s ",cardp2[i].face,cardp2[i].suit);
                     }
                     enter(1);
                    analyzep1();
                    enter(1);
                    analyzep2();
                    enter(1);
                    if ( rank > rankp2){
                        printf("Player 1 Win $%i",bet);
                        akun[urutanlog].chip =  akun[urutanlog].chip  + bet;
                        gotoxy(80,37);
                        printf("Chip : %i   ",akun[urutanlog].chip);

                         }
                    else if ( rankp2 > rank){
                        printf("Player 2 Win $%i",bet);
                        chipp2 =  chipp2 + bet;

                        gotoxy(55,2);
                        printf("Chip : %i   ",chipp2);

                        }
                    else {
                         printf("TIE !!!",bet);
                        chipp2 =  chipp2 + bet/2;
                        akun[urutanlog].chip =  akun[urutanlog].chip  + bet/2;

                        gotoxy(55,2);
                        printf("Chip : %i   ",chipp2);
                        gotoxy(80,37);
                        printf("Chip : %i   ",akun[urutanlog].chip);


                    }
                    gotoxy(0,7);
                    system("pause");
                    goto ulang;
                    }


                } }
                else {
                    system("cls");
                    gotoxy(30,30);
                    printf("FATAL ERROR !! INVALID INPUT DETECTED");
                    gotoxy(30,31);
                    printf("Terminating The Game in : ");
                    countdown(55,31,500);
                    exit("EXIT_FAILURE");

                }


                }

                else if ( i == 2 ) {
                system("cls");
                int l ;
                i = rand() % 1000;
                j = rand() % 1000;
                k = i + j ;
                gotoxy(30,28);
                printf("SOLVE EQUATION BELOW FOR CHIP REWARD : ");
                gotoxy(30,29);
                printf("%i + %i = ",i,j);
                scanf("%i",&l);
                  if (var == 1 ){
                if( l == k ){
                    i = rand()%30;
                gotoxy(30,30);
                    printf("JAWABAN BENAR !!! SELAMAT CHIP ANDA BERTAMBAH %i",i);
                    akun[urutanlog].chip += i; }

                else {
                        gotoxy(30,30);
                    printf("JAWABAN SALAH !!! JAWABAN SEHARUSNYA ADALAH =  %i",k);
                }
                }
                else {
                     system("cls");
                    gotoxy(30,30);
                    printf("FATAL ERROR !! INVALID INPUT DETECTED");
                    gotoxy(30,31);
                    printf("Terminating The Game in : ");
                    countdown(55,31,500);
                    exit("EXIT_FAILURE");
                }
                gotoxy(30,31);

                }
                else if ( i == 3 ) {

                 instruction2();
                }
                else if ( i == 4 ) {
                status2 = 0 ;
                goto awal;

                }
                else {
                    gotoxy(26,34);
                    printf("Menu Invalid !");

                }
                system("pause");

                    gotoxy(20,27);
                }
                      else {
                   system("cls");
                    gotoxy(30,30);
                    printf("FATAL ERROR !! INVALID INPUT DETECTED");
                    gotoxy(30,31);
                    printf("Terminating The Game in : ");
                    countdown(55,31,500);
                    exit("EXIT_FAILURE");
                }
                }


               }

                else {
                     gotoxy(20,26);
                    printf("LOGIN GAGAL , BACK TO MAIN MENU !!");
                    gotoxy(20,27);
                }
                 system("pause");
                system("cls");
}
        else if ( i == 2) {
            system("cls");
            welcome3();
            welcome2();
            gotoxy(20,23);
            printf("Enter Your Username (4-12 Char) : ");
            scanf("%s",&username) ;
            gotoxy(20,24);
            printf("Enter Your Password (8-20 Char) : ");
            scanf("%s",&password) ;
            gotoxy(20,25);
            printf("Re-Enter Your Password : ");
            scanf("%s",&repassword) ;
            gotoxy(20,26);
            printf("Enter Your Security Pin ( 6 Digit ) : ");
            var = scanf("%i",&pin) ;

            if ( var != 1){
                    system("cls");
                    gotoxy(30,30);
                    printf("FATAL ERROR !! INVALID INPUT DETECTED");
                    gotoxy(30,31);
                    printf("Terminating The Game in : ");
                    countdown(55,31,500);
                    exit("EXIT_FAILURE");
            }

            for ( i = 0 ; i < hitungarr ; i ++) {
                if (strcmp(username,akun[i].username2) == 0 )  {
                    countusername = 1 ;
                    }
            }
            if(countusername == 1 || strlen(username) > 12 || strlen(username) < 4 || strlen(password) > 20 || strlen(password) < 8 ||  strcmp(password,repassword) != 0 || pin < 100000 || pin > 999999 ){
                if ( countusername == 1  ) {
                    printf("\n                    -USERNAME TELAH TERDAFTAR\n");
                }if ( strlen(username) < 4 || strlen(username) > 12 ) {
                    printf("\n                    -USERNAME HARUS 4-12 CHARACTERS\n");
                }if (strlen(password) < 8 || strlen(password) > 20 ) {
                    printf("                    -PASSWORD 8-20 CHARACTERS\n") ;
                }if (strcmp(password,repassword) != 0) {
                    printf("                    -PASSWORD DAN RE-PASSWORD HARUS SAMA !! \n") ;
                }if(pin < 100000 || pin > 999999) {
                    printf("                    -PIN HARUS 6 DIGIT ANGKA\n\n");
                }printf("                    ");
                system("pause");
            }else {
               lowercase();
                strcpy(akun[hitungarr].username2,username) ;
                strcpy(akun[hitungarr].password2,password) ;
                akun[hitungarr].pin2 = pin ;
                akun[hitungarr].chip = 100 ;

                hitungarr = hitungarr + 1 ;
                invoice();
            }
         countusername = 0 ;

}
        else if(i == 3){
             system("cls");
            welcome3();
            welcome2();
            gotoxy(20,23);
            printf("Enter Your Username (4-12 Char) : ");
            scanf("%s",&username) ;
            lowercase();
            gotoxy(20,24);
            printf("Enter Your 6 DIGIT PIN  : ");
            var = scanf("%d",&pin) ;
            for ( i = 0 ; i < hitungarr ; i ++) {
                if (strcmp(username,akun[i].username2) == 0 )  {
                    countusername = 1 ;
                    }
                    }

                     if (var !=1 ) {
                   system("cls");
                    gotoxy(30,30);
                    printf("FATAL ERROR !! INVALID INPUT DETECTED");
                    gotoxy(30,31);
                    printf("Terminating The Game in : ");
                    countdown(55,31,500);
                    exit("EXIT_FAILURE");
                    }
            if ( countusername == 1 ) {
                for ( i = 0 ; i <= hitungarr ; i ++) {
                    if (strcmp(username,akun[i].username2) == 0 )  {
                    urutanlog = i ;
                    countusername = 0 ;
                                                            }
                                                    }

                    if (akun[urutanlog].pin2 == pin ) {
                    loading(20,27,20);
                    gotoxy(20,26);
                    printf("YOUR PASSWORD IS : %s\n" , akun[urutanlog].password2);


                        }
                    else {
                        gotoxy(20,26);
                        printf("PIN IS WRONG!!");
                         gotoxy(20,27);

                    }
                        }
                         else {
                     gotoxy(20,26);

                printf("USERNAME NOT FOUND !!");\


             }
              gotoxy(20,27);
					 system("pause");

             }
             else if( i == 4 ) {
                exit("EXIT_SUCCESS");
             }
             else {
                  gotoxy(25,28);
                printf("INPUT INVALID ! " );
             gotoxy(25,29);
         system("pause");
             }

}

             else {
                  system("cls");
                    gotoxy(30,30);
                    printf("FATAL ERROR !! INVALID INPUT DETECTED");
                    gotoxy(30,31);
                    printf("Terminating The Game in : ");
                    countdown(55,31,500);
                    exit("EXIT_FAILURE");
             }
}
}






