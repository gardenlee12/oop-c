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

	cout << "초기 금액 : 50$" << endl << "목표금액 : 250$" << endl;
	cout << "1000번의 실행중 " << win << "번 승리" << endl;
	cout << "이긴 확률 = " << win / 1000 << "%" << endl;
	cout << "평균 배팅 횟수 = " << bets / 1000 << "회" << endl;

	system("pause");
	return 0;
}