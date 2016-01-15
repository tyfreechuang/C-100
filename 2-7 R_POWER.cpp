#include <iostream>

int main(void){
    
    unsigned m, n, r;
    
    unsigned long recursive_power(unsigned long m, unsigned long n);
    
    printf("Power by Recursion\n");
    printf("==================\n");
    printf("The base-->");
    
    std::cin >> m;
    
    printf("\nThe power-->");
    
    std::cin >> n;
    
    r=recursive_power(m,n);
    
    printf("\nOutput:%6d\n", r);
    
    system("pause");
    return 0;
    
}

unsigned long recursive_power(unsigned long m, unsigned long n){
         unsigned long temp;
         
         if (n==0)     // m^0=1
            return 1;
         else if (n & 0x01UL==0) {     // if power is even then
              temp = recursive_power(m, n >> 1);
              return temp * temp;      // m^(2k) = (m^k)^2
              }
              else
              return m * recursive_power(m, n-1);
}        
