#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int rands()
{
	srand(time(0));
	int r = 1 + rand() % 100;
	return r;
}

int main()
{
	char c;
	bool done;
	int rand;
	int mynumb;
	int lives = 10;
	system("clear");
	do {
		rand = rands();
		cout << "У тебя " << lives << " шансов. \n" << "Выйграешь и заработаешь + 5 шансов. \n";
		cout << "Проиграешь и эта игра будет последней программой, что видел твой компьютер \n";
		while (true) {
			cout << "------------------------------------------ " << endl;
			cout << "Угадай, какое число загадал я? от 1 до 99 " << endl;
			cout << "Введи число: ";
			cin >> mynumb;
			if (rand > mynumb)
			{
				cout << "Мое число больше " << endl;
				lives--;
			} else if (rand < mynumb) {
				cout << "Мое число меньше " << endl;
				lives--;
			} else {
				cout << "Верно! Держи + 5 шансов." << endl;
				lives += 5;
				break;
			}
			cout << "Осталось " << lives << " попыток" << endl;
			if (lives == 0)
			{
				system("clear");
				cout << "Я победил. Твой компьютер будет уничтожен через" << endl;
				for (int i = 10; i > 0; --i)
				{
					cout << i << endl;
					sleep(1);
				}
				break;
			}
		}
		cout << "Продолжить? (y/n)" << endl;
		cin >> c; 
		done = (c!='y');
		system("clear");
	} while (!done);
}