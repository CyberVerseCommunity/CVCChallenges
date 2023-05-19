#include<stdio.h>

int checkPass(char *b){
	if(b[0] == 's'){
		if(b[1] == 'u'){
			if(b[2] == 'd'){
				if(b[3] == 'o'){
					if(b[4] == '0'){
						if(b[5] == 'x'){
							if(b[6] == '1'){
								if(b[7] == '8'){
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}else{
		return 0;
	}
}

int main(int argc, char **argv){
	char buffer[64];

	printf("Welcome to Easy Crack Me");
	printf("What is the Secret ?");
	scanf("%64s", buffer);

	if(checkPass(buffer)){
		printf("You are correct :)");
	}else{
		printf("Better luck next time. :(");
	}
}