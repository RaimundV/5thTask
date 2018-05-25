# 5th-Task
The program takes a given text, gets rid of the symbols and counts how many times a word is repeated in the text. Additionaly it also shows what the words' position is in the text.

## Installing

1. Copy the link of the repository with ".git" at the end
1. Use "git clone <Web URL>" command in git bash to install the program in wanted directory.
1. Run and enjoy :)

## Usage

1. Post your text to "text.txt"
1. Just run the program and you will find the results in "symbolless.txt"

## cOOl StuFF

### UNIT TESTS!!!!

```C++
#define CATCH_CONFIG_RUNNER
#include "Catch.h"

int main(int argc, char* argv[])
{
	Catch::Session session;
    int returnCode = session.applyCommandLine( argc, argv );
    if( returnCode != 0 )
        return returnCode;

    return session.run();
}
```

```C++
TEST_CASE("Are the symbols deleted?")
{
    REQUIRE(clean("test,") == "test ");
    REQUIRE(clean("t,e,s,t,") == "t e s t ");
}

TEST_CASE("Using sections")
{
    SECTION("using a sentence")
    {
        REQUIRE(clean("hello-people") == "hello people");
    }
    SECTION("more symbols!")
    {
        REQUIRE(clean("hey,my$good%friends,are&you,having.a,good-time") == "hey my good friends are you having a good time");
    }
    SECTION("so this section has to fail")
    {
        REQUIRE(clean("test,") == "t  e s t");
    }
}
```

### Functions!

```C++
std::string clean(std::string text)
{
    for( char& c : text )
        if(c == ',' || c == '[' || c == ']' || c == '"' || c == '.' || c == '%' || c == '$' || c == '&' || c == '*' || c == '(' || c == ')' || c == '-'
           || c == '_' || c == '+' || c == '=' || c == '!' || c == '?' || c == '#' || c == '@' || c == '^' || c == '~' || c == '`' || c == ';' || c == ':'
           || c == '<' || c == '>' || c == '|' || c == '/')
            c = ' ' ;

    return text;
}
```