#include<bits/stdc++.h>

// Macro to make input/output operations faster
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

using namespace std;

int main()
{
    // Call the fastread() macro to optimize input/output operations
    fastread();

    int t, n;
    cin >> t; // Read the number of test cases

    while (t--) {
        cin >> n; // Read the input number 'n'

        vector<int> v;
        v.push_back(1);
        v.push_back(11);
        v.push_back(111);
        v.push_back(1111);

        // Generate a vector 'v' containing multiples of numbers from 2 to 9
        for (int i = 2; i < 10; i++) {
            for (int j = 0; j < 4; j++) {
                int d = v[j] * i;
                v.push_back(d);
            }
        }

        int c = 0;

        // Iterate through the vector 'v' to find the count of digits in 'n'
        for (int i = 0; i < v.size(); i++) {
            if (v[i] == n) {
                if (v[i] < 10) {
                    c++; // Increment count by 1 if 'n' is a single-digit number
                }
                else if (v[i] < 100) {
                    c += 2; // Increment count by 2 if 'n' is a two-digit number
                }
                else if (v[i] < 1000) {
                    c += 3; // Increment count by 3 if 'n' is a three-digit number
                }
                else if (v[i] < 10000) {
                    c += 4; // Increment count by 4 if 'n' is a four-digit number
                }
                break;
            }

            // Count digits in 'v[i]' even if it's not equal to 'n'
            if (v[i] < 10) {
                c++;
            }
            else if (v[i] < 100) {
                c += 2;
            }
            else if (v[i] < 1000) {
                c += 3;
            }
            else if (v[i] < 10000) {
                c += 4;
            }
        }

        // Output the count of digits in 'n'
        cout << c << endl;
   
