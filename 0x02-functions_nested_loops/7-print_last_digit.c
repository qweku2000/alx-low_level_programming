#include <stdio.h>

int print_last_digit(int num)
{
    if (num < 0)
    {
        int abs_num = -num;
        if (abs_num % 10 < 0)
        {
            int abs_last_digit = -(abs_num % 10);
            abs_num = abs_num / 10 * 10 + abs_last_digit;
        }
        _putchar(abs_num % 10 + '0');
        return abs_num % 10;
    }
    else
    {
        _putchar(num % 10 + '0');
        return num % 10;
    }
}

void test_islower(int n)
{
    int r;
    r = _islower(n);
    _putchar(r + '0');
    _putchar('\n');
}

int main(void)
{
    test_islower('H');
    return 0;
}
