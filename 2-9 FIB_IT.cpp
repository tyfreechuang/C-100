#include <iostream>

int main(void){
    int n;
    unsigned long f=1;
    
    unsigned long fibonacci(int n);
        
    printf("Fibonacci Series\n");
    printf("================\n");
    printf("Please input the n-->");

    std::cin >> n;
    
    f=fibonacci(n);
    
    printf("\nF(%ld)=%ld",n,f);
    
    system("pause");
    return 0;
    
}

unsigned long fibonacci(int n) {
         unsigned long f0, f1, temp;
         int i;
         
         if (n<=2)
            return 1;
         else {
              for (f0 = f1 =1, i=3; i<=n; i++){
                  temp = f0 + f1;   // temp = f(n-2)+f(n-1)
                  f0 = f1;          // f0 = f(n-2) 
                  f1 = temp;        // f1 = f(n-1) 
              }
              return f1;
         }  
}
