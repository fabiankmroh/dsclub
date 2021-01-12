#include <stdio.h>
#include <algorithm>

using namespace std;

int n, i, j;
int games[100][2];
int cnt, cnt1, cnt2;

int main(void){
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		for(j = 0; j < 2; j++){
			scanf("%d", &games[i][j]);
		}
	}
		
	for(i = 0; i < n; i++){
		if(games[i][0] == 1 && games[i][1] == 2){
			cnt++;
		} else if(games[i][0] == 2 && games[i][1] == 3){
			cnt++;
		} else if(games[i][0] == 3 && games[i][1] == 1){
			cnt++;
		}
	}


	for(i = 0; i < n; i++){
		if(games[i][0] == 2 && games[i][1] == 1){
			cnt2++;
		} else if(games[i][0] == 1 && games[i][1] == 3){
			cnt2++;
		} else if(games[i][0] == 3 && games[i][1] == 2){
		    cnt2++;
		}
	}

	printf("%d\n", max(cnt,cnt2));
    return 0;
}