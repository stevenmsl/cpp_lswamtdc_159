#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol1133;

/*
Input: "eceba"
Output: 3
Explanation: t is "ece" which its length is 3.
*/

tuple<string, int> testFixture1()
{
  return make_tuple("eceba", 3);
}

/*
Input: "ccaabbb"
Output: 5
Explanation: t is "aabbb" which its length is 5.
*/

tuple<string, int> testFixture2()
{
  return make_tuple("ccaabbb", 5);
}

void test1()
{
  auto f = testFixture1();
  cout << "Test 1 - expect to see " << to_string(get<1>(f)) << endl;
  Solution sol;
  cout << "result: " << to_string(sol.len(get<0>(f))) << endl;
}

void test2()
{
  auto f = testFixture2();
  cout << "Test 2 - expect to see " << to_string(get<1>(f)) << endl;
  Solution sol;
  cout << "result: " << to_string(sol.len(get<0>(f))) << endl;
}

main()
{
  test1();
  test2();
  return 0;
}