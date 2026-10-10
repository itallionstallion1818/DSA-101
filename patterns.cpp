#include <iostream>
using namespace std;

int main()
{
    // ==========================================
    // 1. Sum of a Series: 1 + (1+2) + (1+2+3)...
    // ==========================================
    {
        cout << "--- 1. Sum of a Series ---" << endl;
        int n = 4;
        int grandTotal = 0;

        // [TUTORIAL] Outer loop tracks the current term (1st, 2nd, 3rd...).
        // Inner loop calculates the sum for that specific term.
        for (int i = 1; i <= n; i++)
        {
            int currentTermSum = 0;
            for (int j = 1; j <= i; j++)
            {
                currentTermSum += j;
            }
            grandTotal += currentTermSum;
        }
        cout << "Grand Total for N=" << n << " is: " << grandTotal << "\n\n";
    }

    // ==========================================
    // 2. Count Multiples in a Range
    // ==========================================
    {
        cout << "--- 2. Count Multiples ---" << endl;
        int rangeStart = 1, rangeEnd = 20;
        int target = 3;
        int count = 0;

        // [TUTORIAL] Scan every number in the range. If the remainder is 0, it's a multiple.
        for (int i = rangeStart; i <= rangeEnd; i++)
        {
            if (i % target == 0)
            {
                cout << i << " ";
                count++;
            }
        }
        cout << "\nTotal multiples of " << target << " found: " << count << "\n\n";
    }

    // ==========================================
    // 3. Print a Simple Number Triangle
    // ==========================================
    {
        cout << "--- 3. Simple Number Triangle ---" << endl;
        int n = 5;

        // [TUTORIAL] Printing the inner loop variable 'j' makes the hidden state visible.
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // ==========================================
    // 4. Solid Square of Stars
    // ==========================================
    {
        cout << "--- 4. Solid Square ---" << endl;
        int n = 4;

        // [TUTORIAL] Independent boundaries. Inner loop always runs exactly 'n' times.
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
                cout << "* ";
            cout << endl;
        }
        cout << endl;
    }

    // ==========================================
    // 5. Right-Angled Triangle
    // ==========================================
    {
        cout << "--- 5. Right-Angled Triangle ---" << endl;
        int n = 5;

        // [TUTORIAL] Dependent boundary. Inner loop limit is 'i', so it grows by 1 each row.
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
                cout << "* ";
            cout << endl;
        }
        cout << endl;
    }

    // ==========================================
    // 6. Inverted Right-Angled Triangle
    // ==========================================
    {
        cout << "--- 6. Inverted Right-Angled Triangle ---" << endl;
        int n = 5;

        // [TUTORIAL] We don't change the inner loop! We just count the outer loop backwards.
        for (int i = n; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
                cout << "* ";
            cout << endl;
        }
        cout << endl;
    }

    // ==========================================
    // 7. Pyramid of Stars
    // ==========================================
    {
        cout << "--- 7. Pyramid of Stars ---" << endl;
        int n = 5;

        // [TUTORIAL] Sequential Inner Loops!
        // Loop 1 pushes to the center with spaces. Loop 2 drops the ink.
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n - i; j++)
                cout << "  "; // Spaces: N - i
            for (int k = 1; k <= (2 * i - 1); k++)
                cout << "* "; // Stars: 2*i - 1
            cout << endl;
        }
        cout << endl;
    }

    // ==========================================
    // 8. Inverted Pyramid
    // ==========================================
    {
        cout << "--- 8. Inverted Pyramid ---" << endl;
        int n = 5;

        // [TUTORIAL] Start 'i' at maximum and count down. The math formulas handle the rest!
        for (int i = n; i >= 1; i--)
        {
            for (int j = 1; j <= n - i; j++)
                cout << "  ";
            for (int k = 1; k <= (2 * i - 1); k++)
                cout << "* ";
            cout << endl;
        }
        cout << endl;
    }

    // ==========================================
    // 9. Number Pyramid
    // ==========================================
    {
        cout << "--- 9. Number Pyramid ---" << endl;
        int n = 5;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n - i; j++)
                cout << "  ";
            for (int k = 1; k <= (2 * i - 1); k++)
                cout << k << " ";
            cout << endl;
        }
        cout << endl;
    }

    // ==========================================
    // 10. Full Diamond of Stars
    // ==========================================
    {
        cout << "--- 10. Full Diamond ---" << endl;
        int n = 5;

        // [TUTORIAL] A diamond is just a Pyramid stacked on top of an Inverted Pyramid.
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n - i; j++)
                cout << "  ";
            for (int k = 1; k <= (2 * i - 1); k++)
                cout << "* ";
            cout << endl;
        }

        // Bottom Half (Start at n-1 so we don't repeat the wide middle row)
        for (int i = n - 1; i >= 1; i--)
        {
            for (int j = 1; j <= n - i; j++)
                cout << "  ";
            for (int k = 1; k <= (2 * i - 1); k++)
                cout << "* ";
            cout << endl;
        }
        cout << endl;
    }

    // ==========================================
    // 11. Hollow Triangle
    // ==========================================
    {
        cout << "--- 11. Hollow Triangle ---" << endl;
        int n = 5;

        // [TUTORIAL] Equation of the 3 borders:
        // Left wall (j==1), Bottom floor (i==n), Diagonal hypotenuse (j==i)
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                if (j == 1 || i == n || j == i)
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // ==========================================
    // 12. Hollow Pyramid
    // ==========================================
    {
        cout << "--- 12. Hollow Pyramid ---" << endl;
        int n = 5;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n - i; j++)
                cout << "  "; // The Pusher

            // [TUTORIAL] We only drop ink on the edges:
            // First star (k==1), Last star (k==2*i-1), or Bottom Floor (i==n)
            for (int k = 1; k <= (2 * i - 1); k++)
            {
                if (k == 1 || k == (2 * i - 1) || i == n)
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // ==========================================
    // 13. Alphabet Pattern (Triangle)
    // ==========================================
    {
        cout << "--- 13. Alphabet Pattern ---" << endl;
        int n = 5;

        // [TUTORIAL] Characters act like numbers under the hood (ASCII).
        for (int i = 1; i <= n; i++)
        {
            char ch = 'A';
            for (int j = 1; j <= i; j++)
            {
                cout << ch << " ";
                ch++; // Moves from A to B to C...
            }
            cout << endl;
        }
        cout << endl;
    }

    // ==========================================
    // 14. Number Pattern (0-1 Alternating)
    // ==========================================
    {
        cout << "--- 14. 0-1 Number Pattern ---" << endl;
        int n = 5;

        // [TUTORIAL] Coordinate math: If the sum of coordinates (i + j) is even, print 1.
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                if ((i + j) % 2 == 0)
                    cout << "1 ";
                else
                    cout << "0 ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // ==========================================
    // 15. Butterfly Pattern
    // ==========================================
    {
        cout << "--- 15. Butterfly Pattern ---" << endl;
        int n = 4;

        // [TUTORIAL] 3 zones per row: Left Wing (i stars) | Gap (2*(n-i) spaces) | Right Wing (i stars)
        // TOP HALF
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
                cout << "* ";
            for (int j = 1; j <= 2 * (n - i); j++)
                cout << "  ";
            for (int j = 1; j <= i; j++)
                cout << "* ";
            cout << endl;
        }
        // BOTTOM HALF
        for (int i = n; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
                cout << "* ";
            for (int j = 1; j <= 2 * (n - i); j++)
                cout << "  ";
            for (int j = 1; j <= i; j++)
                cout << "* ";
            cout << endl;
        }
        cout << endl;
    }

    // ==========================================
    // 16. Pascal-Style Number Pattern
    // ==========================================
    {
        cout << "--- 16. Pascal's Triangle ---" << endl;
        int n = 5;

        // [TUTORIAL] Iterative Binomial formula: current_value = previous_value * (row - col) / col
        for (int i = 1; i <= n; i++)
        {
            for (int space = 1; space <= n - i; space++)
                cout << "  ";

            int val = 1; // Every row always starts with a 1
            for (int j = 1; j <= i; j++)
            {
                cout << val << "   ";
                val = val * (i - j) / j; // Calculate the NEXT value
            }
            cout << endl;
        }
        cout << endl;
    }

    // ==========================================
    // 17. Half-Diamond (Right-Pointing)
    // ==========================================
    {
        cout << "--- 17. Half-Diamond ---" << endl;
        int n = 5;

        // [TUTORIAL] Looks like a ">" sign. Top half grows, bottom half shrinks. No spaces needed!
        // TOP HALF
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
                cout << "* ";
            cout << endl;
        }
        // BOTTOM HALF
        for (int i = n - 1; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
                cout << "* ";
            cout << endl;
        }
        cout << endl;
    }

    // ==========================================
    // 18. Right-Aligned Triangle
    // ==========================================
    {
        cout << "--- 18. Right-Aligned Triangle ---" << endl;
        int n = 5;

        // [TUTORIAL] We push the stars to the right edge by printing (n-i) spaces first.
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n - i; j++)
                cout << "  "; // The Pusher
            for (int k = 1; k <= i; k++)
                cout << "* "; // The Ink
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}