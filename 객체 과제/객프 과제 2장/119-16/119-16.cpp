#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){
	srand(time(NULL));
	int cash = 50;
	float bets = 0, win = 0;

	for (int i = 0; i < 1000; i++){
		while (cash != 0 && cash != 250){
			bets++;
			if ((double)rand() / RAND_MAX < 0.5)
				cash++;
			else
				cash--;
		}

		if (cash == 250)
			win++;
		cash = 50;
	}

	cout << "�ʱ� �ݾ� : 50$" << endl << "��ǥ�ݾ� : 250$" << endl;
	cout << "1000���� ������ " << win << "�� �¸�" << endl;
	cout << "�̱� Ȯ�� = " << win / 1000 << "%" << endl;
	cout << "��� ���� Ƚ�� = " << bets / 1000 << "ȸ" << endl;

	system("pause");
	return 0;
}