//
// Created by 123 on 2018-05-24.
//

#include "supportingFunctions.h"
#include "functions.h"
#include "Catch.h"

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