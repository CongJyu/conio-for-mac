// Nom du fichier : myconio_mac.h
// Auteur : puzzog.isat@gmail.com
// Objectif : remédier à l'absence de certaines fonctions conio sous mac 

#ifndef MYCONIO_MAC_H_INCLUDED
#define MYCONIO_MAC_H_INCLUDED

#include "myconio_mac.cpp"

void mode_raw(int);
void mode_raw(int);
void clreol(void);
void gotoxy(int, int);
void clrscr(void);
void _fflush(void);
void Sleep(int);
void Blod(int);
void Underline(int);
char ReadKey(void);
int KeyPressed(void);
void GetPss(char *, char *);
int getch();
int getch(void);
int wherex(void);
int wherey(void);
int kbhit(void);
// void clr(void);
void textcolor(int);
void textbackground(int);
void line(int, char, char);
void MYclrwin(int, int, int, int);

#endif
