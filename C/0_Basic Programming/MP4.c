#include <stdio.h>
#include <string.h>

int main(){
	char word1[50] = "\0";
	char word2[50] = "\0";
	char placeholder[50] = "\0";
	
	printf("Enter word 1: ");
	scanf("%s", word1);
	
	printf("Enter word 2: ");
	scanf("%s", word2);
	
	printf("%d %d\n", strlen(word1), strlen(word2));
	
	strcpy(placeholder, word1);
	strcat(placeholder, word2);
	
	printf("%s\n", placeholder);
	
	
	placeholder[0] = word1[0];
	word1[0] = word2[0];
	word2[0] = placeholder[0];
	
	printf("%s %s", word1, word2);
	
	return 0;
}
