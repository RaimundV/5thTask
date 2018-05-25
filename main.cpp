//
// Created by 123 on 2018-05-24.
//
#include "functions.h"
#define CATCH_CONFIG_RUNNER
#include "Catch.h"

int main(int argc, char* argv[])
{
    std::string inputFile = "text.txt";
    std::string outputFile = "symbolless.txt";
    read(inputFile, outputFile);
    count(outputFile);

    Catch::Session session;
    int returnCode = session.applyCommandLine( argc, argv );
    if( returnCode != 0 )
        return returnCode;

    return session.run();
}