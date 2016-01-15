#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    int a_100, b_10;
    int number;
    int count;
    int a_cube, b_cube, c_cube;
    int cube_sum;
    
    cout <<"The armstrong numbers are:"<< endl
         <<"=========================="<< endl;
    
    for (a=1, a_100=100; a<10; a++, a_100+=100){
        a_cube=a*a*a;
        for (b=0, b_10=0; b<10; b++, b_10+=10){
            b_cube=b*b*b;
            for (c=0; c<10; c++){
                c_cube=c*c*c;
                number = a_100+b_10+c;
                cube_sum=a_cube+b_cube+c_cube;
                // cout << "number=" << number << " cube=" << cube_sum << endl;
                if (number==cube_sum)
                cout <<"The number "<< ++count << "armstrong number is " << cube_sum << endl;
            }
            
        }
    }
    system("pause");
    return 0;
}
