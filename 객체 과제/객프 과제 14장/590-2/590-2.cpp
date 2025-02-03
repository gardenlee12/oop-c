#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdexcept>

using namespace std;

// �Է��� "����", "����", "��" �� �ϳ����� Ȯ���ϴ� �Լ�
bool isValidChoice(const string& choice) {
    string validChoices[] = { "����", "����", "��" };
    for (const string& validChoice : validChoices) {
        if (validChoice == choice) {
            return true;
        }
    }
    return false;
}

// ������������ ���и� �����ϴ� �Լ�
void determineWinner(const string& userChoice, const string& computerChoice) {
    if (userChoice == computerChoice) {
        cout << "���º��Դϴ�!" << endl;
    }
    else if ((userChoice == "����" && computerChoice == "��") ||
        (userChoice == "����" && computerChoice == "����") ||
        (userChoice == "��" && computerChoice == "����")) {
        cout << "����� �¸�!" << endl;
    }
    else {
        cout << "��ǻ�� �¸�!" << endl;
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    try {
        string choices[] = { "����", "����", "��" };

        cout << "����, ����, �� �� �ϳ��� �Է��ϼ���: ";
        string userChoice;
        cin >> userChoice;

        if (!isValidChoice(userChoice)) {
            throw invalid_argument("�ùٸ� �Է��� �ƴմϴ�. ����, ����, �� �� �ϳ��� �Է��ϼ���.");
        }

        int computerIndex = rand() % 3;
        string computerChoice = choices[computerIndex];

        cout << "�����: " << userChoice << endl;
        cout << "��ǻ��: " << computerChoice << endl;

        determineWinner(userChoice, computerChoice);

    }
    catch (const invalid_argument& e) {
        cerr << "����: " << e.what() << endl;
    }

    return 0;
}
