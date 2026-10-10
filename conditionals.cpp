#include <iostream>
#include <algorithm> // For min/max
using namespace std;

int main()
{
    // ==========================================
    // 1. & 2. Maximum of Three & Largest Distinct
    // ==========================================
    {
        cout << "--- Maximum of Three ---" << endl;
        int a = 10, b = 25, c = 15;

        // [TUTORIAL] Nested if-else logic. We compare 'a' with 'b', then the winner with 'c'.
        if (a >= b && a >= c)
            cout << "Max is: " << a << endl;
        else if (b >= a && b >= c)
            cout << "Max is: " << b << endl;
        else
            cout << "Max is: " << c << endl;
        cout << endl;
    }

    // ==========================================
    // 3. Grade from Marks
    // ==========================================
    {
        cout << "--- Grade Calculator ---" << endl;
        int marks = 82;

        // [TUTORIAL] The order matters! If we put marks >= 50 at the top, a score of 95 would get a C.
        // Always check the strictest/highest condition first in an if-else ladder.
        if (marks >= 90)
            cout << "Grade: A" << endl;
        else if (marks >= 75)
            cout << "Grade: B" << endl;
        else if (marks >= 50)
            cout << "Grade: C" << endl;
        else
            cout << "Grade: F" << endl;
        cout << endl;
    }

    // ==========================================
    // 4. Triangle Validity & Type
    // ==========================================
    {
        cout << "--- Triangle Type ---" << endl;
        int a = 5, b = 5, c = 8;

        // [TUTORIAL] A triangle is valid ONLY if the sum of any two sides is strictly greater than the third.
        if (a + b > c && a + c > b && b + c > a)
        {
            if (a == b && b == c)
                cout << "Equilateral Triangle" << endl;
            else if (a == b || b == c || a == c)
                cout << "Isosceles Triangle" << endl;
            else
                cout << "Scalene Triangle" << endl;
        }
        else
        {
            cout << "Invalid Triangle lengths." << endl;
        }
        cout << endl;
    }

    // ==========================================
    // 5. Leap Year
    // ==========================================
    {
        cout << "--- Leap Year Checker ---" << endl;
        int year = 2024;

        // [TUTORIAL] A year is a leap year if it is divisible by 4.
        // EXCEPT if it is a century year (divisible by 100), then it must ALSO be divisible by 400.
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            cout << year << " is a Leap Year." << endl;
        }
        else
        {
            cout << year << " is NOT a Leap Year." << endl;
        }
        cout << endl;
    }

    // ==========================================
    // 6. Short Circuit Evaluation (Interview Question)
    // ==========================================
    {
        cout << "--- Interview Short Circuit Trick ---" << endl;
        /*
         * [TEACHER NOTE FOR STUDENTS]: Guys, technical interviews me direct code snippets dekar
         * dry run karne bolte hain. Ye question purely "Short-Circuiting" and "Pre/Post Increment" pe based hai.
         * Rule 1: '&&' (AND) stops evaluating the moment it sees a 0 (False).
         * Rule 2: '||' (OR) stops evaluating the moment it sees a 1 (True).
         */
        int a = 1, b = 0, c = -1, d = 4;

        // Trace 1: --a makes a=0 (False). '&&' short-circuits. b, c, d are NOT evaluated!
        if (--a && b++ && c-- && ++d)
            cout << "Hello";

        // Trace 2: a++ gives 0 (False), then a becomes 1.
        //          b-- gives 0 (False), then b becomes -1.
        //          ++c makes c=0, gives 0 (False). All false.
        else if (a++ || b-- || ++c)
            cout << "Hi";

        // Trace 3: c++ gives 0 (False), then c becomes 1. '&&' short-circuits immediately!
        else if (c++ && a-- && b++ && d--)
            cout << "World";

        // Trace 4: Fallback executed.
        else
            cout << "Welcome to Mirai";

        // Final Print
        cout << a << " " << b << " " << c << " " << d << endl;
        cout << endl;
    }

    // ==========================================
    // 7. Make Chocolate (CodingBat Problem)
    // ==========================================
    {
        cout << "--- Make Chocolate ---" << endl;
        int small = 4, big = 1, goal = 9;

        // [TUTORIAL] We want to use as many 5kg (big) chocolates as possible without exceeding the goal.
        int maxBigBarsWeCanUse = goal / 5;
        int actualBigBarsUsed = min(maxBigBarsWeCanUse, big);

        // Calculate the remaining weight we need to cover with 1kg (small) bars.
        int remainingGoal = goal - (actualBigBarsUsed * 5);

        // Do we have enough small bars to cover the rest?
        if (remainingGoal <= small)
        {
            cout << "Small chocolates used: " << remainingGoal << endl;
        }
        else
        {
            cout << -1 << " (Not enough chocolate)" << endl;
        }
        cout << endl;
    }

    // ==========================================
    // 8. Classify Character
    // ==========================================
    {
        cout << "--- Classify Character ---" << endl;
        char ch = 'E';

        if (ch >= '0' && ch <= '9')
        {
            cout << ch << " is a Digit" << endl;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            char lower = tolower(ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                cout << ch << " is a Vowel" << endl;
            else
                cout << ch << " is a Consonant" << endl;
        }
        else
        {
            cout << ch << " is a Special Character" << endl;
        }
        cout << endl;
    }

    // ==========================================
    // 9. Point Inside Rectangle?
    // ==========================================
    {
        cout << "--- Point in Rectangle ---" << endl;
        int px = 5, py = 5;
        int rx1 = 0, ry1 = 0;   // Bottom-left corner
        int rx2 = 10, ry2 = 10; // Top-right corner

        if (px > rx1 && px < rx2 && py > ry1 && py < ry2)
        {
            cout << "Inside" << endl;
        }
        else
        {
            cout << "Outside (or on border)" << endl;
        }
        cout << endl;
    }

    // ==========================================
    // 10. Ticket Price by Age
    // ==========================================
    {
        cout << "--- Ticket Price ---" << endl;
        int age = 15;

        if (age < 5)
            cout << "Free" << endl;
        else if (age >= 5 && age <= 12)
            cout << "Child Ticket: 100 INR" << endl;
        else if (age >= 13 && age <= 60)
            cout << "Adult Ticket: 250 INR" << endl;
        else
            cout << "Senior Citizen Ticket: 150 INR" << endl;
    }

    return 0;
}