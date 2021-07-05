#include <bits/stdc++.h>

using namespace std;


int main() {


  long long int left, right;

  cin>>left>>right;

   long long i;

   long long ans;

      float a = log2(left);

      int a1 = (int)(a);

      float b = log2(left+1);

      int a2 = (int)(b);


      float c = log2(right);

      int b1 = (int)(c);

      float d = log2(right-1);

      int b2 = (int)(d);



  if(left == 0 || right == 0 || right-left == 0)

  {

      ans=0;

  }

  else

  {

      if(a2 == a1+1 || b2 == b1-1 || a1<b1 ) ans = 0;

      else

      {

          for(i=left; i<=right; i++)

          {

              ans = ans&i;

          }

      }


  }


 cout<<ans;





   return 0;

}
