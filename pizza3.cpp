/*
Pizza app -- Calculate pizza prices (3 toppings possible)
Safyre Lyons
No Rights Reserved
*/

double pep = 0.32;
double chez = 0.50;
double sal = 0.21;

double finArray[] ={0,0,0};
double amt;
#include <iostream>
#include <iomanip>
using namespace std;

int final(){
    double total1 = pep * finArray[0];
    double total2 = sal * finArray[2];
    double total3 = chez * finArray[1];
    double total = total1 + total2 + total3;
    double lst = total + 5.23;
    cout << fixed << setprecision(2) << lst << endl;
    return 0;
}

int main(){
    int egg;
    cout << "Welcome to pizza" << endl <<
    "1. Add peperoni" << endl <<
    "2. Add extra cheese" << endl <<
    "3. Add salami" << endl <<
    "4. Done" << endl;
    cin >> egg;

    if(egg == 1){
        cout << "Amount? : ";
        cin >> amt;
        finArray[0] = amt;
        main();
    }
    if(egg == 2){
        cout << "Amount? : ";
        cin >> amt;
        finArray[1] = amt;
        main();
    }
    if(egg == 3){
        cout << "Amount? : ";
        cin >> amt;
        finArray[2] = amt;
        main();
    }
    if(egg == 4){
        final();
    }
    if(egg < 1 || egg > 4){
        return 1;
    }

    return 0;
}
