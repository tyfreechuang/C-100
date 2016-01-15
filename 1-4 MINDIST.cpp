#include <iostream>
#include <limits.h>

#define min(x, y)  ((x)<(y) ? (x):(y))

using namespace std;

int main(){
 const int m=5;
 const int n=3;
 
 int x[m]={1,3,5,7,9};
 int y[n]={2,6,8};
 
 int min=0;
 
 int min_distance(int x[], int y[], int m, int n);
 
 min=min_distance(x, y, m, n);
 
 cout<< "The minimum distance= "<< min<< endl;
 
 system("pause");
 return 0;   
}

int min_distance(int x[], int y[], int m, int n){
 int minimum = INT_MAX; /* INT_MAX is from limits.h */
 int index_x, index_y=0;
 
 while (index_x < m && index_y < n)
    if (x[index_x] >= y[index_y]) {
        minimum = min(minimum, x[index_x]-y[index_y]);
        index_y++;
    } else {
        minimum=min(minimum, y[index_y]-x[index_x]);
        index_x++;
    }
 return minimum;
                   
}
