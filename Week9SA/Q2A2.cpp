
#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

void hanoi(int n)
{
    int i, total = 1;
    int s, d, a, temp;

    char source = 'A';
    char auxiliary = 'B';
    char destination = 'C';

    // Calculate total number of moves
    for (i = 1; i <= n; i++)
        total = total * 2;

    total--;

    // Adjust for even number of disks
    if (n % 2 == 0)
    {
        temp = auxiliary;
        auxiliary = destination;
        destination = temp;
    }

    for (i = 1; i <= total; i++)
    {
        if (i % 3 == 1)
        {
            printf("Move between %c and %c\n",
                   source, destination);
        }
        else if (i % 3 == 2)
        {
            printf("Move between %c and %c\n",
                   source, auxiliary);
        }
        else
        {
            printf("Move between %c and %c\n",
                   auxiliary, destination);
        }
    }
}

int main()
{
    int n;

    printf("Enter number of disks: ");
    scanf("%d", &n);

    if (n <= 0 || n > 20)
        printf("Enter disks between 1 and 20.");
    else
        hanoi(n);

    return 0;
}

