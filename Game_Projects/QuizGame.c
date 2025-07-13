#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char questions[][100]={"What is the largest planet in the solar system?\n",
                          "What is the largest continent on Earth?\n",
                          "What planet has the most moons?\n",
                          "Is the earth flat?\n"};

    char options[][100]={"A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune\n",
                        "A. Africa\nB. Texas\nC. Europe\nD. Asia\n",
                        "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn\n",
                        "A. Yes\nB. No\nC. Maybe\nD. Sometimes\n"};

    char answerKey[] = {'A', 'D', 'D', 'B'};

    int questionCount = sizeof(questions) / sizeof(questions[0]);
    char guess='\0';
    int score=0;

    printf("Questions Game\n\n");

    for ( int i = 0; i < questionCount; i++)
    {
    printf("%s\n", questions[i]);
    printf("%s\n", options[i]);
    printf("Enter your choice: ");
    scanf(" %c", &guess);
    scanf("%*[^\n]");

    guess=toupper(guess);

    if (guess == answerKey[i])
    {
        printf("Correct!\n");
        score++;
    }
    else{
        printf("Wrong!\n");
    }
    
    }     

    printf("Your score is %d out of %d points\n", score, questionCount);

    return 0;
}