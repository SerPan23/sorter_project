#include <Windows.h>
#include <iostream>
void SetColor(int text, int bg) {
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((bg << 4) | text));
}
using namespace std;
int main(){
    while(true){
        int ch;
        SetColor(15, 0);
        cout << "What programm do you want to run? \n1. Sortic\n2. Check sortic\n0. Stop this app\n";
        cin >> ch;
        SetColor(7, 0);
        cout << "-------------------------------------" << endl;
        if(ch == 1)
            system("E:\\Projects\\C++_codes\\sorter_project\\Sortic\\Sortic\\x64\\Debug\\Sortic.exe");//WinExec ( "E:\\Projects\\C++_codes\\sorter_project\\Sortic\\Sortic\\x64\\Debug\\Sortic.exe", SW_SHOWNORMAL );
        else if(ch == 2)
            system("E:\\Projects\\C++_codes\\sorter_project\\Check_sortic\\Check_sortic\\x64\\Debug\\Check_sortic.exe");//WinExec ( "E:\\Projects\\C++_codes\\sorter_project\\Check_sortic\\Check_sortic\\x64\Debug\\Check_sortic.exe", SW_SHOWNORMAL );
        else
            exit(0);
        cout << endl << "-------------------------------------" << endl << endl;
    }
    return 0;
}
