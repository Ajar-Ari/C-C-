#include <stdio.h>

// 삽입 정렬: 정렬된 부분(왼쪽)에 새 원소를 알맞은 위치에 끼워 넣는 방식
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i]; // 삽입할 대상 값
        int j = i - 1;    // key의 바로 왼쪽 인덱스부터 비교 시작

        // key보다 큰 값들을 오른쪽으로 한 칸씩 밀어냄
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        // 빈 자리에 key를 삽입
        arr[j + 1] = key;
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

    insertionSort(arr, n);

    printf("정렬 후: [ ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("]\n");

    return 0;
}