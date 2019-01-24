//
//  Controller.cpp
//  CPlusSampleProject
//
//  Created by Davis, Lauren on 1/24/19.
//  Copyright © 2019 Davis, Lauren. All rights reserved.
//

#include "Controller.hpp"

Controller :: Controller()
{
    this->specialNumber = 123456;
}

void Controller :: start()
{
    cout << "This is inside the start method yeeee" << endl;
    cout << "The special number is: " << specialNumber << endl;
    cout << "Separate chunks with the << just like a + and Strings in Java" << endl;
    specialNumber = 123;
    
    string answer;
    cout << "Type in your  name!" << endl;
    getline(cin, answer);
    cout << "You typed: " << answer << endl;
}
