#include <iostream>

int main(void){
    
    unsigned m, n, r;
    
    unsigned long iterative_power(unsigned long m, unsigned long n);
    
    printf("Power by Iterative\n");
    printf("==================\n");
    printf("The base-->");
    
    std::cin >> m;
    
    printf("\nThe power-->");
    
    std::cin >> n;
    
    r=iterative_power(m,n);
    
    printf("\nOutput:%6d\n", r);
    
    system("pause");
    return 0;
    
}

unsigned long iterative_power(unsigned long m, unsigned long n){
         unsigned long temp = 1;
         
         while (n>0) { // if there exists 1 bits..
               if (n & 0x01UL == 1) // right most one
                  temp *= m;        // YES, ther result get a 'm'
               n >>=1;              // throw away this bit
               if (n>0)
                  m *= m;              // anyway, compute m^k
               
         }
         return temp;
         
}        
