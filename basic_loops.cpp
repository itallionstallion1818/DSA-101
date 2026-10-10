#include <iostream>
using namespace std;

int main()
{
    // ==========================================
    // 1. Print 1..N and Even Numbers to N
    // ==========================================
    {
        cout << "--- 1 to N and Evens ---" << endl;
        int n = 10;

        cout << "1 to N: ";
        for (int i = 1; i <= n; i++)
            cout << i << " ";

        cout << "\nEvens to N: ";
        for (int i = 2; i <= n; i += 2)
            cout << i << " ";
        cout << "\n\n";
    }

    // ==========================================
    // 2. Print N down to 1
    // ==========================================
    {
        cout << "--- N down to 1 ---" << endl;
        int n = 10;

        // [TUTORIAL] Instead of i++, we use i-- to count backwards.
        for (int i = n; i >= 1; i--)
            cout << i << " ";
        cout << "\n\n";
    }

    // ==========================================
    // 3. Sum of first N numbers & Factorial
    // ==========================================
    {
        cout << "--- Sum and Factorial ---" << endl;
        int n = 5;
        int sum = 0;
        long long fact = 1; // Factorials grow huge, use long long!

        for (int i = 1; i <= n; i++)
        {
            sum += i;
            fact *= i;
        }
        cout << "Sum: " << sum << ", Factorial: " << fact << "\n\n";
    }

    // ==========================================
    // 4. Multiplication Table
    // ==========================================
    {
        cout << "--- Multiplication Table ---" << endl;
        int n = 7;

        for (int i = 1; i <= 10; i++)
        {
            cout << n << " x " << i << " = " << (n * i) << endl;
        }
        cout << endl;
    }

    // ==========================================
    // 5. Print All Factors of N
    // ==========================================
    {
        cout << "--- Factors of N ---" << endl;
        int n = 24;

        // [TUTORIAL] A factor cleanly divides the number (remainder is 0).
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
                cout << i << " ";
        }
        cout << "\n\n";
    }

    // ==========================================
    // 6. Count Digits and Reverse a Number
    // ==========================================
    {
        cout << "--- Count & Reverse ---" << endl;
        int n = 4567;

        // [TUTORIAL] N % 10 isolates the last digit. N / 10 destroys the last digit.
        int count = 0;
        int reversedNum = 0;
        int temp = n; // Keep original safe

        while (temp > 0)
        {
            int lastDigit = temp % 10;
            reversedNum = (reversedNum * 10) + lastDigit; // Shift left and add
            count++;
            temp /= 10; // Shrink the number
        }
        cout << "Original: " << n << " | Digits: " << count << " | Reversed: " << reversedNum << "\n\n";
    }

    // ==========================================
    // 7. Check Armstrong Number
    // ==========================================
    {
        cout << "--- Armstrong Checker ---" << endl;
        int n = 153;

        // [TUTORIAL] An Armstrong number for a 3-digit number is equal to the sum of cubes of its digits.
        int temp = n;
        int sumOfCubes = 0;

        while (temp > 0)
        {
            int digit = temp % 10;
            sumOfCubes += (digit * digit * digit);
            temp /= 10;
        }

        if (sumOfCubes == n)
            cout << n << " is an Armstrong Number" << endl;
        else
            cout << n << " is NOT an Armstrong Number" << endl;
    }

    return 0;
}