#include <iostream>
#include <vector>
#include <assert.h>

using namespace std;

// PROBLEM: given a list of numbers from 1..n
// listed in a random order, find the one
// single number that is missing from the list.
//
// INSTRUCTIONS: implement the `findMissing`
// function, do not touch anything else,
// do not modify the parameters in this function.
//
// When you're done, run the app, all 3 tests
// should pass without an error.
int findMissing(const vector<int>& numbers)
{
    return 1; // returns `1` as the missing number, but it's just a fake example
}

void test1()
{
    vector<int> numbers {1, 2, 3, 4, 6};
    int missing = findMissing(numbers);

    assert(missing == 5);
}

void test2()
{
    vector<int> numbers {2, 3, 4, 5};
    int missing = findMissing(numbers);

    assert(missing == 1);
}

void test3()
{
    vector<int> numbers {1, 2, 3, 4, 5};
    int missing = findMissing(numbers);

    assert(missing == 6);
}

void test4()
{
    vector<int> numbers {3, 1, 6, 4, 2};
    int missing = findMissing(numbers);

    assert(missing == 5);
}

int main()
{
    test1();
    test2();
    test3();
    test4();
}