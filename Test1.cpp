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
    /*bool _validInt = false;*/
    //using do while
    do {
        cout << "ex.3 Entrez un entier positif : ";
        cin >> _chiffre;

        if (_chiffre <= 0) {
            cout << "Chiffre invalide. Veuillez entrer un entier positif." << endl;
        }
    } while (_chiffre <= 0);

    return _chiffre;
}

void displayTableMultiplication10(int _chiffre) {
    cout << "la table de multiplication de ta chiffre " << _chiffre << " de 1..10 " << endl;
    for (int i = 1; i <= 10; i++) {
        cout << _chiffre << " * " << i << " = " << _chiffre * i << endl;
    }
 }

void BasicCalcul() {
    int _num1, _num2;
    char operation;
    cout << "ex.5 " << endl;
    cout << "entrez le premier int : ";
    cin >> _num1;

    cout << "entrez le deuxieme int : ";
    cin >> _num2;

    cout << "choose une Op. +, -, *, / : ";
    cin >> operation;

    switch (operation) {
    case '+':
        cout << _num1 << " + " << _num2 << " = " << _num1 + _num2 << endl;
        break;
    case '-':
        cout << _num1 << " - " << _num2 << " = " << _num1 - _num2 << endl;
        break;
    case '*':
        cout << _num1 << " * " << _num2 << " = " << _num1 * _num2 << endl;
        break;
     case
        '/':
        cout << _num1 << " / " << _num2 << " = " << _num1 / _num2 << endl;
        //pas teste div /0 
    default:
            cout << "Opération non valide." << endl;
        }
}

int AskIntMiniMax() {
    int _indexN;
    bool validInput = false;

    cout << "ex. 6 " << endl;

    do {
        cout << "Enter un entier positif entre 1 et 10 : ";
        cin >> _indexN;

        if (_indexN >= 1 && _indexN <= 10) {
            validInput = true;
        }
        else {
            cout << "Nope! Enter un entier positif entre 1 et 10 :" << endl;
        }
    } while (!validInput);

    return _indexN;
}

void displayIndexCalculs(int _indexN) {
    for (int i = 1; i <= _indexN; i++) {
        cout << i << endl;
    }

    if (_indexN % 2 == 0) {
        cout << _indexN << " au carre : " << _indexN * _indexN << endl;
    }
    else {
        cout << _indexN << " au cube : " << _indexN * _indexN * _indexN << endl;
    }
}

int getLheure() {
    int _lheure;
    bool validHour = false;
    cout << "ex.7 " << endl;
    for (;;) {
        cout << "Entrez l'heure de la journée (entre 0 et 24) : ";
        cin >> _lheure;

        if (_lheure >= 0 && _lheure <= 24) {
            validHour = true;
            break;
        }
        else {
            cout << "enter une heure valide entre 0 et 24." << endl;
        }
    }
        return _lheure;
}

void interpretLheure(int _lheure) {
    if (_lheure >= 7 && _lheure < 12) {
        cout << "Il est matin." << endl;
    }
    else if (_lheure == 12) {
        cout << "Il est midi." << endl;
    }
    else if (_lheure > 12 && _lheure <= 23) {
        cout << "Il est après-midi." << endl;
    }
    else if (_lheure == 24) {
        cout << "Il est minuit." << endl;
    }
    else {
        cout << "Il est nuit." << endl;
    }
}

int AskUserMoneyCalc() {
    int _xCinqCentimes, _xdixCentimes, _xvingtCentimes, _xciquanteCentimes, _xunEuro, _xdeuxEuro;

    cout << "Entrez le nombre de pièces de 5 centimes : ";
    cin >> _xCinqCentimes;
    if (_xCinqCentimes < 0) {
        cout << "Nombre invalide de pièces de 5 centimes. Considere comme 0." << endl;
        _xCinqCentimes = 0;
    }

    cout << "Entrez le nombre de pièces de 10 centimes : ";
    cin >> _xdixCentimes;
    if (_xdixCentimes < 0) {
        cout << "Nombre invalide de pièces de 10 centimes. Considere comme 0." << endl;
        _xdixCentimes = 0;
    }

    cout << "Entrez le nombre de pièces de 20 centimes : ";
    cin >> _xvingtCentimes;
    if (_xvingtCentimes < 0) {
        cout << "Nombre invalide de pièces de 20 centimes. Considere comme 0." << endl;
        _xvingtCentimes = 0;
    }

    cout << "Entrez le nombre de pièces de 50 centimes : ";
    cin >> _xciquanteCentimes;
    if (_xciquanteCentimes < 0) {
        cout << "Nombre invalide de pièces de 50 centimes. Considere comme 0." << endl;
        _xciquanteCentimes = 0;
    }

    cout << "Entrez le nombre de pièces de 1 euro : ";
    cin >> _xunEuro;
    if (_xunEuro < 0) {
        cout << "Nombre invalide de pièces de 1 euro. Considéré comme 0." << endl;
        _xunEuro = 0;
    }

    cout << "Entrez le nombre de pièces de 2 euros : ";
    cin >> _xdeuxEuro;
    if (_xdeuxEuro < 0) {
        cout << "Nombre invalide de pièces de 2 euros. Considéré comme 0." << endl;
        _xdeuxEuro = 0;
    }

    int _totalCentimes = _xCinqCentimes * 5 + _xdixCentimes * 10 + _xvingtCentimes * 20 + _xciquanteCentimes * 50 + _xunEuro * 100 + _xdeuxEuro * 200;
    int _totalEuros = _totalCentimes / 100;
    int _restCentimes = _totalCentimes % 100;

    cout << "Le total en euros est : " << _totalEuros << " euro(s) et " << _restCentimes << " centimes" << endl;

    return _totalEuros;
}

void AskFamily() {
    int _xminsoeurs, _xsoeurs, _xminfreres, _xfreres;
    int age;
    cout << "ex.9 " << endl;
    cout << "Combien de soeurs avez-vous ? ";
    cin >> _xsoeurs;
    cout << "Combien de filles avez-vous ? ";
    cin >> _xminsoeurs;
         
    for (int i = 0; i < _xminsoeurs; i++) {
        cout << "Age de la soeur mineure #" << i +1 << ": ";
        cin >> age;
    }
    cout << "Combien de freres avez-vous ? ";
    cin >> _xfreres;
    cout << "Combien de garçons avez-vous ? ";
    cin >> _xminfreres;

    for (int i = 0; i < _xminfreres; i++) {
        cout << "Age du frère mineur #" << i + 1 << ": ";
        cin >> age;
    }

    cout << "\nVous avez:\n"
        << _xminsoeurs << " filles\n"
        << _xsoeurs + _xminsoeurs << " soeurs \n"
        << _xminfreres  << " garcons\n"
        << _xminfreres + _xfreres << " frères\n";
}

void JustePrix() {
    int _justePrix = 27;
    int _guess;
    do {
        cout << "Devine le numero! =>";
        cin >> _guess;

        if (_guess < _justePrix) {
            cout << "plus haut! \n";
        }
        else if (_guess > _justePrix) {
            cout << "plus bas! \n";
        }

    } while (_justePrix != _guess);
          
    cout << "c'est bon! \n";
}

void LaCaisse() {
    int _prix = 100; // prix du jouet au hassard
    int _reduction = 0;
    int _nbCoupons = 0;
    int _couponValue;

    cout << "ex.11 \nLe prix initial est de " << _prix << " euros.\n";
    cout << "Combien de coupons de réduction avez-vous ? ";
    cin >> _nbCoupons;

    for (int i = 0; i < _nbCoupons; i++) {
        cout << "Valeur du coupon #" << i + 1 << " (en %): ";
        cin >> _couponValue;

        //Le résultat de ce calcul est ajouté à la variable
        _reduction += (_prix * _couponValue) / 100;
    }

    int _prixReduit = _prix - _reduction;

    cout << "La réduction totale est de " << _reduction << " euros.\n";
    cout << "Le prix final est de " << _prixReduit << " euros.\n";
}

void BouncerDisco() {
    int _groups, _partypeople;
    int _drinkers = 26; // party people deja la
    
    cout << "ex.4 \ncombien des groupes ? => ";
    cin >> _groups;
    for (int i = 0; i < _groups; i++) {
        cout << "votre groupe #" << i + 1 << " a combien de party people: ";
        cin >> _partypeople;
        for (int i = 0; i < _partypeople; i++) {
            if (i%2 == 0) {
                cout << "Bonjour! \n";
            }
        }
        _drinkers += _partypeople;
    }
    
    cout << "tout le monde dedans: " << _drinkers;
}


int main() {
    
    ///* ex1 */
    //int _MonNumber = 27;
    //displayInteger(_MonNumber);
   
    ///* ex2 */
    //AskAgeCalculs();
   
    ///* ex3 */
    //int _chiffre = AskPositiveInt();
    //displayTableMultiplication10(_chiffre);
    //
    ///* ex4 */
    BouncerDisco();

    ///* ex5 */
    //BasicCalcul();
   
    ///* ex6 */
    //int _indexN = AskIntMiniMax();
    //displayIndexCalculs(_indexN);
   
    ///* ex7 */
    //int _lheure = getLheure();
    //interpretLheure(_lheure); 

    /* ex8 */
    //int _totalEuros = AskUserMoneyCalc();

    /*ex9 */
    //AskFamily();
      
    /*ex10 */
    //JustePrix();

    /*ex11 */
    //LaCaisse();

    return 0;
}

