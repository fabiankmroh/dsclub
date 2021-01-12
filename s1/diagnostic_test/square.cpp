#include <stdio.h>
#include <algorithm>

using namespace std;

int x1, x2, y1, y2;
int nx1, nx2, ny1, ny2;
int d1, d2;
int sq;

int main(void){
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    scanf("%d %d %d %d", &nx1, &ny1, &nx2, &ny2);
    

    d1 = max(nx2, x2) - min(nx1, x1);
    d2 = max(ny2, y2) - min(ny1, y1);

    sq = max(d1, d2);
    printf("%d\n", sq*sq);

    return 0;
}