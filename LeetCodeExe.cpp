// LeetCodeExe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "main.h"

using namespace std;
void displayMainMenu();

int main()
{
    bool exit = false;
    char ch;
    while (!exit) {
        displayMainMenu();
        cout << "Enter your choice as shown above: ";
        cin >> ch;
        switch (ch) {
        case 'A':
            ArrayMain();
            break;
        case 'B':
            BinaryMain();
            break;
        case 'D':
            DPMain();
            break;
        case 'G':
            GraphMain();
            break;
        case 'I':
            IntervalMain();
            break;
        case 'L':
            LinkedListMain();
            break;
        case 'M':
            MatrixMain();
            break;
        case 'S':
            StringMain();
            break;
        case 'T':
            TreeMain();
            break;
        case 'H':
            HeapMain();
            break;
        case 'E':
            cout << "Exiting the program. Goodbye!" << endl;
            exit = true;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
        cout << endl;
    }
    return 0;

}

void displayMainMenu() {
    std::cout << "Welcome to the sample basic problems and solution from leetcode!\n";
    std::cout << "Please [A] for Array\n";
    std::cout << "Please [B] for Binary\n";
    std::cout << "Please [D] for Dynamic Programming\n";
    std::cout << "Please [G] for Graph\n";
    std::cout << "Please [I] for Interval\n";
    std::cout << "Please [L] for Linked List\n";
    std::cout << "Please [M] for Matrix\n";
    std::cout << "Please [S] for String\n";
    std::cout << "Please [T] for Tree\n";
    std::cout << "Please [H] for Heap\n";
    std::cout << "Please [E] for Exit the programm\n";
}