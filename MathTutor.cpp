/*File Name: MathTutor.cpp
Programmer: Chad Gould
09/20/2025
Requirements: Program should display two random numbers to be added. 
Program should then pause. When the student is ready to check the answer, they can press a key and the program will display the correct solution.*/

#include <iostream>
#include <cstdlib>   
#include <ctime>     
using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    int num1 = rand() % 900 + 100;
    int num2 = rand() % 900 + 100;

    cout << "Let's practice addition!\n";
    cout << "What is " << num1 << " + " << num2 << "?\n";

    cout << "\nPress Enter when you're ready to see the answer...";
    cin.ignore(); 

    int sum = num1 + num2;
    cout << "\nThe correct answer is: " << num1 << " + " << num2 << " = " << sum << endl;

    return 0;
}