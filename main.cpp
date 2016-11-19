//
//  main.cpp
//  StringCompaction
//
//  Created by 이창기 on 2016. 11. 19..
//  Copyright © 2016년 이창기. All rights reserved.
//

#include <iostream>
#include "stringCompaction.hpp"

#define MAX 256

int main(int argc, const char * argv[])
{
    std::string str;
    
    std::cin >> str;
    
    //Call Interface
    //Interface = String Compaction, String length Compare
    str = stringInputInterface(str);
    
    std::cout << str << std::endl;
    
    return 0;
}

