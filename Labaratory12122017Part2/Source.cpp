// С какого языка программирования начать обучение??

#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");



	cout << "Зачем Вы хотите изучать программирование?? \n";
	cout << "Выберите один из вариантов: \n";
	cout << "a) Интересно\n";
	cout << "b) Поразвлечься\n";
	cout << "c) Саморазвитите\n";
	cout << "d) Для детей...\n";
	cout << "e) Заработать\n";
	cout << "f) Я не знаю! Выберите за меня\n";
	char yn = 0;
	cout << "Введите вариант --- ";
	cin >> yn;
	if (yn == 'f' || yn == 'd')
	{	
		system("cls");
		HANDLE hConsole;
		int color = 18; // blue

		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, color);
		
		cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
		cout << "       ||||||||      \n";
		cout << "-__-__-__-__-___-___-\n";
		cout << "_____P_Y_T_H_O_N_____ \n";
		
	}
	else if (yn == 'a' || yn == 'b' || yn == 'c')
	{
		system("cls");
		cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
		cout << "       ||||||||      \n";
		cout << "Идея на миллион бар ма?\n";
		cout << "Йес - 'y' или Ноу - 'n'??\n";
		cin >> yn;
		if (yn == 'n')
		{	
			system("cls");
			cout << "А тебе нравится учиться...\n";
			cout << "a) Простым способом\n";
			cout << "b) Лучшим способом\n";
			cout << "c) Люблю ХАРД ХАРД ХАРД\n";
			cout << "d) НУЖЕН МЕГА ХАРД!!!!!!\n";
			cin >> yn;
			if (yn == 'a')
			{
				system("cls");
				HANDLE hConsole;
				int color = 18; // blue

				hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, color);

				cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
				cout << "       ||||||||      \n";
				cout << "-__-__-__-__-___-___-\n";
				cout << "_____P_Y_T_H_O_N_____ \n";
			}
			else if (yn == 'b')
			{	
				
				system("cls");
				HANDLE hConsole;
				int color = 18; // blue

				hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, color);

				cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
				cout << "       ||||||||      \n";
				cout << "-__-__-__-__-___-___-\n";
				cout << "_____P_Y_T_H_O_N_____ \n";
			}
			else if (yn == 'c')
			{
				system("cls");
				cout << "Какая коробка передач???\n";
				cout << "        /      \\        \n";
				cout << "       /        \\       \n";
				cout << "      /          \\      \n";
				cout << " a) ручка         b) авто\n";
				cin >> yn;
				if (yn == 'a')
				{
					system("cls");
					HANDLE hConsole;
					int color = 18; // blue

					hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(hConsole, color);

					cout << " _____________    \n";
					cout << " |     \n";
					cout << " | \n";
					cout << " |   \n";
					cout << " |     \n";
					cout << " |\n";
					cout << " |   \n";
					cout << " |____________     \n";
					cout << "_____CCCCCCCCCC_____ \n";
				}
				else if (yn == 'b')
				{
					system("cls");
					HANDLE hConsole;
					int color = 4; //red

					hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(hConsole, color);
					cout << "-_______J.A.V.A_________-\n";
				}
			}
			else if (yn == 'd')
			{	
				system("cls");
				HANDLE hConsole;
				int color = 18; // blue

				hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, color);
				cout << "c++c++c++c++\n";
				cout << "+\n";
				cout << "+\n";
				cout << "+\n";
				cout << "+\n";
				cout << "+\n";
				cout << "+\n";
				cout << "c++c++c++c++\n\n\n\n";
				

			}
		}
		else if (yn == 'y')
		{	
			whichplatform:
			cout << "       Какая платформа/сфера??       \n";
			cout << "      /        |       |       \\ \n";
			cout << "     a         b       c         d\n";
			cout << " 3D игры    Mobile  Корп.Софт   W E B\n";
			cin >> yn;
			if (yn == 'a')
			{	
				threedgames:
				system("cls");
				HANDLE hConsole;
				int color = 18; // blue

				hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, color);
				cout << "c++c++c++c++\n";
				cout << "+\n";
				cout << "+\n";
				cout << "+\n";
				cout << "+\n";
				cout << "+\n";
				cout << "+\n";
				cout << "c++c++c++c++\n\n\n\n";
			}
			else if (yn == 'b')
			{	
				mobile:
				cout << "Какая OS??\n";
				cout << "a) Android     b) IOS\n";
				cin >> yn;
				if (yn == 'a')
				{
					system("cls");
					HANDLE hConsole;
					int color = 4; //red

					hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(hConsole, color);
					cout << "-_______J.A.V.A_________-\n";
				}
				else if (yn == 'b')
				{
					system("cls");
					HANDLE hConsole;
					int color = 30; 

					hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(hConsole, color);
					cout << "_______________\n";
					cout << "|             |\n";
					cout << "|             |\n";
					cout << "|      C      |\n";
					cout << "|             |\n";
					cout << "|             |\n";
					cout << "|_____________|\n\n\n";

					cout << "~OBJECTIVE - C~\n";
				}
			}
			else if (yn == 'c')
			{	
				corpsoft:
				cout << "Как тебе MICROSOFT??\n";
				cout << "a) ПРЯМ ТАЩУСЬ НЕ МОГУ!!!\n";
				cout << "b) ну пойдет\n";
				cout << "c) НЕНАВИЖУ\n";
				cin >> yn;
				if (yn == 'a')
				{
					system("cls");
					HANDLE hConsole;
					int color = 40;

					hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(hConsole, color);
					cout << "_______________\n";
					cout << "|             |\n";
					cout << "|  #       #  |\n";
					cout << "|      |      |\n";
					cout << "|             |\n";
					cout << "|   --___--   |\n";
					cout << "|_____________|\n\n\n";

					cout << "~~~~C# ~ C# ~~~\n";
				}
				else if (yn == 'b')
				{
					system("cls");
					HANDLE hConsole;
					int color = 4;

					hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(hConsole, color);
					cout << "_______________\n";
					cout << "|             |\n";
					cout << "|  *       *  |\n";
					cout << "|      |      |\n";
					cout << "|             |\n";
					cout << "|    ______   |\n";
					cout << "|_____________|\n\n\n";

					cout << "-__J.A.V.A___-\n";
				}
				else if (yn == 'c')
				{
					system("cls");
					HANDLE hConsole;
					int color = 4;

					hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(hConsole, color);
					cout << "_______________\n";
					cout << "|             |\n";
					cout << "|  *       *  |\n";
					cout << "|      |      |\n";
					cout << "|             |\n";
					cout << "|   _-----_   |\n";
					cout << "|_____________|\n\n\n";

					cout << "-__J.A.V.A___-\n";
				}

			}
			else if (yn == 'd')
			{
				cout << "Ваш сервис будет работать в реальном времени как Twitter?\n";
				cout << " y  ????    n ?????\n";
				cin >> yn;
				if (yn == 'y')
				{	
					JavaScript:
					system("cls");
					HANDLE hConsole;
					int color = 10; //green

					hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(hConsole, color);
					cout << "-_______Java Script_________-\n";
				}
				else if (yn == 'n')
				{	
					smthnew:
					cout << "Хотите что нибудь новое, но не трудоемкое??\n";
					cout << " y  ????    n ?????  don't know??\n";
					if (yn == 'y')
					{
						goto JavaScript;
					}
					else
					{
						cout << "Какая у Вас любимая игрушка???\n";
						cout << "   /            |             \\\n";
						cout << "  a             b               c\n";
						cout << " LEGO       Пластилин     Старенький, но любимый мишка\n";
						cin >> yn;
						if (yn == 'a')
						{
							system("cls");
							HANDLE hConsole;
							int color = 18; // blue

							hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
							SetConsoleTextAttribute(hConsole, color);

							cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
							cout << "       ||||||||      \n";
							cout << "-__-__-__-__-___-___-\n";
							cout << "_____P_Y_T_H_O_N_____ \n";
						}
						else if (yn == 'b')
						{
							system("cls");
							HANDLE hConsole;
							int color = 4; // red

							hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
							SetConsoleTextAttribute(hConsole, color);

							cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
							cout << "       ||||||||      \n";
							cout << "-__-__-__-__-___-___-\n";
							cout << "_________RUBY________ \n";
						}
						else if (yn == 'c')
						{
							system("cls");
							HANDLE hConsole;
							int color = 18; // blue

							hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
							SetConsoleTextAttribute(hConsole, color);

							cout << "____              _____\n";
							cout << "|___|    |    |   |____|n";
							cout << "|        |----|   |\n";
							cout << "|        |    |   | \n";
						}
					}
				}
			}

		}

	}
 else if (yn == 'e')
 {
	 cout << "_________________________\n";
	 cout << "  |                   |\n";
	 cout << "  |                   |\n";
	 cout << "  a                   b\n";
	 cout << "  |                   |\n";
	 cout << "Нужна работа    Есть идея для стартапа\n";
	 cin >> yn;
	 if (yn == 'a')
	 {
		 cout << " ____________________Какая платформа/сфера??______________________\n";
		 cout << "      /           |           |           |           |          \\\n";
		 cout << "     a            b           c           d           e            f\n";
		 cout << " 3D игры      Mobile      Корп.Софт     W E B   Просто хочу $$$    Крупная IT компания\n";
		 cin >> yn;
		 if (yn == 'a')
		 {
			 goto threedgames;
		 }
		 else if (yn == 'b')
		 {
			 goto mobile;
		 }
		 else if (yn == 'c')
		 {
			 goto corpsoft;
		 }
		 else if (yn == 'd')
		 {
			 cout << "a) BackEND       b) FrontEND\n";
			 cin >> yn;
			 if (yn == 'a')
			 {
				 cout << "Хочу наработать.... \n";
				 cout << "a) На корпорацию     b) СТАРТАП\n";
				 cin >> yn;
				 if (yn == 'a')
				 {
					 goto corpsoft;
				 }
				 else if (yn == 'b')
				 {
					 goto smthnew;
				 }
			 }
			 else if (yn == 'b')
			 {
				 goto JavaScript;
			 }
		 }
		 else if (yn == 'e')
		 {
			 system("cls");
			 HANDLE hConsole;
			 int color = 4; //red

			 hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			 SetConsoleTextAttribute(hConsole, color);
			 cout << "-_______J.A.V.A_________-\n";
		 }
		 else if (yn == 'f')
		 {
			 cout << "a)MICROSOFT          b)FACEBOOK\n";
			 cout << "c)GOOGLE             d)APPLE\n";
			 cin >> yn;
			 if (yn == 'a')
			 {
				 system("cls");
				 HANDLE hConsole;
				 int color = 40;

				 hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				 SetConsoleTextAttribute(hConsole, color);
				 cout << "_______________\n";
				 cout << "|             |\n";
				 cout << "|  #       #  |\n";
				 cout << "|      |      |\n";
				 cout << "|             |\n";
				 cout << "|   --___--   |\n";
				 cout << "|_____________|\n\n\n";

				 cout << "~~~~C# ~ C# ~~~\n";
			 }
			 else if (yn == 'b')
			 {
				 system("cls");
				 HANDLE hConsole;
				 int color = 18; // blue

				 hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				 SetConsoleTextAttribute(hConsole, color);

				 cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
				 cout << "       ||||||||      \n";
				 cout << "-__-__-__-__-___-___-\n";
				 cout << "_____P_Y_T_H_O_N_____ \n";
			 }
			 else if (yn == 'c')
			 {
				 system("cls");
				 HANDLE hConsole;
				 int color = 18; // blue

				 hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				 SetConsoleTextAttribute(hConsole, color);

				 cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
				 cout << "       ||||||||      \n";
				 cout << "-__-__-__-__-___-___-\n";
				 cout << "_____P_Y_T_H_O_N_____ \n";
			 }
			 else if (yn == 'd')
			 {
				 system("cls");
				 HANDLE hConsole;
				 int color = 30;

				 hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				 SetConsoleTextAttribute(hConsole, color);
				 cout << "_______________\n";
				 cout << "|             |\n";
				 cout << "|             |\n";
				 cout << "|      C      |\n";
				 cout << "|             |\n";
				 cout << "|             |\n";
				 cout << "|_____________|\n\n\n";

				 cout << "~OBJECTIVE - C~\n";
			 }
		 }
	 }
	 else if (yn == 'b')
	 {
		 goto whichplatform;
	 }
 }


	system("pause");
}