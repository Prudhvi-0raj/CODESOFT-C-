#include <iostream>
using namespace std;
int main() {
     
    int randNumber = (rand() % 100) + 1;
    int guess;
    int attempts = 0;

    cout << "Hii welcome to the Number Guessing Game..." << endl;
    do{
    cout << "Enter your guess number: ";
    cin >> guess;
    attempts++;
    
        if (guess < randNumber) {
            cout << "Its Too low! Try again."<<endl ;
        } else if (guess > randNumber) {
            cout << "Its Too high! Try again."<<endl;
        } 
            else{
            cout << "Congrats You have guessed the number in " << attempts << " attempts." << endl;
            }
    }while(randNumber!=guess);
    
        return 0;
        }
