#include <iostream>
using namespace std;
int main() { 

// int budget;
// cout << "Enter your Budget" << endl;

//     //input
//     cin >> budget;

// if(budget > 100000) {
//     cout <<"you can buy car" << endl;
// }
// else {
//     cout <<"you cannot buy car" << endl;
// }
// int age = 20;

// if(age > 18) {
//     cout <<"You can Vote" << endl;
// }
// else { cout <<"you cannot vote" << endl;
// }


// int marks = 50;

// if(marks > 90){
//     cout << "A";
// }
// else if (marks > 80) {
//     cout <<"B";
// }
// else if (marks > 70) {
//     cout <<"C";
// }
// else if(marks >60) {
//     cout <<"D";
// }
// else {
//     cout <<"you failed" << endl;
// }

int height;
cout <<"Enter height in feet" << endl;
cin >> height;

int weight;
cout <<"Enter your weight:" << endl;
cin >> weight;

if(height > 5) {
    if(weight > 70) {
        cout << "you got a good BMI" <<endl;
    }
    else {
        cout << "do weight gain first" << endl;
    }
}
else{
    cout <<"do exercise" <<endl;
}


return 0;
}