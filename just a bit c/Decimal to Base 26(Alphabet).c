// https://ideone.com/E5EwrG
#include <stdio.h>

void print(int n)
{
    if(n < 26)
        printf("%c", n + 'A');
    else
    {
        print(n / 26 - 1);

        print(n % 26);
    }

}

int main()
{
    int n;

    scanf("%d", &n);

    print(n);

    return 0;
}
