#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double arrone[] , int N , double arrtwo[]){
    double ans = 0;
    double ximinusxbar[N];
    for(int i = 0 ; i < N ; ++i){
        ans += arrone[i];
    }
    arrtwo[0] = ans / N;
    ans = 0;
    for(int i = 0 ; i < N ; ++i){
        ximinusxbar[i] = pow(arrone[i] - arrtwo[0],2);
        ans += ximinusxbar[i];
    }
    arrtwo[1] = pow(ans/N,0.5);
    ans = 1;
    for(int i = 0 ; i < N ; ++i){
        ans = ans * arrone[i];
    }
    arrtwo[2] = pow(ans,(1.0/N));
    ans = 0;
    for(int i = 0 ; i < N ; ++i){
        double tuasuan = 0;
        tuasuan = 1/arrone[i]; 
        ans = ans + tuasuan;
    }
    arrtwo[3] = N/ans;
    double min = arrone[0], max = arrone[0];
    for(int i = 0 ; i < N ; ++i){
        if(arrone[i] > max) max = arrone[i];
        if(arrone[i] < min) min = arrone[i];
    }
    arrtwo[4] = max;
    arrtwo[5] = min;

    return;
} 