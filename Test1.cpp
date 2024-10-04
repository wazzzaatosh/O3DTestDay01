// Test1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void displayInteger(int number) {
    cout << "ex1. L'entier est : " << number << endl;
}

void AskAgeCalculs() {
    int _age;
    char _confirmation;
    cout << "ex2.";
    cout << "your age : ";
    cin >> _age;

    cout << "sur ? (O/N) : ";
    cin >> _confirmation;

    if (_confirmation == 'O') {
        cout << "your age is: " << _age << endl;
        cout << "your age is doubled: " << _age *2 << endl;
        cout << "your age is tripled: " << _age *3 << endl;
        cout << "your age is halved: " << _age /2 << endl;
    }
    else {
        cout << "Hey you should now thy age!!" << endl;
    }
}

int AskPositiveInt() {
    int _chiffre;
    bool _validInput = false;

    //demande nouveau int tant que le bool est false
    //using do while, executer au moins une fois 
    while (!_validInput) {
        cout << "ex3. enter l'entier positif : ";
        cin >> _chiffre;

        if (_chiffre > 0) {
            _validInput = true;
        }
        else {
            cout << "entrer a nouveau un entier positif!!" << endl;
        }
    }
        return _chiffre;
}

void displayTableMultiplication10(int _chiffre) {
    cout << "la table de multiplication de ta chiffre 1..10 " << _chiffre << endl;
    for (int i = 1; i <= 10; i++) {
        cout << _chiffre << " * " << i << " = " << _chiffre * i << endl;
    }
}

int main() {
    /*int _MonNumber = 27;
    displayInteger(_MonNumber);
    AskAgeCalculs();*/
    int _chiffre = AskPositiveInt();
    displayTableMultiplication10(_chiffre);

    return 0;
}

