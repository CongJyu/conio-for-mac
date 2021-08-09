// Nom du fichier : myconio.h
// Auteur : prof.geii37@laposte.net
// Version : Novembre 2004
// Objectif : remédier à l'absence de certaines fonctions conio sous DevC++

/* Remarques :
    - Dev-C++ possède déjà une bibliothèque conio dans laquelle les fonctions
      « getch », « getche », « kbhit », « putch » et « ungetch » sont codées.
    - « textmode n'a pas été réécrite car les modes d'affichage prévus sous DOS 
      n'ont pas de sens dans une fenêtre console Windows.
    - « window » n'a pas pu être écrite... seule une fonction « MYclrwin » a été
      codée pour remplacer l'appel de « window » suivi d'un « clrscr ». 
      Toutefois la zone d'écriture à l'écran n'est pas limitée.
    - « MYwindow » redimensionne la fenêtre de la console. 
      A noter : le comportement de cette fonction n'a aucun rapport avec celui 
      de « window » de conio.
*/    

#ifndef _MYCONIO_H_
#define _MYCONIO_H_

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

#include <stdarg.h>
#include <windef.h>
#include <winbase.h>
#include <wincon.h>

#ifdef __cplusplus
extern "C" {
#endif

struct text_info {
    unsigned char winleft;
    unsigned char wintop;
    unsigned char winright;
    unsigned char winbottom;
    unsigned char attribute;
    unsigned char normattr;
    unsigned char currmode;
    unsigned char screenheight;
    unsigned char screenwidth;
    unsigned char curx;
    unsigned char cury;
};

enum COLORS { BLACK, BLUE, GREEN, CYAN, RED, MAGENTA, BROWN, LIGHTGRAY,
              DARKGRAY, LIGHTBLUE, LIGHTGREEN, LIGHTCYAN, LIGHTRED, 
              LIGHTMAGENTA, YELLOW, WHITE } ;

#define _NOCURSOR      0
#define _SOLIDCURSOR   1
#define _NORMALCURSOR  2
#define C40 1

void _setcursortype(int type);
char *cgets(char *str);
void clreol();
void clrscr();
void delline();

#define cprintf printf
#define cscanf scanf
/* Les fonctions « cprintf » et « cscanf » n'ont pas été réécrites, ceci est 
   peut-être une erreur... 
   En effet, « scanf » lit les données à partir de « stdin » et les fonctions 
   d'entrée de la console lisent les données à partir de « STD_INPUT_HANDLE ». 
   Or il semblerait que « fflush(stdin) ; » n'ait pas le même effet que 
   « FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE)) ; »... 
   A suivre... */

int cputs(const char *str) ;

int Gettext(int left, int top, int right, int bottom, void *destin) ;
#define gettext Gettext
/* Cette astuce a dû être utilisée car la ligne
   « int gettext(int left, int top, int right, int bottom, void *destin) ; »
   produit un message d'erreur (sous Dev-C++) ! */

void gettextinfo(struct text_info *_r);

int MYgetch(void) ;
int MYgetche(void) ;
/*  « getch », « getche » sont déjà définies dans <conio.h> (mingw). Cependant,
    au même titre que « getchar » (stdio) ne consomme pas le caractère <CR>,
    elles ne consomment pas le caractère saisi par l'utilisateur (c'est à dire :
    elles n'enlèvent pas le caractère du buffer d'entrée). « MYgetch », 
    « MYgetche » vident le buffer. Attention, « MYgetch » et « MYgetche » 
    n'enlèvent pas un caractère, mais tous les caractères disponibles. Grâce
    aux directives « #define » inclus dans MYconio.cpp, ce sont les fonctions 
    « MYgetch » et « MYgetche » qui seront appelées si dans un source on fait
    appel à « getch » ou « getche ». */
    
void gotoxy(int x, int y);

void highvideo();
void insline();
// kbhit : OK déjà défini dans <conio.h> (mingw)
void lowvideo();
int movetext(int left, int top, int right, int bottom, int destleft, int desttop);
void normvideo();
// putch : OK déjà défini dans <conio.h> (mingw)
int puttext(int left, int top, int right, int bottom, void *source);

void textattr(int _attr);
void textbackground(int _color);
void textcolor(int _color);         
/* BLINK (clignotement) ne fonctionne pas ! Par contre, il est possible 
   d'utiliser les oucleurs LIGHT pour le fond d'écran, ce qui n'est pas le cas
   pour une application DOS.*/
   
/* « void textmode(int _mode); » n'a pas été réécrite, car  les modes 
   d'affichage DOS n'ont aucun sens dans une application console Windows. */
// ungetch : OK déjà défini dans <conio.h> (mingw)
int wherex();
int wherey();

void MYclrwin(int left, int top, int right, int bottom); // efface une zone
/* La fonction « window » de conio est fréquemment utilisée (suivi de 
   « clrscr ») pour effacer une zone de l'écran et modifier sa couleur en 
   fonction des attribus mis à jour par « textcolor » ou « textbackground ».
   « MYclrwin » permet cela, mais elle n'interdit pas d'écrire en dehors 
   de cette zone.*/
 
void MYwindow(int left, int top, int right, int bottom); 
/* « MYwindow » permet de redimensionner la fenêtre de la console. Cependant, 
   ce comportement, n'est pas celui de la fonction « window » de conio */

// void window(int left, int top, int right, int bottom); 

#ifdef __cplusplus
}
#endif

#include <myconio.cpp>
#endif  //_MYCONIO_H_
