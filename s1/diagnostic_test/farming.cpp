#include <stdio.h>

using namespace std;

long long b[3];
long long m[3];
int i, j, remain;

int main(void){
    for(i = 0; i < 3; i++){
        scanf("%lld %lld", &b[i], &m[i]);
    }

    for(i = 0; i < 100; i++){
        if(i % 3 == 0){
            remain = b[1]-m[1];

            if(m[0] < remain){ // All transfer
                m[1] += m[0];
                m[0] = 0; 
            }
            else{
                m[1] = b[1];
                m[0] -= remain;
            }
        }
        else if(i % 3 == 1){
            remain = b[2] - m[2];

            if(m[1] < remain){
                m[2] += m[1];
                m[1] = 0;
            }
            else{
                m[2] = b[2];
                m[1] -= remain;
            }
        }
        else{
            remain = b[0] - m[0];

            if(m[2] < remain){
                m[0] += m[2];
                m[2] = 0;
            }
            else{
                m[0] = b[0];
                m[2] -= remain;
            }
        }
    }

    for(i = 0; i < 3; i++){
        printf("%lld\n", m[i]);
    }
    return 0;
}