#include <stdio.h>
int main() {

    int arr[12] = {4, 6, 2, 6, 3, 8, 6, 2, 9, 7, 1, 4};

    printf("Repeating elements in the array: ");

    for (int i = 0; i < 12; i++) {
         int count=0;

        for (int j = i + 1; j < 12; j++) {

            if (arr[i] == arr[j]) {
                count++;
                if(count==1)
                {
                    printf("%d ", arr[i]);
                }
            }
        }
    }
}
