#include<iostream>
#include<string>
#include<vector>
#include<cmath>

using namespace std;

//STORAGE:
vector <int> integers;
vector <double> floats;
vector <string> strings;
vector <bool> bools;

bool math = false; //library math


int main() {
    bool running = true;

    cout << "Sandwich 1.0 [made by timnik]" << endl;
    cout << "Type: help to see all the commands." << endl;
    
    while(running) {
        string token;
        cout << ">>> ";
        cin >> token;

        if(token == "say") {
            string output;
            getline(cin, output);

            cout << output;
            cout << endl;
        }

        else if(token == "sum") {
            double number1, number2;
            cin >> number1 >> number2;
            cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
        }

        else if(token == "dif") {
            double number1, number2;
            cin >> number1 >> number2;
            cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;
        }

        else if(token == "mul") {
            double number1, number2;
            cin >> number1 >> number2;
            cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;
        }

        else if(token == "div") {
            double number1, number2;
            cin >> number1 >> number2;
            cout << number1 << " / " << number2 << " = " << number1 / number2 << endl;
        }

        else if(token == "pow") {
            if(math == false) {
                cout << "The library: \'math\' is not imported." << endl;
            }
            else {
                double number, exponent;
                cin >> number >> exponent;
                cout << pow(number, exponent) << endl;
            }
        }

        else if(token == "sqrt") {
            if(math == false) {
                cout << "The library: \'math\' is not imported." << endl;
            }
            else {
                double number;
                cin >> number;
                cout << sqrt(number) << endl;
            }
        }

        else if(token == "exp") {
            if(math == false) {
                cout << "The library: \'math\' is not imported." << endl;
            }
            else {
                double number;
                cin >> number;
                cout << exp(number) << endl;
            } 
        }

        else if(token == "sin") {
            if(math == false) {
                cout << "The library: \'math\' is not imported." << endl;
            }
            else {
                double number;
                cin >> number;
                cout << sin(number) << endl;
            } 
        }

        else if(token == "cos") {
            if(math == false) {
                cout << "The library: \'math\' is not imported." << endl;
            }
            else {
                double number;
                cin >> number;
                cout << cos(number) << endl;
            } 
        }

        else if(token == "tan") {
            if(math == false) {
                cout << "The library: \'math\' is not imported." << endl;
            }
            else {
                double number;
                cin >> number;
                cout << tan(number) << endl;
            } 
        }

        else if(token == "import") {
            string library;
            cin >> library;
            if(library == "math") {
                math = true;
            }
            else {
                cout << "No library named: \'" << library << "\'" << endl;
            }
        }

        else if(token =="quit") {
            cout << "Quiting...";
            running = false;
        } 




        else {
            cout << "NameError: name '" << token << "' is not defined" << endl;
        }
    }
}