#include <bits/stdc++.h> 
using namespace std;

int main()
{
   string s= "hello world";
   // cout << s.max_size() << endl;
   // cout << s.capacity() << endl;
   s.replace(6,0,"Bangladesh ");
   cout << s << endl;
   return 0;
}