/***
  * Name : Jinnat Morol
  * Date : 03/12/17
***/
 
 
#include<bits/stdc++.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<stdio.h>
 
using namespace std;
 
int main()
{
    int n,i,j,ck=0,a,t;
 
    while(scanf("%d", &n) == 1){
    int arr[5];
    ck=0;
    for(i=0;i<5;i++){
        cin>>arr[i];
        if(arr[i]==n){
            ck++;
        }
    }     
    cout<<ck<<endl; 
    ck=0;
 
}
 
}