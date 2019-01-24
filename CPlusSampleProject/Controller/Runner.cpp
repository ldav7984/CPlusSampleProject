//
//  Runner.cpp
//  CPlusSampleProject
//
//  Created by Davis, Lauren on 1/24/19.
//  Copyright © 2019 Davis, Lauren. All rights reserved.
//

#include "Controller.hpp"

int main()
{
    //Controller app;
    //app.start();
    
    //Pointer version
    Controller * app = new Controller();
    app->start();
    
    return 0;
}
