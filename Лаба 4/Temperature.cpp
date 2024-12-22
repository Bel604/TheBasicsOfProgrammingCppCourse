// Програма "Temperature"
#include <iostream>
using namespace std;

int main() {
    // a. Запит температури у користувача
    double temperature;
    cout << "Input the temperature / C: ";
    cin >> temperature;

    // b. Аналіз температури
    if (temperature < -30) {
        cout << "Extremeдн low temperature: it is danderous outside!" << endl;
    }
    else if (temperature >= -30 && temperature < 0) {
        cout << "It is cold: prepare warm clothes." << endl;
    }
    else if (temperature >= 0 && temperature <= 25) {
        cout << "The temperature is comfortable: you may go outside." << endl;
    }
    else if (temperature > 25 && temperature <= 35) {
        cout << "It is warm: be careful about sun." << endl;
    }
    else {
        cout << "Extremely high temperature: be in the shade!" << endl;
    }

    return 0;
}
