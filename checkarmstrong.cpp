#include <bits/stdc++.h>
bool checkArmstrong(int n)
{
    // Write your code here
    int rem = 0, cub = 0, dup = 0, sum = 0, numDigits = 0;
    dup = n;
    if (dup == 0)
    {
        return true;
    }
    else
    {
        while (n > 0)
        {
            n = n / 10;
            numDigits++;
        }
        n = dup;
        while (n > 0)
        {
            rem = n % 10;
            cub = pow(rem, numDigits);
            sum = sum + cub;
            n = n / 10;
        }
        if (dup == sum)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
checkArmstrong(371);