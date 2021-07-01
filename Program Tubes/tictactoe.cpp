#include "tictactoe.h"

void menu(){
	int pilih_menu, i = 28;
	judul();
	warnateks(WHITE);
	gotoxy(i,18); printf(" ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»\n");
   	gotoxy(i,19);printf(" º      MAIN MENU        º\n");
   	gotoxy(i,20);printf(" º                       º\n");
   	gotoxy(i,21);printf(" º   [1] PLAY NOW !      º\n");
   	gotoxy(i,22);printf(" º   [2] INSTRUCTIONS    º\n");
   	gotoxy(i,23);printf(" º   [3] THE CREATOR     º\n");
   	gotoxy(i,24);printf(" º   [0] Exit            º\n");
   	gotoxy(i,25);printf(" º                       º\n");
   	gotoxy(i,26);printf(" ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼\n");
	gotoxy(i,28);printf("    Choose :            \n");
   	gotoxy(41,28);scanf("%d",&pilih_menu);
   	switch(pilih_menu){
			case 1:
				system("CLS");
				permainan();
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
	gotoxy(8,1); printf("  ÛÛÛÛÛÛÛÛÛÛ  ÛÛ   ÛÛÛÛÛ             ÛÛÛÛÛÛÛÛÛÛ   ÛÛÛÛ    ÛÛÛÛÛ \n");
	printf("              ÛÛ      ÛÛ  ÛÛ                     ÛÛ      ÛÛ  ÛÛ  ÛÛ     \n");
	printf("              ÛÛ      ÛÛ  ÛÛ                     ÛÛ      ÛÛ  ÛÛ  ÛÛ     \n");
	printf("              ÛÛ      ÛÛ  ÛÛ                     ÛÛ      ÛÛÛÛÛÛ  ÛÛ     \n");
	printf("              ÛÛ      ÛÛ  ÛÛ                     ÛÛ      ÛÛ  ÛÛ  ÛÛ     \n");
	printf("              ÛÛ      ÛÛ   ÛÛÛÛÛ                 ÛÛ      ÛÛ  ÛÛ   ÛÛÛÛÛ \n \n\n\n");
	
	printf("      		           ÛÛÛÛÛÛÛÛÛÛ  ÛÛÛÛÛ   ÛÛÛÛÛ \n");
	printf("	 	               ÛÛ     ÛÛ   ÛÛ  Û     \n");
	printf("		               ÛÛ     ÛÛ   ÛÛ  ÛÛÛÛÛ \n");
	printf("		               ÛÛ     ÛÛ   ÛÛ  Û \n");
	printf("                               ÛÛ     ÛÛ   ÛÛ  Û     \n");
	printf("		               ÛÛ      ÛÛÛÛÛ   ÛÛÛÛÛ \n");
	
	warnateks(LIGHT_GREEN);
	gotoxy(9,18); printf("ÛÛ       ÛÛ \n");
	gotoxy(9,19); printf("  ÛÛ   ÛÛ \n");
	gotoxy(9,20); printf("    ÛÛÛ \n");
	gotoxy(9,21); printf("    ÛÛÛ \n");
	gotoxy(9,22); printf("  ÛÛ   ÛÛ \n");
	gotoxy(9,23); printf("ÛÛ       ÛÛ \n");	
	warnateks(YELLOW);
	gotoxy(61,18); printf("    ÛÛÛÛ  \n");
	gotoxy(61,19); printf("  ÛÛ    ÛÛ \n");
	gotoxy(61,20); printf("  ÛÛ    ÛÛ \n");
	gotoxy(61,21); printf("  ÛÛ    ÛÛ \n");
	gotoxy(61,22); printf("  ÛÛ    ÛÛ \n");
	gotoxy(61,23); printf("    ÛÛÛÛ \n");	
}

void xo(){
	warnateks(LIGHT_GREEN);
	gotoxy(9,8); printf("ÛÛ       ÛÛ \n");
	gotoxy(9,9); printf("  ÛÛ   ÛÛ \n");
	gotoxy(9,10); printf("    ÛÛÛ \n");
	gotoxy(9,11); printf("    ÛÛÛ \n");
	gotoxy(9,12); printf("  ÛÛ   ÛÛ \n");
	gotoxy(9,13); printf("ÛÛ       ÛÛ \n");	
	gotoxy(9,15);printf(" COMPUTER \n");
	warnateks(YELLOW);
	gotoxy(61,8); printf("    ÛÛÛÛ  \n");
	gotoxy(61,9); printf("  ÛÛ    ÛÛ \n");
	gotoxy(61,10); printf("  ÛÛ    ÛÛ \n");
	gotoxy(61,11); printf("  ÛÛ    ÛÛ \n");
	gotoxy(61,12); printf("  ÛÛ    ÛÛ \n");
	gotoxy(61,13); printf("    ÛÛÛÛ \n");
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
	gotoxy(x,21);  printf("ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
	gotoxy(x,22);printf("º                        º");
	gotoxy(x,23);printf("ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
	for(n=29;n<=50;n++){
		gotoxy(n,22);printf("Û");
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

void permainan(){
	int game_over = 0, giliran = O;
	int skor_com = 0; 
	int skor_user = 0;
	while(game_over != 1) {
		system("cls");
		warnateks(WHITE);
		gotoxy(32,5); printf("COMPUTER VS PLAYER");
		warnateks(WHITE);
   		gotoxy(12,17); printf(" %d \n",skor_com);
   		gotoxy(66,17); printf(" %d \n",skor_user);
		tampilan_board();
		if(giliran == O){
			warnateks(RED);
			gotoxy(63,6); printf("GILIRAN");
		}else{
			warnateks(RED);
			gotoxy(12,6); printf("GILIRAN");
		}
	}
}

void tampilan_board(){ 
	List L1,L2,L,Lplus;
	CreateList(&L1);
	CreateList(&L2);
	
	xo();
	make_board(&L1);
	printf("\n");
	infoMatriks(L1);

}

void make_board(List *L1)
{
	List L2;
	int i,j,b,k,d=1;
	infotype nilai;
	address P1,P2,down;

	for(i=1;i<=5;i++)
	{
		CreateList(&L2);
		for(j=1;j<=5;j++)
		{
			nilai=d;
			d++;
			
			P1=Alokasi(nilai);

			if (i==1)
			{
				InsertLast(&(*L1),P1);
				P2=First(*L1);
			}
			else
			{
				InsertLast(&L2,P1);
				baris(down)=P1;
				down=Next(down);
			}
		}
		if (i>1)
		{	P2=baris(P2);	}
		down=P2;
	}
}

void infoMatriks(List L)
{
	address P1,P2;

	if (First(L)==Nil)
	{
		printf ("matriks hasil kosong...\n\n");
	}
	else
	{
		P1=First(L);
		while (P1!=Nil)
		{
			P2=P1;
			printf("\t\t\t     ");
			while (P2!=Nil)
			{
				warnateks(WHITE);
				printf ("%2d   ",Info(P2));
				P2=Next(P2);
			}
			printf ("\n\n");
			P1=baris(P1);
		}
	}
}
