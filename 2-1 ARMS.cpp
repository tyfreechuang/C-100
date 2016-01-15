#include <iostream>

using namespace std;

int main(){
    const int d = 3; // number of digits;
    int a, b, c; // digits of number
    int count=0;
    int q=0;
    
    cout <<"The armstrong numbers are:"<< endl
         <<"=========================="<< endl;
    
    for(int i=100; i<1000; i++){
            a=i/100;
            b=(i%100)/10;
            c=i%10;
            q = (a*a*a)+(b*b*b)+(c*c*c);
            if (q==i)
               cout <<"The number "<< ++count << "armstrong number is " << i << endl;
            }
     system("pause");
     return 0;            
}
