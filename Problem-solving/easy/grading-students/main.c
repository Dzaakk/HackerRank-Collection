#include <stdio.h>
#include <stdlib.h>
int *gradingStudents(int grades_count, int *grades, int *result_count)
{
    int *rounded_grades = malloc(grades_count * sizeof(int));

    if (!rounded_grades)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < grades_count; i++)
    {
        int grade = grades[i];

        if (grade >= 38)
        {
            int next_multiple_of_5 = ((grade / 5) + 1) * 5;

            if (next_multiple_of_5 - grade < 3)
            {
                grade = next_multiple_of_5;
            }
        }
        rounded_grades[i] = grade;
    }
    *result_count = grades_count;

    return rounded_grades;
}

int main()
{
    int grades[] = {73, 67, 38, 33};
    int grades_count = sizeof(grades) / sizeof(grades[0]);
    int result_count;

    int *rounded_grades = gradingStudents(grades_count, grades, &result_count);

    printf("Rounded Grades:\n");
    for (int i = 0; i < result_count; i++)
    {
        printf("%d ", rounded_grades[i]);
    }
    printf("\n");

    free(rounded_grades);

    return 0;
}