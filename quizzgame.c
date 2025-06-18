#include <stdio.h>
#include <ctype.h>

int main() {

    // QUIZ GAME

    char questions[][100] = {"Which is the largest planet in the solar system?",
                                               "Which is the hottest planet?",
                                               "Which planet has the most moons?",
                                               "Is the Earth flat?"};

    char options[][100] = {"A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune",
                                           "A. Mercury\nB. Venus\nC. Earth\nD. Mars",
                                           "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn",
                                           "A. Yes\nB. No\nC. Maybe\nD. Sometimes"};

    char answerKey[] = {'A', 'B', 'D', 'B'};

    int questionCount = sizeof(questions) / sizeof(questions[0]);

    char guess = '\0';
    int score = 0;

    printf("*** QUIZ GAME ***\n");

    for(int i = 0; i < questionCount; i++){
        printf("\n%s\n", questions[i]);
        printf("\n%s\n", options[i]);
        printf("\nEnter your choice: ");
        scanf(" %c", &guess);

        guess = toupper(guess);

        if(guess == answerKey[i]){
            printf("CORRECT!\n");
            score++;
        }
        else{
            printf("WRONG!\n");
        }
    }

    printf("\nYour score is %d out of %d points\n", score, questionCount);

    return 0;
}

