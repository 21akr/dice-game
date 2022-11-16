//
//  main.cpp
//  newProject
//
//  Created by Mukhammadrasul Akramhujaev on 16/11/22.
//

#include <iostream>
using namespace std;

int main() {

    int mishka{0}, chris{0}, mishkaCount{0}, chrisCount{0}, rounds;
    
    cin >> rounds;
    
    for (int i = 0; i < rounds; i++) {
        cin >> mishka >> chris;
        
        if (mishka > chris) {
            mishkaCount++;
        } else if (mishka < chris){
            chrisCount++;
        }
    }

    int winnerIsMishka = mishkaCount > chrisCount;
    int friendship = mishkaCount == chrisCount;
    
    if (winnerIsMishka) {
        cout << "Mishka" << endl;
    } else if(friendship) {
        cout << "Friendship is magic!^^" << endl;
    } else {
        cout << "Chris" << endl;
    }
    
    return 0;
}



