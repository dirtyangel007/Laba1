#include <iostream>
#include "str_a.h"
#include "str_b.h"
#include "str_d.h"

using namespace std;

int main()
{
    while (1)
    {
        cout << "Vvedite komandu" << "\n";
        cout << "0 - vihod\n";
        cout << "1 - podschitat kolichestvo glasnih bukv\n";
        cout << "2 - privesti k niznemu registru\n";
        cout << "3 - privesti k verhnemu registru\n";
        cout << "4 - proverka na palindrom\n";
        int c;
        cin >> c;
        string input;
        switch (c)
        {
        case 0:
        {
            return 0;
            break;
        }
        case 1:
        {
            cout << "Vvedite stroku\n";
            cin >> input;
            cout << "glasnih: " << vowelsCount(input) << "\n";
            break;
        }
        case 2:
        {
            cout << "Vvedite stroku\n";
            cin >> input;
            cout << "resultat - " << toLowerCase(input) << "\n";
            break;
        }
        case 3:
        {
            cout << "Vvedite stroku\n";
            cin >> input;
            cout << "resultat - " << toUpperCase(input) << "\n";
            break;
        }
        case 4:
        {
            cout << "Vvedite stroku\n";
            cin >> input;
            if (isPalindrome(input))
                cout << "stroka - palindrom\n";
            else
                cout << "stroka - ne palindrom\n";
            break;
        }
        }
    }
    cout << "¬ведите";
    string vowelsTest = "aEoIssdu";
    cout << "vowels count test: input - " << vowelsTest << "\tresult: " << vowelsCount(vowelsTest) << "\n";
    string caseTest = "asdfzASDFZ";
    cout << "case test: input - " << caseTest << "\tupper - " << toUpperCase(caseTest) << "\tlower - " << toLowerCase(caseTest) << "\n";
    string palindromeTest = "asdffdsa";
    cout << "palindrome test: input - " << palindromeTest << "\tresult - " << boolalpha << isPalindrome(palindromeTest);
    return 1;
}