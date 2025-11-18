#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[20];
    int score;
} Student;

void quicksort(Student arr[], int left, int right) {
    if (left >= right) return;

    int pivot = arr[left].score;
    int i = left + 1;
    int j = right;

    while (1) {
        while (i <= j && arr[i].score <= pivot) i++;
        while (i <= j && arr[j].score > pivot) j--;

        if (i <= j) {
            Student temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        } else {
            break;
        }
    }

    Student temp = arr[left];
    arr[left] = arr[j];
    arr[j] = temp;

    quicksort(arr, left, j - 1);
    quicksort(arr, j + 1, right);
}

int main() {
    int n;
    scanf("%d", &n);

    Student *students = (Student *)malloc(n * sizeof(Student));

    for (int i = 0; i < n; i++) {
        scanf("%s %d", students[i].name, &students[i].score);
    }

    quicksort(students, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%s ", students[i].name);
    }

    free(students);
    return 0;
}