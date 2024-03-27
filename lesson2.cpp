#include <stdio.h>

int main()
{
    int data;

    printf("Please enter a number:");
    scanf("%d", &data); // user input ကို ဖတ် scanf
    printf("You entered: %d", data);
    // integer တွေကို ဖတ်ချင်တယ်ဆိုရင် %d
    return 0;
}