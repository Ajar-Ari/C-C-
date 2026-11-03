#include <stdio.h>

int binarySearch(int arr[], int size, int target)
{
    int left = 0;         // 시작 위치를 0으로 설정한다.
    int right = size - 1; // 끝 위치를 배열크기 - 1로 설정한다.

    while (left <= right)
    {                                 // 시작 위치가 끝 위치보다 작거나 같은 동안 반복한다.
        int mid = (left + right) / 2; // 중간 위치를 계산한다.

        if (arr[mid] == target)
        {                   // 만약 중간 위치의 값이 찾을값과 같다면
            return mid + 1; // 중간 위치를 반환하고 탐색을 종료한다.
        }
        else if (arr[mid] < target)
        {                   // 그렇지 않고 중간 위치의 값이 찾을값보다 작다면
            left = mid + 1; // 시작 위치를 중간 위치 + 1로 변경한다.
        }
        else
        {                    // 그렇지 않다면
            right = mid - 1; // 끝 위치를 중간 위치 - 1로 변경한다.
        }
    }
    return -1; // 반복이 종료될 때까지 값을 찾지 못했다면 -1을 반환한다.
}

int main(void)
{
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91}; // 반드시 정렬된 배열
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int pos = binarySearch(arr, size, target);

    if (pos != -1)
        printf("%d의 위치: %d\n", target, pos);
    else
        printf("%d를 찾지 못했습니다.\n", target);

    return 0;
}







// #include <stdio.h>

// int binarySearch(int arr[], int size, int target)
// {
//     int left = 0;         // 시작 위치를 0으로 설정한다.
//     int right = size - 1; // 끝 위치를 배열크기 - 1로 설정한다.

//     while (left <= right) // 시작 위치가 끝 위치보다 작거나 같은 동안 반복한다.
//     {
//         int mid = (left + right) / 2; // 중간 위치를 계산한다.

//         if (arr[mid] == target) // 만약 중간 위치의 값이 찾을값과 같다면
//         {
//             return mid; // 중간 위치를 반환하고 탐색을 종료한다.
//         }

//         else if (arr[mid] < target) // 그렇지 않고 중간 위치의 값이 찾을값보다 작다면
//         {
//             left = mid + 1; // 시작 위치를 중간 위치 + 1로 변경한다.
//         }

//         else // 그렇지 않다면
//         {
//             right = mid - 1; // 끝 위치를 중간 위치 - 1로 변경한다.
//         }
//     }

//     return -1; // 찾지 못했다 (не найдено)
// }

// int main(void)
// {
//     int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91}; // 정렬된 배열 (отсортированный)
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int target = 23;

//     int index = binarySearch(arr, size, target);

//     if (index != -1)
//         printf("%d의 위치: %d\n", target, index);
//     else
//         printf("%d를 찾지 못했습니다.\n", target);

//     return 0;
// }
