#include <stdio.h>
int main()
{
    int num1, num2, result = 0;
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);
    printf("Greatest common divisor = ");
    int minNum;
    if (num1 > num2) minNum = num2;
    else minNum = num1;
    while (minNum > 0) {
        if (num1 % minNum == 0 && num2 % minNum == 0) {
            printf("%d", minNum);
            break;
        }
        minNum--;
    }
    return 0;
}