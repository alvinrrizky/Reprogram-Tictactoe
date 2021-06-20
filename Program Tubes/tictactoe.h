#ifndef tictactoe_H
#define tictactoe_H
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#define panjang 6000

#define BLACK           0
#define DARK_BLUE       1
#define GREEN           2
#define TURQUOISE       3
#define DARK_RED        4
#define PURPLE          5
#define FOREST_GREEN    6
#define LIGHT_GRAY      7
#define GRAY            8
#define BLUE            9
#define LIGHT_GREEN    10
#define LIGHT_BLUE     11
#define RED            12
#define PINK           13
#define YELLOW         14
#define WHITE          15
#define STDALERT      140
#define STDHEADER     143
#define STDBACKGROUND 159

// Modul untuk menampilkan pilihan menu utama
void menu();
// Modul untuk menampilkan instruksi permainan yang diambil dari file
void instructions();
// Modul untuk menampilkan pembuat program tersebut yang diambil dari file
void aboutus();
// modul untuk menampilkan tampilan awal membuka programnya
void welcome_screen();
// modul untuk menampilkan tampilan loading
void loading();
// modul untuk mengatur kecepatan ketika melakukan loading  
void kecepatan(float seconds);
// Modul untuk menampilkan tampilan judul program
void judul();
// modul untuk menampilkan gambar X dan O
void xo();
// modul untuk mengatur posisi huruf
void gotoxy(int x, int y);
// modul untuk mengubah warna teks
void warnateks(int warna);
// modul untuk menjalankan permainan
void permainan();

#endif


