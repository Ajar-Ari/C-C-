#include <stdio.h>

// 선택 정렬: 매 단계마다 남은 범위에서 최솟값을 찾아 맨 앞으로 이동
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i; // 현재까지의 최솟값 인덱스를 i로 가정

        // i+1부터 끝까지 돌면서 더 작은 값이 있는지 탐색
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j; // 더 작은 값을 찾으면 인덱스 갱신
            }
        }

        // 최솟값을 현재 위치(i)와 교환
        int temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
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

    selectionSort(arr, n);

    printf("정렬 후: [ ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("]\n");

    return 0;
}