#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include <iomanip>

using namespace std;

const int length = 25;
int main()
{
    char fileName[length], input;

    cout << "Ten tep tin:";
    cin >> setw(length) >> fileName;

    // Mo tep tin
    ofstream fileOut(fileName, ios::out); // Khai bao va mo tep tin
    if (!fileOut) {
        cout << "Khong mo duoc tep tin" << fileName <<endl;
        exit(1);
    }


    //Ghi du lieu
    do{
        cin >> input;
        fileOut<<input<<endl;
    } while ((input!='e')&&(fileOut));
    fileOut<<endl;

    //Dong tep tin
    fileOut.close();
    return 0;
}
