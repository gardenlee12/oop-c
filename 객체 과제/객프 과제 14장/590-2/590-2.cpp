#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdexcept>

using namespace std;

// 입력이 "가위", "바위", "보" 중 하나인지 확인하는 함수
bool isValidChoice(const string& choice) {
    string validChoices[] = { "가위", "바위", "보" };
    for (const string& validChoice : validChoices) {
        if (validChoice == choice) {
            return true;
        }
    }
    return false;
}

// 가위바위보의 승패를 결정하는 함수
void determineWinner(const string& userChoice, const string& computerChoice) {
    if (userChoice == computerChoice) {
        cout << "무승부입니다!" << endl;
    }
    else if ((userChoice == "가위" && computerChoice == "보") ||
        (userChoice == "바위" && computerChoice == "가위") ||
        (userChoice == "보" && computerChoice == "바위")) {
        cout << "사용자 승리!" << endl;
    }
    else {
        cout << "컴퓨터 승리!" << endl;
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    try {
        string choices[] = { "가위", "바위", "보" };

        cout << "가위, 바위, 보 중 하나를 입력하세요: ";
        string userChoice;
        cin >> userChoice;

        if (!isValidChoice(userChoice)) {
            throw invalid_argument("올바른 입력이 아닙니다. 가위, 바위, 보 중 하나를 입력하세요.");
        }

        int computerIndex = rand() % 3;
        string computerChoice = choices[computerIndex];

        cout << "사용자: " << userChoice << endl;
        cout << "컴퓨터: " << computerChoice << endl;

        determineWinner(userChoice, computerChoice);

    }
    catch (const invalid_argument& e) {
        cerr << "오류: " << e.what() << endl;
    }

    return 0;
}
