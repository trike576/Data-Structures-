#include<stdio.h>

int main() {
    int arr[100], size, pos, choice;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nChoose deletion option:\n");
    printf("1. Delete from Beginning\n2. Delete from End\n3. Delete from Any Index\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            for(int i = 0; i < size - 1; i++) {
                arr[i] = arr[i + 1];
            }
            size--;
            break;

        case 2:
            size--;
            break;

        case 3:
            printf("Enter the index to delete (0 to %d): ", size - 1);
            scanf("%d", &pos);
            if(pos < 0 || pos >= size) {
                printf("Invalid index.\n");
                return 1;
            }
            for(int i = pos; i < size - 1; i++) {
                arr[i] = arr[i + 1];
            }
            size--;
            break;

        default:
            printf("Invalid choice.\n");
            return 1;
    }

    printf("Array after deletion:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
