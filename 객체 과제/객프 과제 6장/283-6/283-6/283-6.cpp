#include <iostream>
using namespace std;

class Contact {
    string name;
    string tel;

public:
    Contact() {}
    Contact(string n, string t) : name(n), tel(t) {}

    string getname() const {
        return name;
    }

    string gettel() const {
        return tel;
    }

    void setname(string n) {
        name = n;
    }

    void settel(string t) {
        tel = t;
    }

    void print() const {
        cout << "이름: " << name << "\t전화번호: " << tel << endl;
    }
};

int main() {
    int size = 3;  
    Contact* contactArray = new Contact[size];  // 동적 배열 생성

    for (int i = 0; i < size; i++) {
        string name, tel;
        cout << "이름을 입력하시오 : ";
        cin >> name;
        cout << "전화번호를 입력하시오 : ";
        cin >> tel;

        contactArray[i] = Contact(name, tel);
    }

    string searchName;
    cout << "찾고 싶은 이름을 입력하시오: ";
    cin >> searchName;

    bool found = false;
    for (int i = 0; i < size; i++) {
        if (contactArray[i].getname() == searchName) {
            cout <<"전화번호: " << contactArray[i].gettel() << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "연락처를 찾을 수 없습니다." << endl;
    }
    delete[] contactArray;

    return 0;
}
