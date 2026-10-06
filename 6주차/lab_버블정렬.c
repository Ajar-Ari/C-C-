#include <stdio.h>

// 버블 정렬: 인접한 두 원소를 비교해 순서가 틀리면 교환, 가장 큰 값이 점점 뒤로 이동
void bubbleSortAscending(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    { // 전체 반복 횟수 관리
        for (int j = 0; j < n - i - 1; j++)
        { // 인접한 두 값 비교
            if (arr[j] > arr[j + 1])
            {
                // 스왑(교환)
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {7, 4, 5, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("정렬 전: [ ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("]\n");

    bubbleSortAscending(arr, n);

    printf("정렬 후: [ ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("]\n");

    return 0;
}