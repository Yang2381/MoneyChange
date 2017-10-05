#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

	int q,p,n,d;
	q = 0;
	p = 0;
	n = 0;
	d = 0; 
	int user_input = atoi(argv[1]);
	
	while(user_input > 0){


		while( user_input >= 25){
			q++;
			user_input -= 25;
		}
		while(user_input >= 10){
			d++;
			user_input-=10;
		}
		while(user_input >=5){
			user_input -=5;
			p++;
		}

		while(user_input >= 1){
			n++;
			user_input -=1;
		}
	}
	printf("%d, %d, %d, %d\n",q,d,p,n);
return 0;
}

