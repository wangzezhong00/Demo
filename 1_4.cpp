# include <iostream>
# include <cmath>
using namespace std;

int main()
{
    int flag;
    cout<<"The prime numbers are as follows: ";
    for(int i = 2; i <= 100; i++){
        flag = 1;
        for(int j = 2; j <= sqrt(i); j++){
            if(i % j == 0){
                flag = 0;
                break;
            }
        }
        if (flag == 1) cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}