int main(void) {
    int score;
    char rank;

    scanf("%d", &score);
    if (score >= 90) {
        rank = 'A';
    }
    else if (score >= 80) {
        rank = 'B';
    }
    else if (score >= 70) {
        rank = 'C';
    }
    else if (score >= 60) {
        rank = 'D';
    }
    else {
        rank = 'E';
    }
    printf("%c\n", rank);

    return 0;
}
