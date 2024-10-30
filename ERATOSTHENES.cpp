#include <iostream>
#include <cmath> 
using namespace std;

#define ll long long
#define dl double long
#define PI 3.14159265358979323846 
#define MOD 1000000007
#define INF 1000000000


int prime[1000001];

void sieve(){
    for (int i = 0; i < 1000000; i++)
        prime[i] = 1;
        //Loại 0 và 1
    prime[0] = prime[1] = 0; 
    for (int i = 2; i <= 1000; i++){
        if (prime [i]){
            //Duyệt tất cả các bội số của i và cho nó không là số nguyên tố
            for (int j = i * i; j <= 1000000; j+=i){
                prime[j] = 0; //j không còn là số nguyên tố
            }
        }
    }
}

int main() {
    sieve();
    int n;
    cin >> n;

    for(int i = 0; i <= n; i++){
    if (prime[i]){
        cout << i << " ";
    }
    }
    return 0;
}
