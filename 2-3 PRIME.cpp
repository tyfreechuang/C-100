#include <iostream>

#define MAXSIZE 100
#define YES     1
#define NO      0

using namespace std;

int main()
{
    int prime[MAXSIZE]; // array to contains primes
    int gap = 2;
    int count = 3;
    int may_be_prime = 5;
    int is_prime;
    
    prime[0]=2;
    prime[1]=3;
    prime[2]=5;
    
    while (count < MAXSIZE){ // loop until prome[] full
          may_be_prime += gap; // next number
          gap = 6-gap;
          is_prime = YES;
          
          if (may_be_prime % 5 ==0)
             is_prime = NO;
          else
          for (int i=2; prime[i]*prime[i] <= may_be_prime && is_prime; i++)
              if (may_be_prime % prime[i] == 0) // NO
                 is_prime = NO;
          if (is_prime) // if it IS a prome
             prime[count++] = may_be_prime; // save it

    }
    
    cout << "Prime Number Generation Program" << endl
         << "===============================" << endl
         << "The First " << MAXSIZE << " Prime Numbers are" << endl;
         for (int j=0; j<count; j++)
             cout << prime[j] << endl;
                       
    system("pause");
    return 0;
}
