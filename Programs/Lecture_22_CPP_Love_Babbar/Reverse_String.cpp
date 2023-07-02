#include <iostream>
using namespace std;

bool isPalindrome(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        if (tolower(name[s]) == tolower(name[e]))
        {
            s++;
            e--;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

char *reverseString(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
    return name;
}

int getLength(char name[])
{
    int count = 0;
    int i = 0;

    while (name[i] != '\0')
    {
        count++;
        i++;
    }

    int len = count;
}

int main()
{
    char name[20];
    cout << "Enter your name: ";
    cin >> name;
    int len = getLength(name);

    // Length of Name
    cout << "Your Name Length is: " << len << endl;

    // Reversed Name
    cout << "Your Reversed Name is: " << reverseString(name, len) << endl;

    // Check Palindrome
    if (isPalindrome(name, len))
    {
        cout << "Your Name is a Palindrome." << endl;
    }
    else
    {
        cout << "Your Name is not a Palindrome." << endl;
    }
}