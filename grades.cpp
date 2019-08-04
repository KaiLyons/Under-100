#include <iostream>
#include <fstream>
#include <chrono>
#include <ctime>

using namespace std;
string sID;
string sfn;
string sln;
auto timenow = chrono::system_clock::to_time_t(chrono::system_clock::now());

int main();

int edit(){
    cout << "Student ID :";
    cin >> sID;
    cout << "New grade :";
    char grd;
    cin >> grd;

    ofstream file;
    file.open(sID, ios::app);
    file << "\n-------------------" << endl << "Time " << ctime(&timenow) << "GRADE : " << grd;
    file.close();
    main();
    return 0;
}

int add(){
    cout << "--Add Student--" << endl;
    cout << "Student's first name :";
    cin >> sfn;
    cout << "Last name :";
    cin >> sln;
    cout << "Five digit student ID :";
    cin >> sID;

    ofstream file;
    file.open(sID);
    file << "Name: " << sln << ", " << sfn << " || ID: " << sID << "\nGrade: A - " << ctime(&timenow);
    file.close();
    system("clear");
    main();
    return 0;
}

int ass(){
    cout << "\n-------------------" << endl << "Name of assingment :";
    string asse;
    cin >> asse;
    cout << "for student (by 5 digit ID):";
    cin >> sID;

    ofstream file;
    file.open(sID, ios::app);
    file << "\n-------------------" << endl << "Time " << ctime(&timenow) << "ASSIGNMENT ADDED : " << asse;
    file.close();
    main();

    return 0;
}

int main(){
    system("clear");
    cout <<
    "1 - Add a student" << endl <<
    "2 - Add assignment" << endl <<
    "3 - Edit a grade " << endl <<
    "4 - Quit"
    << endl;
    int opt;
    cout << "option :";
    cin >> opt;
    if(opt == 1){
        add();
    }

    if(opt == 2){
        ass();
    }

    if(opt == 3){
        edit();
    }

    if(opt == 4){
        return 1;
    }

    if(opt > 4 || opt < 1){
        main();
    }
    return 0;
}
