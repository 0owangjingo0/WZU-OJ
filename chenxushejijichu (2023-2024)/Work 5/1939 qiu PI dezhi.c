#include <stdio.h>

int main(){
	int i;double s=1;
	for(i=1;i<=100;i++){
		s*=(i*2.0)/(i*2-1);
		s*=(i*2.0)/(i*2+1);
	}
	printf("%.3f\n", s*2);
	return 0;
}