#include<stdio.h>

int main() {
    int arr[100], size, num, pos, choice;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the number to insert: ");
    scanf("%d", &num);

    printf("Choose insertion position:\n");
    printf("1. At Beginning\n2. At End\n3. At Any Index\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            for(int i = size; i > 0; i--) {
                arr[i] = arr[i-1];
            }
            arr[0] = num;
            size++;
            break;

        case 2:
            arr[size] = num;
            size++;
            break;

        case 3:
            printf("Enter the index (0 to %d): ", size);
            scanf("%d", &pos);
            if(pos < 0 || pos > size) {
                printf("Invalid index.\n");
                return 1;
            }
            for(int i = size; i > pos; i--) {
                arr[i] = arr[i-1];
            }
            arr[pos] = num;
            size++;
            break;

        default:
            printf("Invalid choice.\n");
            return 1;
    }

    printf("Array after insertion:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
