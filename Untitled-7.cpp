#include<iostream>
using namespace std;
int main()
{int n;
cout<<"enter n"<<endl;
cin>>n;
    int row=1;
   int count=1;
    while(row<n)
     {   
        int col=1;
        while(col<=row)
        {
            
          cout<<count;
          count++;
          col++;
        }
    }

    return 0;
}

