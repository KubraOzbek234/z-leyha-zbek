/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
    using namespace std;

    int sayi1;
    int sayi2;

    cout << "Lutfen iki sayi giriniz: ";
    cin >> sayi1 >> sayi2;

    int puanOrtalamasi = (sayi1 + sayi2) / 2;

    if (puanOrtalamasi >= 50)
    {
        cout << "Sinifi gectiniz :-> " << endl;
    }
    else
    {
        cout << "Sinifta kaldiniz :-<" << endl;
    }
    {          
         setlocale(LC_ALL,"Turkish");
    int s1,s2, ort;
    cout<<"1. Sayıyı Girin :";
    cin>>s1;
    cout <<"2. Sayıyı:";
    cin>>s2;
    ort=(s1+s2)/2;
    cout<<"Sayıların Ortalaması:"<<ort;
        
    }
    return 0;
}

