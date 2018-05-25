//
// Created by 123 on 2018-05-24.
//

#include "supportingFunctions.h"

std::string clean(std::string text)
{
    for( char& c : text )
        if(c == ',' || c == '[' || c == ']' || c == '"' || c == '.' || c == '%' || c == '$' || c == '&' || c == '*' || c == '(' || c == ')' || c == '-'
           || c == '_' || c == '+' || c == '=' || c == '!' || c == '?' || c == '#' || c == '@' || c == '^' || c == '~' || c == '`' || c == ';' || c == ':'
           || c == '<' || c == '>' || c == '|' || c == '/')
            c = ' ' ;

    return text;
}

bool check(std::ifstream &file, const std::string fileName)
{
    try
    {
        if(!file)
        {
            throw 20;
        }
    }
    catch(...)
    {
        std::cout << fileName << " does not exist" << std::endl;
        return true;
    }
    return false;
}
