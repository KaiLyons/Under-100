#include <iostream>
using namespace std;
int notes(){
    string note;
    cout << note;
    cin >> note;
    notes();
    return 0;
}
int main(){
    system("clear");
    notes();
    return 0;
}
