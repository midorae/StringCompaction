//
//  stringCompaction.cpp
//  StringCompaction
//
//  Created by 이창기 on 2016. 11. 19..
//  Copyright © 2016년 이창기. All rights reserved.
//

#include "stringCompaction.hpp"

//Interface Part
std::string stringInputInterface(std::string str)
{
    if(str == "")
        return str;
    
    std::string compacted_String = stringCompaction(str);
    
    if(compacted_String.length() > str.length())
        return str;
    else
        return compacted_String;
    
}

//Compaction Function Part
std::string stringCompaction(std::string str)
{
    char last = str[0];
    
    std::string ret_String ="";
    
    int count = 0;
    
    for(int i = 0; i<=str.length(); i++)
    {
        if(str[i] == last)
        {
            count++;
        }
        else
        {
            ret_String = ret_String + last;
            ret_String = ret_String + std::to_string(count);
            
            last = str[i];
            count = 1;
        }
    }
    
    return ret_String;
}
