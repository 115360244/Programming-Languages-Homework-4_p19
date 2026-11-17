#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    char string1[20];
    char string2[] = "string literal";
    int i;

    cout << "Enter a string: ";
    cin >> string1;

    cout << "string1 is: " << string1 << "\nstring2 is: " << string2 << "\n"
        << "string1 with spaces between characters is: \n";

    for (i = 0; string1[i] != '\0'; i++)
    {
        cout << string1[i] << " ";
    }

    cout << endl;
    system("pause");
    return 0;
}