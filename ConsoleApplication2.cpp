#include <iostream>
#include <string>
#include <windows.h>

using namespace std;
int main()
{
    //setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string in;
    int n;
    cin >> in;
    cin >> n;
    char x;
    char a[33] = {  'А', 'Б', 'В',  'Г', 'Д', 'Е',  'Ё', 'Ж', 'З',
     'И', 'Й', 'К', 'Л', 'М', 'Н',  'О', 'П', 'Р',
     'С', 'Т', 'У', 'Ф', 'Х', 'Ц',  'Ч', 'Ш', 'Щ', 
     'Ъ', 'Ы', 'Ь', 'Э', 'Ю', 'Я', };
    char b[33] = {  'а', 'б', 'в',  'г', 'д', 'е',  'ё', 'ж', 'з',
     'и', 'й', 'к', 'л', 'м', 'н',  'о', 'п', 'р',
     'с', 'т', 'у', 'ф', 'х', 'ц',  'ч', 'ш', 'щ',
     'ъ', 'ы', 'ь', 'э', 'ю', 'я', };

    for (int i = 0; i <= in.size(); i++) {
        x = in[i];
        if (in[i] + n > a[32]) {
            int j = 0;
            while ((int)in[i] + j != (int)a[32])
            {
                j++;
            }
            x = a[0 + n - j - 1]  ;
        }
        else {
            x = (int)in[i] + n;
        }
        cout << x;
        }
        
    
    return 0;
}
