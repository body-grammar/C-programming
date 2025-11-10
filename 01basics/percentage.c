#include <stdio.h>

int main() {
    int marksInMaths, marksInEconomics, marksInEnglish, marksInHindi, marksInScience, sumOfMarks;
    float average, percentage;

    printf("Marks scored in Maths = ");
    scanf("%d", &marksInMaths);

    printf("Marks scored in Science = ");
    scanf("%d", &marksInScience);

    printf("Marks scored in Hindi = ");
    scanf("%d", &marksInHindi);

    printf("Marks scored in English = ");
    scanf("%d", &marksInEnglish);

    printf("Marks scored in Economics = ");
    scanf("%d", &marksInEconomics);

    sumOfMarks = marksInEconomics + marksInEnglish + marksInHindi + marksInMaths + marksInScience;

    average = (float)sumOfMarks/500;

    percentage = average * 100;

    printf("Percentage acquired by the student is %f", percentage);

    return 0;
}