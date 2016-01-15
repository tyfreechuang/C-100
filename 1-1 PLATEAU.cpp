#include <iostream>

using namespace std;

int main() { 
    const int length = 10;
    int iarr[length] = {1,2,2,2,2,2,4,4,4,4}; 
    int l=0;
    int index=0;
    int plateau;
    
    int longest_plateau(int x[], int length);
    int find_number(int x[], int l, int length);
    
    for(int i = 0; i < length; i++) 
        cout << iarr[i] << " "; 
    cout << endl;
    
    l=longest_plateau(iarr,length);
    index=find_number(iarr,l,length);
    
    cout<< "plateau index: "<< index<< endl;
    cout<< "length:  "<< l<< endl;
       
    system("pause");

    return 0; 
}

int longest_plateau(int x[], int n)
{
    int l=1; /* plateau length>=1 */
    for(int j = 1; j < n; j++)
            if(x[j]==x[j-l])
            l++;
    return l;
        
}

int find_number(int x[], int l, int n)
{
    int i=0;
    while(x[i]!=x[i+l-1])
      i++;
    return (i+1);        
}
