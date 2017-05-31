#include <iostream>
#include <cmath>
using namespace std; 
 
// Disprove Euler conjecture
// Babis Tsourakakis (babis@seas.harvard.edu)
// March 22, 2017
 
long min(long x,long y){
    if(x<=y) return x;
    else return y;
}
 
void disprove_euler(long N){
    long target = pow(N,5);
        for(long x = N-1;x>= floor( 0.25*N ); x--){
     for(long y = floor( pow( target - pow(x,5), 0.2)); y>=1;y--){
            for(long z = min(y, floor( pow(target - pow(x,5) - pow(y,5), 0.2)) ); z>=1;z--){
                for(long w = min(z,  floor( pow( target - pow(x,5)-pow(y,5)-pow(z,5), 0.2) )); w>=1; w--){
                     cout<<"Checking "<<x<<" "<<" y "<< y << " z "<< z <<" w "<< w <<endl;
                     if( pow(w,5)+pow(z,5)+pow(y,5)+pow(x,5) == target ){
                         cout << "Success! Euler disproved"<<endl;
                         return;
                     }
                }
            }
        }
    }
    return;
 
}
 
int main()
{
    disprove_euler(144);
    return 0;
}
