#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <algorithm>
#include <iterator>
#include <unordered_map>
#include <queue>
using namespace sol1133;
using namespace std;

/*takeaways
  - use sliding window technique
  - use two pointers (l,r) to
    control the size of the window
  - we will keep reduce the size
    of the window until it has less
    than 3 distinctive chars
*/
int Solution::len(string s)
{
  int maxLen = 0;
  /* record the occurrences of each char inside the window
   */
  auto freq = unordered_map<char, int>();

  for (auto l = 0, r = 0; r < s.length(); r++)
  {
    /* bring in one more char */
    freq[s[r]]++;

    /*reduce the window size until it no longer
      contains more than two distinct chars
    */
    while (freq.size() == 3)
    {
      if (--freq[s[l]] == 0)
        freq.erase(s[l]);
      l++;
    }

    /* r-l+1 is the size of the window */
    maxLen = max(maxLen, r - l + 1);
  }

  return maxLen;
}