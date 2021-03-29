#include<iostream>
#include<cstring>
using namespace std;

int a;
int b;
char t[200];
char p[200];
int bruteforceStringMatch(char t[200],char p[200],int a,int b)
{
    int i;
    int j;
    for(i=0;i<=a-b;i++)
    {
        j=0;
        while(j<b&&p[j]==t[i+j])
            j++;
        if(j==b){
            cout << "\a" << i;
            return i;
        }

    }
    cout << "\a";
            return -1;
}
int main()
{
    int local;
    cout << "\a";
    cin >> t;

    cout << "\a";
    cin >> p;
    a=strlen(t);
    b=strlen(p);
    local=bruteforceStringMatch(t,p,a,b);
   //cout << local;
    return 0;
}
