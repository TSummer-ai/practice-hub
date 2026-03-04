#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        if (needle.empty())
        {
            return 0;
        }
        int n = haystack.size();
        int m = needle.size();
        for (int i = 0; i <= n - m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (haystack[i + j] != needle[j])
                {
                    break;
                }

                if (j == m - 1)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};