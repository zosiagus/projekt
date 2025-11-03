// projekt.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
float FtoC(float stopnie); 
float FtoK(float stopnie);
float CtoF(float stopnie);
float CtoK(float stopnie);
float KtoC(float stopnie);
float KtoF(float stopnie);




int main()
float fahr, celsius, kelwin;
    for (fahr = 0.0; fahr <= 200.0; fahr = fahr + 20.0) {
        celsius = FtoC(fahr); 
        cout << fahr << "    " << celsius << endl;
    }
    return 0;
    
}
float FtoC(float stopnie) {
    float wynik = (5.0 / 9.0) * (stopnie - 32.0);
    return wynik;
    }
    
    

float FtoK(float stopnie) {
    float wynik = (5.0 / 9.0) * (stopnie + 459.67);
    return wynik;
    
}
float CtoF(float stopnie) {
    float wynik = (stopnie * 9.0 / 5.0 + 32.0)
        return wynik;
}
float CtoK(float stopnie) {
    float wynik = (stopnie + 273.15)
        return wynik;
}
float KtoC(float stopnie) {
    float wynik = (stopnie – 273.15)
        return wynik;
}
float KtoF(float stopnie) {
    float wynik = (stopnie * 9.0 / 5.0 – 459.67)
        return;
}
                

