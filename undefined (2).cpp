#include <iostream>
using namespace std;

int main() 
{
  int T; cin>>T;
  while(T--)
  {
      int n,k; cin>>n>>k;
      string s; cin>>s;
      int cap=0;int small=0;
      for(int i=0;i<n;i++)
      { 
        char p = (char) s[i];
        int o= (int)p;
        if(p>=65 && p<=90)
           cap++;
        else
            small++;
           
      }
          
          //case 1:
          if (cap==small)
          {
          if (k >= cap )
          cout<<"both\n";
          else if (k< cap)
          cout<<"none\n";
          }
          
          // case2
          else if(cap < small)
          {
           if (k<cap )
          cout<<"none\n";
          else if (k>=small)
          cout<<"both\n";
          else
          cout<<"chef\n";
          }
          
          //case 3
          else if(cap>small)
          {
           if(k<small)
           cout<<"none\n";
           else if(k>=cap)
           cout<<"both\n";
           else
           cout<<"brother\n";
              
          }
              
          
      
  }
  
	return 0;
}