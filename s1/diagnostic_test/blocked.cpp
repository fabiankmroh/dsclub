#include <stdio.h>
#include <algorithm>

using namespace std;

int loc[3][4];
int i, j;
int ans = 0;
int hOver, vOver;

int main(void){
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++)
            scanf("%d", &loc[i][j]);
    }

    for(i = 0; i < 2; i++){
        ans += (loc[i][2] - loc[i][0])*(loc[i][3]-loc[i][1]); // Original Billboard Area

        hOver = min(loc[2][2], loc[i][2]) - max(loc[2][0], loc[i][0]); // horizontal overlap
        vOver = min(loc[2][3], loc[i][3]) - max(loc[2][1], loc[i][1]); // vertical overlap
        
        if(hOver > 0 && vOver > 0)
            ans -= hOver*vOver;
    }

    printf("%d\n", ans); // Answer print
    return 0;
}