#include "tictactoe.h"

void menu(){
	int pilih_menu, i = 28;
	judul();
	warnateks(WHITE);
	gotoxy(i,18); printf(" �����������������������ͻ\n");
   	gotoxy(i,19);printf(" �      MAIN MENU        �\n");
   	gotoxy(i,20);printf(" �                       �\n");
   	gotoxy(i,21);printf(" �   [1] PLAY NOW !      �\n");
   	gotoxy(i,22);printf(" �   [2] INSTRUCTIONS    �\n");
   	gotoxy(i,23);printf(" �   [3] THE CREATOR     �\n");
   	gotoxy(i,24);printf(" �   [0] Exit            �\n");
   	gotoxy(i,25);printf(" �                       �\n");
   	gotoxy(i,26);printf(" �����������������������ͼ\n");
	gotoxy(i,28);printf("    Choose :            \n");
   	gotoxy(41,28);scanf("%d",&pilih_menu);
   	switch(pilih_menu){
			case 1:
				system("CLS");
//				permainan();
			break;
			
			case 2:
				system("CLS");
				instructions();
			break;

			case 3:
				system("CLS");
				aboutus();
			break;

			case 0:
				exit(1);
			break;

			default:
				menu();
			break;
	 }
}

void gotoxy(int x, int y){ 
	HANDLE hConsoleOutput;  
	COORD dwCursorPosition;  
	dwCursorPosition.X = x;  
	dwCursorPosition.Y = y;  
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);  
	SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);   
}

void warnateks(int warna){ 
	HANDLE hConsole; 
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, warna);
}

void judul(){ 
	warnateks(LIGHT_BLUE);
	gotoxy(8,1); printf("  ����������  ��   �����             ����������   ����    ����� \n");
	printf("              ��      ��  ��                     ��      ��  ��  ��     \n");
	printf("              ��      ��  ��                     ��      ��  ��  ��     \n");
	printf("              ��      ��  ��                     ��      ������  ��     \n");
	printf("              ��      ��  ��                     ��      ��  ��  ��     \n");
	printf("              ��      ��   �����                 ��      ��  ��   ����� \n \n\n\n");
	
	printf("      		           ����������  �����   ����� \n");
	printf("	 	               ��     ��   ��  �     \n");
	printf("		               ��     ��   ��  ����� \n");
	printf("		               ��     ��   ��  � \n");
	printf("                               ��     ��   ��  �     \n");
	printf("		               ��      �����   ����� \n");
	
	warnateks(LIGHT_GREEN);
	gotoxy(9,18); printf("��       �� \n");
	gotoxy(9,19); printf("  ��   �� \n");
	gotoxy(9,20); printf("    ��� \n");
	gotoxy(9,21); printf("    ��� \n");
	gotoxy(9,22); printf("  ��   �� \n");
	gotoxy(9,23); printf("��       �� \n");	
	warnateks(YELLOW);
	gotoxy(61,18); printf("    ����  \n");
	gotoxy(61,19); printf("  ��    �� \n");
	gotoxy(61,20); printf("  ��    �� \n");
	gotoxy(61,21); printf("  ��    �� \n");
	gotoxy(61,22); printf("  ��    �� \n");
	gotoxy(61,23); printf("    ���� \n");	
}

void xo(){
	warnateks(LIGHT_GREEN);
	gotoxy(9,8); printf("��       �� \n");
	gotoxy(9,9); printf("  ��   �� \n");
	gotoxy(9,10); printf("    ��� \n");
	gotoxy(9,11); printf("    ��� \n");
	gotoxy(9,12); printf("  ��   �� \n");
	gotoxy(9,13); printf("��       �� \n");	
	gotoxy(9,15);printf(" COMPUTER \n");
	warnateks(YELLOW);
	gotoxy(61,8); printf("    ����  \n");
	gotoxy(61,9); printf("  ��    �� \n");
	gotoxy(61,10); printf("  ��    �� \n");
	gotoxy(61,11); printf("  ��    �� \n");
	gotoxy(61,12); printf("  ��    �� \n");
	gotoxy(61,13); printf("    ���� \n");
	gotoxy(61,15);printf("    USER   \n");	
}

void welcome_screen(){
	gotoxy(17,28); printf(" Created By : Alvin Andrian R, Muhammad Rafid \n");
	judul();
	loading();
}

void loading(){ 
	int x = 28, y = 13, n;
	warnateks(WHITE);
	gotoxy(x,20); printf("       Please Wait");
	gotoxy(x,21);  printf("������������������������ͻ");
	gotoxy(x,22);printf("�                        �");
	gotoxy(x,23);printf("������������������������ͼ");
	for(n=29;n<=50;n++){
		gotoxy(n,22);printf("�");
		kecepatan(0.1);
	};
}

void kecepatan(float seconds){
	clock_t endwait;
	endwait=clock()+seconds*CLOCKS_PER_SEC;
	while(clock()<endwait){};
}

void aboutus(){
	FILE *creator;
	char creat[panjang];
	
	gotoxy(36,1); printf("ABOUT US");
	creator = fopen("aboutus.txt", "rt");
	while((fgets(creat, panjang, creator))!= NULL){
		printf("%s\r", creat);
	}
	
	fclose(creator);

	
	gotoxy(22,14); printf("   Press Any Key To Return.....");getch();
	system("CLS");
	menu();
}

void instructions(){
	FILE *instruksi;
	char instruk[panjang];
	
	gotoxy(34,1); printf("INSTRUCTIONS");
	instruksi = fopen("petunjuk.txt", "rt");
	while((fgets(instruk, panjang, instruksi))!= NULL){
		printf("%s\r", instruk);
	}
	
	fclose(instruksi);

	
	gotoxy(22,14); printf("   Press Any Key To Return.....");getch();
	system("CLS");
	menu();
}
