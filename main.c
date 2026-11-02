#include <stdio.h>

int main(void) {
    int input_value;
    scanf("%d", &input_value);
    int is_ok = (input_value >= 0 && input_value < 10) || (input_value >= 12 && input_value < 15);
    if (is_ok) {
        printf("OK");
    } else {
        printf("NG");
    }
    
    return 0;
}