#include<iostream>
using namespace std;
int main()
{  int i,n,a,c,turns,flag;
    cout<<"hello! welcome to guess the number"<<endl;
    cout<<"which level do you want to choose"<<endl;
    cout<<"1-easy\n2-moderate\n3-difficult"<<endl;
    cin>>n;
    switch(n)
    {
        case 1:
        turns=8;
        break;
        case 2:
        turns=5;
        break;
        case 3:
        turns=3;
        break;
        
    }
    int b=1+(rand()%100);
    cout<<"you have "<<turns<<" turns"<<endl;
    for(i=0;i<turns;i++)
    {
        cout<<"chance"<<i+1<<":"<<endl;
        cout<<"guess the number:";
        cin>>a;
        if(a==b)
        {cout<<"you have guessed it correctly in turn "<<i+1<<endl;
        c=i+1;
        flag=1;
        break;
        }
        if((a>b)&&a<(b+10))
        {
            cout<<"you are close...the number is smaller than the guessed one"<<endl;
        }
        else if((a<b)&&(a>(b-10)))
        {
            cout<<"you are close...the number is greater than the guessed one"<<endl;
        }
        else if(a>b)
        {
            cout<<"oops! the actual number is smaller"<<endl;
        }
        else if(a<b)
        {
            cout<<"oops! the actual number is larger"<<endl;
        }
    
    c=i+1;

      }
      if(flag!=1)
      {
          cout<<"the actual number is:"<<b;
        
      }
      if(flag==1)
      {
      
      switch(c)
      {
          case 1:
          cout<<"excellent";
          break;
          case 2:
          cout<<"very good";
          break;
          case 3:
          cout<<"good ";
          break;
      }}
      return 0;
}