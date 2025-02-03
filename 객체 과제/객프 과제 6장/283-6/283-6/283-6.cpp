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
        cout << "�̸�: " << name << "\t��ȭ��ȣ: " << tel << endl;
    }
};

int main() {
    int size = 3;  
    Contact* contactArray = new Contact[size];  // ���� �迭 ����

    for (int i = 0; i < size; i++) {
        string name, tel;
        cout << "�̸��� �Է��Ͻÿ� : ";
        cin >> name;
        cout << "��ȭ��ȣ�� �Է��Ͻÿ� : ";
        cin >> tel;

        contactArray[i] = Contact(name, tel);
    }

    string searchName;
    cout << "ã�� ���� �̸��� �Է��Ͻÿ�: ";
    cin >> searchName;

    bool found = false;
    for (int i = 0; i < size; i++) {
        if (contactArray[i].getname() == searchName) {
            cout <<"��ȭ��ȣ: " << contactArray[i].gettel() << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "����ó�� ã�� �� �����ϴ�." << endl;
    }
    delete[] contactArray;

    return 0;
}
