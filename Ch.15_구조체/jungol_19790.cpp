#include <iostream>
using namespace std;

struct Body
{
    int height;
    double weight;
};

Body makeStudent(Body father, Body mother)
{
    Body s;
    s.height = (father.height + mother.height) / 2 + 5;
    s.weight = (father.weight + mother.weight) / 2 - 4.5;
    return s;
}













// #include <iostream>
// using namespace std;

// struct Body
// {
//     int height;
//     double weight;
// };

// Body makeStudent(Body father, Body mother)
// {
//     Body s;
//     s.height = (father.height + mother.height) / 2 + 5;
//     s.weight = (father.weight + mother.weight) / 2 - 4.5;
//     return s;
// }

// int main()
// {
//     Body father, mother;
//     cin >> father.height >> father.weight;
//     cin >> mother.height >> mother.weight;

//     Body student = makeStudent(father, mother);

//     cout << "height : " << student.height << "cm" << '\n';
//     cout << "weight : ";
//     cout.setf(ios::fixed);
//     cout.precision(1);
//     cout << student.weight << "kg" << '\n';

//     return 0;
// }