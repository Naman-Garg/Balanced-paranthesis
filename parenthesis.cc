//program that implements Balanced paranthesis
#include<bits/stdc++.h>
using namespace std;

//check whether paranthesis are balanced or not
bool parenthesis(string str)
{
     stack < char > s1;
     int len;
     len = str.length();
     for (int i = 0; i < len ; i++){
          if(str[i] == '(')
               s1.push(str[i]);
          else if(str[i] == ')'){
               if(s1.empty())
                    return false;
               else
                    s1.pop();
          }
     }
     return s1.empty() ? true : false;
}

//main function 
int main()
{
     int t;
     string str;
     cin >> t;
     while(t--){
          cin >> str;
          if(parenthesis(str))
               cout << "Balanced parenthesis " << endl;
          else
               cout << "Not a Balanced parenthesis " << endl;
     }
     return 0;
}
