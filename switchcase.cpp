#include <iostream>
using namespace std;

int main()
{
    // ==========================================
    // 1. Calculator using Switch
    // ==========================================
    {
        cout << "--- Switch Calculator ---" << endl;
        double num1 = 10, num2 = 5;
        char op = '+';

        // [TUTORIAL] 'switch' is cleaner than if-else when comparing a single variable against exact values.
        // Don't forget the 'break;' or execution will fall through to the next case!
        switch (op)
        {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:
            cout << "Invalid Operator" << endl;
        }
        cout << endl;
    }

    // ==========================================
    // 2. Day of the Week
    // ==========================================
    {
        cout << "--- Day of the Week ---" << endl;
        int dayNum = 3;

        switch (dayNum)
        {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day number." << endl;
        }
        cout << endl;
    }

    // ==========================================
    // 3. Vowel Check Using Switch (Fall-through)
    // ==========================================
    {
        cout << "--- Vowel Check ---" << endl;
        char ch = 'o';

        // [TUTORIAL] Here we INTENTIONALLY omit the 'break' statement on the vowels.
        // This is called "Fall-through". If ch is 'a', it falls all the way down to 'U' and prints Vowel.
        switch (tolower(ch))
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << ch << " is a Vowel" << endl;
            break;
        default:
            cout << ch << " is a Consonant" << endl;
        }
        cout << endl;
    }

    // ==========================================
    // 4. Number of Days in a Month
    // ==========================================
    {
        cout << "--- Days in a Month ---" << endl;
        int month = 2;
        int year = 2024;

        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: // Months with 31 days
            cout << "31 Days" << endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11: // Months with 30 days
            cout << "30 Days" << endl;
            break;
        case 2: // February
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                cout << "29 Days (Leap Year)" << endl;
            else
                cout << "28 Days" << endl;
            break;
        default:
            cout << "Invalid month number." << endl;
        }
        cout << endl;
    }

    // ==========================================
    // 5. Basic Menu Driven Program
    // ==========================================
    {
        cout << "--- Simple Menu ---" << endl;
        int choice = 1; // Hardcoded for this example

        switch (choice)
        {
        case 1:
            cout << "Hello!" << endl;
            break;
        case 2:
            cout << "Bye!" << endl;
            break;
        default:
            cout << "Invalid option." << endl;
        }
    }

    return 0;
}