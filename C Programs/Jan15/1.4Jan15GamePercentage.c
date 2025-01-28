#include  <stdio.h>
int main()
{


    float maxScore;
    printf("Give me the Max Score \n");
    scanf("%f", &maxScore);

    float userScore;
    printf("Give me the Max Score \n");
    scanf("%f", &userScore);


    float perMax = userScore/maxScore;


    printf("The user's score is %.2f of the max score", perMax);

    return 0;
}