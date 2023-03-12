#include<stdio.h>
#include<math.h>
int a=45893;
int main(){
	printf("Five digit number is : %d\n",a);
	int maximum=0,i=5,t=0;
	while((i)!=0){
		t=(a/(int)pow(10,(i)))+a%(int)pow(10,(i-1));
		maximum=maximum>t?maximum:t;
		i--;
	}
	printf("%d is the biggest 4 digit number in %d",maximum,a);

	return 0;
}
