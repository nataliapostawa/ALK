#include <iostream>
#include <stdio.h>
using namespace std;

// Napisz program wyznaczający następnik k-elementowego podzbioru T zbioru {1, . . . , n}
// w uporządkowaniu antyleksykograficznym podzbiorów k-elementowych.

int main() {
int n, k;

scanf("%d %d", &n, &k);

int *T = new int[k+2];

for(int i=1; i<=k; i++){
	scanf("%d", &T[i]);
}

T[0]=n+1;

int i=k;

while (i>0 && T[i]==T[i-1]-1){
	i--;
}

if(i==0) {
	printf("Brak nastepnika");
	return 0;}

T[i]=T[i]+1;

for(int j=i+1; j<=k; j++){
	T[j]=k-j+1;
}

for(i=1; i<=k; i++){
	printf("%d ", T[i]);
}
	
	return 0;
}
