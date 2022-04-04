#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

void loading()
{
    char a = 177, b = 219;
    cout << "\n\t\t\t\t\t\tDAY LA TOI CUA MOT NAM TRUOC\n\n";
    cout << "\t\t\t\t\t";
    for (int i = 0; i < 26; i++)
        cout << a;
    cout << "\r";
    cout << "\t\t\t\t\t";
    for (int i = 0; i < 26; i++)
    {
        cout << b;
        Sleep(100);
    }
    cout << "\nDa load xong!!!";
    Sleep(500);
    
    system("color F");
}

int main()
{
    cout << "Nhan phim Enter de bat dau...";
    cin.ignore();
    loading();
    cout << endl;
    fstream newfile;
    newfile.open("huong.txt", ios::in);
    if (newfile.is_open())
    {
        string tp;
        while (getline(newfile, tp))
        {
            cout << tp << endl;
            Sleep(20);
        }
        newfile.close();
    }
    system("pause");
    return 0;
}
