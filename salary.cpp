#include <iostream>
using namespace std;

int main(){
    float inputSalary,grossSalary;
    cout << "Enter Your Salary Input: "<< endl;
    cin>> inputSalary;
    float da,hra;
    if (inputSalary > 10000)
    {
        da = (inputSalary*10)/100;
        hra = (inputSalary*5)/100;
        grossSalary = inputSalary + da + hra;
        cout<< "Your Gross Salary is: "<< grossSalary << endl;

    }else{
        da = (inputSalary*5)/100;
        hra = (inputSalary*3)/100;
        grossSalary = inputSalary + da + hra;
        cout<< "Your Gross Salary is: "<< grossSalary << endl;
    }
    return 0;
}