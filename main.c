#include <stdio.h>

int calculateSum(int numbers[], int size) {
    int i;
    int sum = 0;
    for (i = 0; i < size; i++) {
        sum = numbers[i] + sum;
    }
    return sum;
}

float calculateAverage(int numbers[], int size) {
    int i;
    int sum = 0;
    for (i = 0; i < size; i++) {
        sum = numbers[i] + sum;
    }
    return (float)sum / size;
}

int findLargest(int numbers[], int size) {
    int i;
    int largest = numbers[0];
    for (i = 1; i < size; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }
    return largest;
}

int findSmallest(int numbers[], int size) {
    int i;
    int smallest = numbers[0];
    for (i = 1; i < size; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }
    return smallest;
}
int countEven(int numbers[], int size) {
    int even = 0;
    for (int i = 0; i < size; i++) {
        if (numbers[i] % 2 == 0) {
            even++;
        }
    }
    return even;
}
int main() {
    int numbers[10];
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++) {
        printf("ird be a %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", numbers[i]);
    }
    printf("az osszeguk: %d\n", calculateSum(numbers, 10));
    printf("az atlaguk: %f\n", calculateAverage(numbers, 10));
    printf("a legnagyobb szam: %d\n", findLargest(numbers, 10));
    printf("a legkissebb szam: %d\n", findSmallest(numbers, 10));
    printf("a paros szamok darabja: %d\n", countEven(numbers, 10));

}