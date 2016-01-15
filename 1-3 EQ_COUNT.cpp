#include <iostream>

using namespace std;

int main(){
 const int m=5;
 const int n=5;
 
 int f[m]={1,3,4,7,9};
 int g[n]={3,5,7,8,10};
 
 int count=0;
 
 int coincidence_count(int f[], int g[], int m, int n);
 
 count=coincidence_count(f, g, m, n);
 
 cout<< "The coincendence count is: "<< count<< endl;
 
 system("pause");
 return 0;   
}

int coincidence_count(int f[], int g[], int m, int n){
 int f_index, g_index;
 int count;

 count=f_index=g_index=0;
 
 while(f_index<m && g_index<n)
    if(f[f_index]<g[g_index])
        f_index++;
    else if(f[f_index]>g[g_index])
        g_index++;
    else
        count++, f_index++, g_index++;
 return count;
}

