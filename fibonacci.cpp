#include<iostream>

using namespace std;

int main(void){

    int t, n;
    cin >> t;

    for(int i=0; i<t; i++){
        
        int zero1=0, one1=0, zero2=0, one2=0;
        int zero3=0, one3=0;
        cin >> n;
        int j = 0;
        do{
            zero3 = 0;
            one3 = 0;

            if(j == 0)
                zero3 ++;
            else if(j == 1)
                one3 ++;
            else{
                
                zero3 = zero1 + zero2;
                one3 = one1 + one2;
            }
            zero1 = zero2;
            one1 = one2;
            zero2 = zero3;
            one2 = one3;
        
            j++;
        }while(j <= n);

        cout << zero3 << " " << one3 << endl;

    }

    return 0;
}
