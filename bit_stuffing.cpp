#include<bits/stdc++.h>
using namespace std;
string removeSpaces(string str)  
{ 
    str.erase(remove(str.begin(), str.end(), ' '), str.end()); 
    return str; 
} 
int main()
{
    string name,liw,q,lq;
    vector<string>sie;
    int  i,j,value;
    cout<<"enter your name ";
    getline(cin,name);
    for(i=0;i<name.length();i++)
    {    
        value =(int)name[i];
        cout<<"value = "<<value<<endl;
        string bin=" ";
        while(value>0)
        {
            (value % 2)? bin.push_back('1') :bin.push_back('0'); 
            value /= 2;
        }
         reverse(bin.begin(), bin.end()); 
         sie.push_back(bin);
         liw+=sie[i];

    }
q=removeSpaces(liw);
cout<<"Binary value = "<<q<<endl;
cout<<"length = "<<q.length()<<endl;
int count=0;
for(int j=0;j<q.length();j++)
{  
    if(q[j]=='0')
    {
     count++;
     if(count==4)
      {
          q[j]='1';
          count=0;
      }
    }
    
}
cout<<"\nNew binary = "<<q<<endl;
    return 0;

}