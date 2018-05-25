//
// Created by 123 on 2018-05-24.
//
#include "supportingFunctions.h"

void count(const std::string fileName)
{
    std::string word;
    std::ifstream fl;
    std::map<std::string, long int> counter;
    std::map<std::string, std::vector<int>> exactWordPlacement;
    fl.open(fileName);

    if(check(fl, fileName))
    {
        return;
    }
    auto wordPlace = 1;
    while(!fl.eof())
    {
        fl >> word;
        counter[word] += 1;
        exactWordPlacement[word].push_back(wordPlace);
        wordPlace++;
    }

    fl.close();

    std::set < std::pair<std::string, size_t>, decltype( cmp )> sort(counter.begin(), counter.end(), cmp);

    std::ofstream output;
    output.open(fileName);

    output << "Word Count:" << std::endl;

    for (const auto &p : sort)
    {
        if (p.second > 1)
        {
            output << p.first << ": " << p.second << std::endl;

        }
    }

    output << "Word placement number:" << std::endl;

    for (const auto &place : exactWordPlacement)
    {
        if(place.second.size() > 1)
        {
            output << place.first;
            for (auto it = place.second.begin(); it < place.second.end(); it++) {
                output << " " << *it;
            }
            output << std::endl;
        }
    }
    output.close();
}

void read(const std::string fileName, const std::string _output)
{
    std::ifstream fl;
    fl.open(fileName);
    if(check(fl, fileName))
    {
        return;
    }
    std::string text;
    std::string fulltext;
    while(!fl.eof())
    {
        fl >> text;
        fulltext += (" " + text);
    }
    fl.close();
    std::ofstream symbol;
    symbol.open(_output);
    symbol << clean(fulltext);
    symbol.close();
}
