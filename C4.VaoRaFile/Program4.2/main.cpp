#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

const int length = 25;

int main()
{
    ios::sync_with_stdio(); cin.tie(NULL);
    char fileName[length], output;

    cout << "Ten tep tin: ";
    cin >> setw(length) >> fileName; // nhap ten tep tin

    /*Mo tep tin*/
    ifstream fileIn(fileName, ios::in);

    if (!fileIn) {
        cout << "Khong mo duoc tep tin " <<fileName << endl;
        exit(1);
    }

    /* Doc du lieu tu tep ra man hinh*/
    while (fileIn) {
        fileIn >> output; //Doc ky tu tu tep tin
        cout << output; // in ra man hinh he thong
    }
    cout << endl;
    fileIn.close(); // Dong tep tin
    return 0;
}
