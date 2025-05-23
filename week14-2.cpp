//week14-2.cpp
//UVA11063
#include <stdio.h>
int main()
{
	int a[100];
	int N,t=1;
	while(scanf("%d",&N)==1){ //Part1
		int bad=0; //not bad
		for(int i=0;i<N;i++){ //Part1:Input
			scanf("%d",&a[i]); //Part1:Input
			//Part3:bigger and bigger
			if(i>0)if(a[i-1] >= a[i]) bad=1;
		}

		int table[20002]={};//Part4
		for(int i=0;i<N;i++){
			for(int j=i;j<N;j++){
				int now=a[i]+a[j];
				//Part6
				if(table[now]>0) bad=1;
				table[now]++;
			}
		}

		//Part2:Output
		if(bad==0) printf("Case #%d: It is a B2-Sequence.\n\n",t);
		else printf("Case #%d: It is not a B2-Sequence.\n\n",t);
		t++;
	}
}
