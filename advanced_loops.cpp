#include <iostream>
using namespace std;

int main()
{
    // ==========================================
    // 1. Sum of Digits with while
    // ==========================================
    {
        cout << "--- Sum of Digits ---" << endl;
        int n = 456;
        int sum = 0;
        int temp = n;

        while (temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        cout << "Sum of digits of " << n << " is " << sum << "\n\n";
    }

    // ==========================================
    // 2. Add Digits (Repeated sum until single digit)
    // ==========================================
    {
        cout << "--- Repeated Add Digits ---" << endl;
        int n = 38; // 3+8=11, 1+1=2

        // [TUTORIAL] We loop to calculate the sum. If the sum is >= 10,
        // it replaces 'n' and we loop again until it breaks down to a single digit.
        while (n >= 10)
        {
            int currentSum = 0;
            while (n > 0)
            {
                currentSum += n % 10;
                n /= 10;
            }
            n = currentSum;
        }
        cout << "Final single digit: " << n << "\n\n";
    }

    // ==========================================
    // 3A. Diff of Even and Odd Place Digits (using FOR LOOP)
    // ==========================================
    {
        cout << "--- Alternating Digit Diff (For Loop) ---" << endl;
        int n = 4567;
        int oddSum = 0, evenSum = 0;
        int pos = 1; // Tracks position from right

        /*
         * [TUTORIAL] "Place" means 1st place, 2nd place starting from the RIGHT.
         * We convert a while loop into a for loop by leaving initialization blank!
         */
        for (; n > 0; n /= 10)
        {
            int digit = n % 10;
            if (pos % 2 == 0)
                evenSum += digit;
            else
                oddSum += digit;
            pos++;
        }
        cout << "Difference (OddSum - EvenSum): " << (oddSum - evenSum) << "\n\n";
    }

    // ==========================================
    // 3B. Diff of Even and Odd Place Digits (using DO-WHILE LOOP)
    // ==========================================
    {
        cout << "--- Alternating Digit Diff (Do-While Loop) ---" << endl;
        int n = 4567;
        int oddSum = 0, evenSum = 0;
        int pos = 1;

        // [TUTORIAL] Do-While ensures it runs at least once, even if n is 0.
        do
        {
            int digit = n % 10;
            if (pos % 2 == 0)
                evenSum += digit;
            else
                oddSum += digit;

            pos++;
            n /= 10;
        } while (n > 0);

        cout << "Difference (OddSum - EvenSum): " << (oddSum - evenSum) << "\n\n";
    }

    // ==========================================
    // 4. GCD by Repeated Subtraction
    // ==========================================
    {
        cout << "--- GCD (Euclidean Subtraction) ---" << endl;
        int a = 48, b = 18;

        // [TUTORIAL] Instead of dividing, we repeatedly subtract the smaller number
        // from the larger number until they are equal. That equal value is the GCD.
        if (a != 0 && b != 0)
        {
            while (a != b)
            {
                if (a > b)
                    a = a - b;
                else
                    b = b - a;
            }
            cout << "GCD is " << a << "\n\n";
        }
    }

    // ==========================================
    // 5. Binary Form of a Number Using While
    // ==========================================
    {
        cout << "--- Decimal to Binary ---" << endl;
        int n = 10;

        if (n == 0)
        {
            cout << 0 << "\n\n";
        }
        else
        {
            long long binary = 0;
            long long place = 1; // 1, 10, 100, 1000...
            int temp = n;

            while (temp > 0)
            {
                int rem = temp % 2;
                binary += (rem * place);

                place *= 10; // Shift one place to the left
                temp /= 2;
            }

            cout << n << " in Binary is: " << binary << endl;
        }
    }

    return 0;
}