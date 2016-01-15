#include<iostream>

using namespace std;

int main() {
 
 const int m=5;
 const int n=5;
 int f[m]={1,3,5,7,9};
 int g[n]={2,3,4,7,8};
 int count=0;
 
 int dominance_count(int f[], int g[], int m, int n);
 
 count=dominance_count(f,g,m,n);
 
 cout<< "The number is: " << count << endl;
 system("pause");
 
 return 0;   
}

int dominance_count(int f[], int g[], int m, int n) {
 int index_f, index_g;
 int count=0;

 count=index_f=index_g=0;
 while (index_f<m && index_g<n)
       if (f[index_f]<=g[index_g])
           index_f++;
       else
           index_g++, count+=m-index_f;
return count;
} // end function
