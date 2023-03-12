#include<stdio.h>
int main()
{
	int i,j,z;
	scanf("%d %d",&i,&j);
  	int arr[100][100];
	for(int a=0;a<i;a++){
		for(int b=0;b<j;b++){
			scanf("%d",&arr[a][b]);
		}}
	scanf("%d",z);
	int p=0;
	for(int c=0;c<i;c++){
		for(int d=0;d<j;d++){
			if(arr[c][d]==z){
				p=1;
				printf("(%d,%d)",c,d);
			}
		}
	}

	if(p==0){
			printf("(-1,-1)");
	}
	return 0;
}
