// projekt.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

float FtoC(float F);
float FtoK(float F);
float CtoF(float C);
float CtoK(float C);
float KtoC(float K);
float KtoF(float K);
void menu();
int check(float temp, char stopnie);
float pobierz(char stopnie);

int main() {


    int wybor;

    while (true) {
        system("cls");

        menu();
        cout << "Co wybierasz?" << endl;
        cin >> wybor;

        if (wybor < 1 || wybor > 6) {
            return 0;
        }


        switch (wybor) {
        case 1: {

            float temp = pobierz('F');

            if (check(temp, 'F')) {

                cout << temp << " stopni Fahr to " << FtoC(temp) << " stopni Celsius" << endl;
            }
            else {
                cout << "Nie ma takiej temperatury!" << endl;
                break;
            }
            break;
        }
        case 2: {
            float temp = pobierz('F');

            if (check(temp, 'F')) {
                cout << FtoK(temp) << endl;
            }
            else {
                cout << "Nie ma takiej temperatury!" << endl;

                break;
            }
            break;
        }
        case 3: {
            float temp = pobierz('C');

            if (check(temp, 'C')) {
                cout << CtoF(temp) << endl;
            }
            else {
                cout << "Nie ma takiej temperatury!" << endl;
                break;

            }
            break;
        }
        case 4: {
            float temp = pobierz('C');

            if (check(temp, 'C')) {
                cout << CtoK(temp) << endl;
            }
            else {
                cout << "Nie ma takiej temperatury!" << endl;
                break;

            }
            break;
        }
        case 5: {
            float temp = pobierz('K');

            if (check(temp, 'K')) {
                cout << KtoC(temp) << endl;
            }
            else {
                cout << "Nie ma takiej temperatury!" << endl;
                break;
            }
            break;
        }
        case 6: {
            float temp = pobierz('K');

            if (check(temp, 'K')) {
                cout << KtoF(temp) << endl;
            }
            else {
                cout << "Nie ma takiej temperatury!" << endl;
                break;
            }
            break;
        }
        }

        cout << "Wcisnij Enter aby sprobowac jeszcze raz...";
        cin.ignore();
        cin.get();
    }//end while

    return 0;
}


int check(float temp, char stopnie) {
    switch (stopnie) {
    case 'C':
        if (temp < -273.15) return 0;
        break;
    case 'F':
        if (temp < -459.67) return 0;
        break;
    case 'K':
        if (temp < 0) return 0;
        break;
    }

    return 1;
}

float pobierz(char stopnie) {
    float wartosc;
    switch (stopnie) {
    case 'C':
        cout << "Podaj wartosc stopni w Celsius: ";
        break;
    case 'F':
        cout << "Podaj wartosc stopni w Fahr: ";
        break;
    case 'K':
        cout << "Podaj wartosc stopni w Kelvin: ";
        break;
    }

    cin >> wartosc;
    return wartosc;
}



void menu() {
    cout << "1 - przelicz Fahr -> Celsius" << endl;
    cout << "2 - przelicz Fahr -> Kelwin" << endl;
    cout << "3 - przelicz Celsius -> Fahr" << endl;
    cout << "4 - przelicz Celsius -> Kelwin" << endl;
    cout << "5 - przelicz Kelwin -> Celsius" << endl;
    cout << "6 - przelicz Kelwin -> Fahr" << endl;
    cout << "7 - zakończ działanie programu" << endl;
}

float FtoC(float F) {
    float C = (5.0 / 9.0) * (F - 32.0);
    return C;
}

float FtoK(float F) {
    float K = (F + 459.67) * 5.0 / 9.0;
    return K;
}

float CtoF(float C) {
    float F = C * 9.0 / 5.0 + 32.0;
    return F;
}

float CtoK(float C) {
    float K = C + 273.15;
    return K;
}

float KtoC(float K) {
    float C = K - 273.15;
    return C;
}

float KtoF(float K) {
    float F = K * 9.0 / 5.0 - 459.67;
    return F;
}


