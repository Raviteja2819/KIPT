#include<stdio.h>

	int add(int,int);
	int sub(int,int);
    void compute(int,int, int(*)(int,int) );


	int main() {
	  int a=2,b=1,c,d;
	  compute(a,b,add);
	  compute(a,b,sub);
	  return 0;
	  	}

	void compute(int x, int y, int (*comp)(int,int) ) {
	  int z;
	  z=comp(x,y);
	  printf("%d\n",z);
	}


	int add(int x,int y) {
	  return x+y;
	}
	int sub(int x,int y) {
	  return x-y;
	}
