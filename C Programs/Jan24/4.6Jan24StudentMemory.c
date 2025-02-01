#include <stdio.h>
#include <stdlib.h> 

int main() {
    int numStudents;

 
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

  
    int* scores = (int*)malloc(numStudents * sizeof(int));

    if (scores == NULL) {
        printf("Memory fail\n");
        return 1; 
    }


    printf("Enter the scores= for each student:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &scores[i]);
    }


    FILE* fptr = fopen("scores.txt", "w");
    if (fptr == NULL) {
        printf("Failed to open file.\n");
        free(scores); 
        return 1;
    }

    printf("\nWriting scores to file in reverse order...\n");
    for (int i = numStudents - 1; i >= 0; i--) {
        fprintf(fptr, "%d\n", scores[i]);
    }


    fclose(fptr);

    free(scores);

    printf("Scores have been written\n");

    return 0;
}