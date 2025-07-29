 #include <stdio.h>
#include <math.h>

int main() {
    int binary;
    int decimal = 0, i = 0, digit;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    while (binary != 0) {
        digit = binary % 10;
        decimal += digit * pow(2, i);
        binary /= 10;
        i++;
    }

    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
