#include <iostream>
using namespace std;
int main();
int main(){
    int tickets;
    int price;
    cout << "Tickets sold today : ";
    cin >> tickets;
    cout << "For how much? : ";
    cin >> price;
    int total = tickets * price;
    cout << "Total earnings : $" << total << endl;
}