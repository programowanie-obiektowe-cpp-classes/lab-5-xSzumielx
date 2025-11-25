#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

using namespace std;

vector<char> foo(list<Human>& people)
{
    vector<char> wektor;
    wektor.reserve(people.size());

    for (Human& person : people) {
        person.birthday();
        if (person.isMonster() == true)
        {
            wektor.push_back('n');
        }
        else
        {
            wektor.push_back('y');
        }
    }

    reverse(wektor.begin(), wektor.end());

    return wektor;
}