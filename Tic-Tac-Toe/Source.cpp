#include<Windows.h>
#include<iostream>
#include<string>
#include<string>
#include<stdlib.h>
#include<time.h>
using namespace std;
bool game_running = true;
int main(){
start:
	char map[3][10] = {
		"(X)( )( )",
		"( )( )( )",
		"( )( )( )",
	};
	int y = 0, x = 1;
	int k = 0;
	int con = 0;
st:
	y = 0;
	x = 1;
	system("color 3");
	srand(time(0));
	//////////////////////////////////////////////////// while mozraoba////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	while (game_running = true){
		system("cls");

		for (int display = 0; display < 3; display++){

			cout << map[display] << endl;

		}
		system("pause>nul");
		if (GetAsyncKeyState(VK_DOWN)){
			int y2 = y + 1;
			if (map[y2][x] == ' '){
				map[y][x] = ' ';
				y++;
				map[y][x] = 'X';
			}
		}
		if (GetAsyncKeyState(VK_UP)){
			int y2 = y - 1;
			if (map[y2][x] == ' '){
				map[y][x] = ' ';
				y--;
				map[y][x] = 'X';
			}
		}
		if (GetAsyncKeyState(VK_RIGHT)){
			int x2 = x + 3;
			if (map[y][x2] == ' '){
				map[y][x] = ' ';
				x = x + 3;
				map[y][x] = 'X';
			}
		}
		if (GetAsyncKeyState(VK_LEFT)){
			int x2 = x - 3;
			if (map[y][x2] == ' '){
				map[y][x] = ' ';
				x = x - 3;
				map[y][x] = 'X';
			}
		}
		if (GetAsyncKeyState(VK_SPACE)){
			map[y][x] = 'X';
			break;
			for (int h = 0; h < 3; h++){
				for (int j = 0; j < 9; j++){
					if (map[h][1] == 'X' && map[h][4] == 'X' && map[h][7] == 'X'){
						goto finishw;
					}
					if (map[1][j] == 'X' && map[2][j] == 'X' && map[3][j] == 'X'){
						goto finishw;
					}
				}
			}
			if (map[0][1] == 'X' && map[1][4] == 'X' && map[2][7] == 'X'){
				goto finishw;
			}
			if (map[2][1] == 'X' && map[1][4] == 'X' && map[0][7] == 'X'){
				goto finishw;
			}
			if (map[0][1] == 'X' || map[2][1] == 'X' || map[0][7] == 'X' || map[2][8] == 'X'){
				if (map[1][4] == ' '){
					map[1][4] = 'O';
				}
				else{
					int r = rand() % 4;
					switch (r){
					case 0:{
							   if (map[1][1] == ' ')map[1][1] = 'O';
					}
					case 1:{
							   if (map[0][4] == ' ')map[0][4] = 'O';
					}
					case 2:{
							   if (map[1][7] == ' ')map[1][7] = 'O';
					}
					case 3:{
							   if (map[2][4] == ' ')map[2][4] = 'O';
					}
					}
				}

			}
		}
	}
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*rand:
	for (int i = 0; i < 1; i++){
	int ry = rand() % 3; //0,1,2;
	int rx = rand() % 3; //0,1,2;
	switch (rx){
	case 0: rx = 1;
	break;
	case 1: rx = 4;
	break;
	case 2: rx = 7;
	break;
	}
	if (map[ry][rx] == ' '){
	map[ry][rx] = 'O';
	}
	else goto rand;
	system("cls");
	for (int display = 0; display < 3; display++){

	cout << map[display] << endl;

	}
	system("pause>0");
	}
	int g = 0;
	for (int h = 0; h < 3; h++){
	for (int j = 0; j < 9; j++){
	if (map[h][1] == 'O' && map[h][4] == 'O' && map[h][7] == 'O')g = 1;
	if (map[1][j] == 'O' && map[2][j] == 'O' && map[3][j] == 'O')g = 1;
	}
	}
	if (g == 1)cout << "you LOOSE" << endl;
	if (g != 1 && k != 1)cout << "noone won" << endl;
	goto st;*/
finishw:
	system("cls");
	cout << "you won!" << endl << "do you want to continiu ? " << endl;
	string yesorno;
	cin >> yesorno;
	if (yesorno[0] == 'y'&&yesorno[1] == 'e'&&yesorno[2] == 's')goto start;
	if (yesorno[0] == 'Y'&&yesorno[1] == 'E'&&yesorno[2] == 'S')goto start;
	if (yesorno[0] == 'y'&&yesorno[1] == 'e'&&yesorno[2] == 'p')goto start;
	if (yesorno[0] == 'Y'&&yesorno[1] == 'E'&&yesorno[2] == 'P')goto start;
	system("cls");
}