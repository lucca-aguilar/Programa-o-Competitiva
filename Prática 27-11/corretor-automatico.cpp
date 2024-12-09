#include <bits/stdc++.h>
using namespace std;

int main() {
    double num_questions;
    scanf("%lf", &num_questions);
    getchar();

    double num_got_right;

    for (int i = 0; i < num_questions; i++) {
        char right_option, marked_option;
        scanf("%c %c", &right_option, &marked_option);
        getchar();

        if (marked_option == right_option) {
            num_got_right++;
        }
    }

    double score = num_got_right / num_questions * 10;
    printf("Nota: %.2lf\n", score);

    return 0;
}