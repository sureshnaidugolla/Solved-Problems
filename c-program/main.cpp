#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int main(){
    int n;
    string b;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin >>a[i];
    cin >>b;
    cout<<a<<" "<<stoi(b);
    cout<< &n;
    return 0;
}