#include <iostream>
#include <time.h>
using namespace std;


int main() {
	int cGuess = 0;
	int hL = 0;
	int oldGuess[99] = {};
	const int MAX = 99;
	int x = 0;
	int h = 0;
	int l = 0;
	int arrayNum = 100;
	int arrayNumH = 0;
	int topNum = 0;
	int lowNum = 0;

	int numbers[101];
	for (int i = 0; i <= 100; i++)
		numbers[i] = i;

	srand(time(0));

	cGuess = 50;

	cout << "Please come up with a number \n" << "Make sure to remember it \n" << "Computer will then guess the number \n";

	system("PAUSE");

	do {
		cout << cGuess << "\n" << "If higher press 1 \n" << "If lower press 0 \n" << "If correct press 3 \n";
		cin >> hL;

	

		switch (hL) {
		case 0:
			l = cGuess / 2;
			topNum = cGuess;

			for (int i = 0; i < cGuess, i > lowNum; i++)
				numbers[i] = i;

			cGuess = numbers[l];


			break;

		case 1:
			h = cGuess / 2;
			lowNum = cGuess;

			h = h + cGuess;
			
			for (int i = cGuess; i < topNum; i++)
				numbers[i] = i;

			

			cGuess = numbers[h];

			
			break;

		}
		


		x++;
	} while (hL != 3);

	cout << "Congrats!! \n";

	cout << "It took the computer " << x << " times to guess \n";
	system("PAUSE");

}
