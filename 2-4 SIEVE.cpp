#include <iostream>
#define MAXSIZE    200
#define DELETED    1
#define KEPT       0

using namespace std;

int main(){
    int sieve[MAXSIZE+1];   // the sieve array
    int count=1; // no. of primes counter
    int prime;  // a generated prime
    
    cout << "Etrtosthenes Sieve Method" << endl
         << "=========================" << endl
         << "Prime Numbers between 2 and " << MAXSIZE*2+3 << ": " <<endl;
         
    for (int i=0; i<=MAXSIZE; i++)
        sieve[i]=KEPT;        // set all items to be kept in the shieve
    
    for (int i=0; i <=MAXSIZE; i++)
        if (sieve[i]==KEPT){   // corresponding to 2i+3
           prime=i+i+3;
           count ++;
           for (int k= prime +1; k <= MAXSIZE; k+=prime)
               sieve[k]=DELETED;
        }
        
    for (int i=0; i<=MAXSIZE; i++)
        if (sieve[i]==KEPT)
           cout << 2*i+3 << endl;
    
    cout << "There are " << count << " primes in total.";
    
    system("pause");
    return 0;
    
}
