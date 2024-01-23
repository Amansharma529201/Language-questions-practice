//Write a program to check wheter a character is a vowel of a constant
#include <iostream>

using namespace std;

int main()
{
    /*char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        cout << ch << " is a vowel";
    else
        cout << ch << " is not a vowel";*/        
    
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    switch (ch)
    {
    case 'a':
        cout<<"It is a vowel"<<endl;
        break;
    case 'e':
        cout<<"It is a vowel"<<endl;
        break;
    case 'i':
        cout<<"It is a vowel"<<endl;
        break;
    case 'o':
        cout<<"It is a vowel"<<endl;
        break;
    case 'u':
        cout<<"It is a vowel"<<endl;
        break;
    
    default:
    cout<<"It is a consonant"<<endl;
        break;
    }
    return 0;
}