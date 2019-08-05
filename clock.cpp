#include <iostream>
#include <ctime>
#include <chrono>
#include <unistd.h>
using namespace std;
int main(){
    system("clear");
    auto time = chrono::system_clock::to_time_t(chrono::system_clock::now());
    cout << ctime(&time);
    usleep(3);
    main();
    return 0;
}
