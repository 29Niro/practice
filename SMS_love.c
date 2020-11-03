#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	char msg[100],word[100];
	int count=0;

	scanf("%s", msg);
	scanf("%s", word);

	int diffrence = strlen(msg)-strlen(word)+1;

	for(int i=0;i<diffrence;i++){
		for(int j=0;j<strlen(word);j++){
			if(msg[i+j]==word[j]){
				if (msg[i+j]!='['){
					count++;
				}
			}
		}
	}

	printf("%d",count);

	return 0;
}