#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int score[3];
    int total; // 총점
};

void input(Student arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name;
        arr[i].total = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i].score[j];
            arr[i].total += arr[i].score[j];
        }
    }
}

void sort(Student arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j].total < arr[j + 1].total)
            {
                Student tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

void output(Student arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " "
             << arr[i].score[0] << " "
             << arr[i].score[1] << " "
             << arr[i].score[2] << " "
             << arr[i].total << '\n';
    }
}

int main()
{
    int n;
    cin >> n;

    Student arr[10];
    input(arr, n);
    sort(arr, n);
    output(arr, n);
    return 0;
}