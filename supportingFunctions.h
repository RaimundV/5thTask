//
// Created by 123 on 2018-05-24.
//

#ifndef DARBAS2_SUPPORTINGFUNCTIONS_H
#define DARBAS2_SUPPORTINGFUNCTIONS_H

#include <vector>
#include <exception>
#include <string>
#include <map>
#include <fstream>
#include <set>
#include <iostream>

std::string clean(std::string text);
bool check(std::ifstream &file, std::string fileName);
auto cmp = [](const std::pair<std::string, size_t> &p1,const std::pair<std::string, size_t> &p2)
{
    return p2.second <= p1.second;
};

#endif //DARBAS2_SUPPORTINGFUNCTIONS_H
