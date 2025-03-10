#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1000];
    int ascii_value[1000];

    printf("Enter the string: ");
    scanf("%s", str);

    //getting an ascii values of characters
    for (int i = 0; i < strlen(str); i++) {
        ascii_value[i] = str[i];
    }

    //bubble sort
    // x=a    a=a+1   a+1=x

    for (int x = 0; x < strlen(str); x ++) {
        for (int a = 0; a < (strlen(str) - 1); a ++) {
            if (ascii_value[a] > ascii_value[a + 1] ) {
                int ur_mother = ascii_value[a];
                ascii_value[a] = ascii_value[a + 1];
                ascii_value[a + 1] = ur_mother;
            }
        }
    }

    printf("Sorted string: \n");
    for (int i = 0; i < strlen(str); i++){
        printf("%c", ascii_value[i]);
    }

    printf("\n");

    return 0;
}