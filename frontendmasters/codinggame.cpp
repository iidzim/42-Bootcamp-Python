//? harshad number 
//? 12345 -> 1 + 2 + 3 + 4 + 5 = 15
//? 12345 / 15 = 823 -> True

//! 3216 -> 3 + 2 + 1 + 6 + 1 = 13
//! 32161 / 13

// #include <iostream>
// #include <string>
// #include <cmath>
// using namespace std;

// int main(void)
// {
//     int n;
//     cout << "enter an integer > ";
//     cin >> n;
//     string s = to_string(n);
//     int sum = 0;
//     for (int i = 0; i < s.size(); i++)
//         sum += s[i] - '0';
//     float val = n / sum;
//     if (floor(val) == (n / sum))
//         cout << "true" << endl;
//     else
//         cout << "false" << endl;
//     return (0);
// }


// x,y=map(int,open(0))
// print((x+y)*min(x,y))


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

// int main()
// {
//     int x;
//     cin >> x; cin.ignore();
//     int y;
//     cin >> y; cin.ignore();

//     // Write an answer using cout. DON'T FORGET THE "<< endl"
//     // To debug: cerr << "Debug messages..." << endl;
//     // cout << x << " - " << y << endl;
//     if (x > y)
//         cout << y * (x + y) << endl;
//     else
//         cout << x * (x + y) << endl;
// }


// //?
// // #include <bits/stdc++.h>

// using namespace std;

// /**
//  * Auto-generated code below aims at helping you parse
//  * the standard input according to the problem statement.
//  **/

// int frq[555];

// int main()
// {
//     string s;
//     getline(cin, s);

//     for(int i=0 ; i<s.size() ; i++){
//         char x=tolower(s[i]);
//         frq[x]++;
//     }

//     bool f=0;
//     for(int i=0 ; i<s.size() ; i++){
//         char x=tolower(s[i]);
//         if(x != ' '){
//             if(frq[x]){
//                 if(f) cout<<" ";
//                 cout<<x<<":"<<frq[x];
//                 f=1;
//                 frq[x]=0;
//             }
//         }
//     }
    
// }