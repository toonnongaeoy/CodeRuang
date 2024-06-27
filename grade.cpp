#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

    int x;
    char g;
    printf("==============================================\n");
    printf("Please enter your score : ");
    scanf("%d", &x);

    if (x > 100) {
        printf("==============================================\n");
        printf("You typed a Invalid score.\n");
        printf("==============================================\n");
        return 0;
    }
    else if (x >= 80) {
        g = '2';
    } else {
        g = '0';
    }
    printf("==============================================\n");
    printf("Your score is : %d\n", x);
    printf("Your grade is : %c\n", g);
    printf("==============================================\n");
    printf("Made with love by Cartoon Kritthapath Yaviraj.\n");
    printf("(ToonStoryTime | ToonNongAeoy)\n");
    printf("==============================================\n");
    return 0;
}