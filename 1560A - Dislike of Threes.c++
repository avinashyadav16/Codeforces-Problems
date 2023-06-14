/*
                                                          A. Dislike of Threes
                                                      time limit per test:  1 second
                                                      memory limit per test:  256 megabytes
                                                      input:  standard input
                                                      output: standard output
                                                      
Polycarp doesn't like integers that are divisible by 3 or end with the digit 3 in their decimal representation. 
Integers that meet both conditions are disliked by Polycarp, too.

Polycarp starts to write out the positive (greater than 0) integers which he likes: 1,2,4,5,7,8,10,11,14,16,…. 
Output the k-th element of this sequence (the elements are numbered from 1).

Input:
The first line contains one integer t (1≤t≤100) — the number of test cases. Then t test cases follow.
Each test case consists of one line containing one integer k (1≤k≤1000).

Output:
For each test case, output in a separate line one integer x — the k-th element of the sequence that was written out by Polycarp.

Example:

input:
10
1
2
3
4
5
6
7
8
9
1000

output:
1
2
4
5
7
8
10
11
14
1666

*/


#include <iostream>
using namespace std;
 
int main()
{
    int t, n, i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int num = 0;
        for (i = 1; i <= n; i++)
        {
            num++;
            while(num % 3 == 0 || num % 10 == 3)
            {
                num++;
            }
        }
        cout << num << endl;
    }
    return 0;
}
