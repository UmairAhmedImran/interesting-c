#include <stdio.h>

int main(){
    int totalNumbers;
    int oneNumber;
    int totalMarks = 0;
    int i;
    double avgMarks;
    
    printf("Total numbers to be averaged: ");
    scanf("%d", &totalNumbers);
    for(i = 0; i < totalNumbers; i++) {
	printf("Add number %d: ", i + 1);
        scanf("%d", &oneNumber);
        totalMarks = totalMarks + oneNumber;
    }
    avgMarks = (double) totalMarks/totalNumbers;
    
    printf("Average Marks: %.2lf", avgMarks);
    return 0;
}
