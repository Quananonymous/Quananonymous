#include<iostream>
#include <cstdlib>
#include<math.h>
using namespace std;
bool Snt(int N)
{
    int a = sqrt(N);
    int dem  = 0;
    for (int i = 1; i <= a; i++ )
        {
            if (N % i == 0){
                dem ++;
            }
        }
    return dem == 1;
    }
void TimUoc(int N){
    int itam = 1;
    for (int i = itam; i <= sqrt(N); i++){
        if (Snt(i) == 1 && N % i == 0){
            N = N / i;
            itam = i;
            cout << i << " ";
            cout << itam <<endl;
            cout << N << endl;
             system("pause");
        }    
    }
}
int main(){
    int N;
    cout << "Moi nhap N: ";
    cin >> N;
    TimUoc(N);
    return 0;

    }
