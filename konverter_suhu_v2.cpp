#include <iostream>
using namespace std;
int main() {
    int halooo;
    double temperature, reamur, fahrenheit, kelvin, celcius;

    do {
        cout << "===== Temperature Unit Converter =====" << endl;
        cout << "1. Celsius to Other" << endl;
        cout << "2. Reamur to Other" << endl;
        cout << "3. Fahrenheit to Other" << endl;
        cout << "4. Kelvin to Other" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if(cin.fail()){
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid Input. Please Try Again" << endl;
            continue;
        }
        switch (choice) {
            case 1:
                cout << "Enter temperature in Celsius: ";
                cin >> temperature;
                if(cin.fail()){
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "---Invalid Input. Please Try Again---" << endl;
                    break;
                }
                reamur = temperature * 4/5;
                fahrenheit = temperature * 9/5 + 32;
                kelvin = temperature + 273.15;
                cout << "\nReamur\t\t :" << reamur << " \370R" << "\nFahrenheit\t :" << fahrenheit << " \370F" << "\nKelvin\t\t :" << kelvin << " K" << endl;
                break;
            case 2:
                cout << "Enter temperature in Reamur: ";
                cin >> temperature;
                if(cin.fail()){
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "---Invalid Input. Please Try Again---" << endl;
                    break;
                }
                celcius = temperature * 5/4;
                fahrenheit = temperature * 9/4 + 32;
                kelvin = temperature * 5/4 + 273.15;
                cout << "\nCelcius\t\t :" << celcius << " \370C" << "\nFahrenheit\t :" << fahrenheit << " \370F" << "\nKelvin\t\t :" << kelvin << " K" << endl;
                break;
            case 3:
                cout << "Enter temperature in Fahrenheit: ";
                cin >> temperature;
                if(cin.fail()){
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "---Invalid Input. Please Try Again---" << endl;
                    break;
                }
                celcius = (temperature - 32) * 5/9;
                reamur = (temperature - 32) * 4/9;
                kelvin = (temperature - 32) * 5/9 + 273.15;
                cout << "\nCelcius\t\t :" << celcius << " \370C" << "\nReamur\t\t :" << reamur << " \370R" << "\nKelvin\t\t :" << kelvin << " K" << endl;
                break;
            case 4:
                cout << "Enter temperature in Kelvin: ";
                cin >> temperature;
                if(cin.fail()){
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "---Invalid Input. Please Try Again---" << endl;
                    break;
                }
                celcius = temperature - 273.15;
                reamur = (temperature - 273.15) * 4/5;
                fahrenheit = (temperature - 273.15) * 9/5 + 32;   
                cout << "\nCelcius\t\t :" << celcius << " \370C" << "\nReamur\t\t :" << reamur << " \370R" << "\nFahrenheit\t :" << fahrenheit << " \370F" << endl;
                break;
            case 5:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}
