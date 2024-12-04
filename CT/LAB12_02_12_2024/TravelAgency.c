#include<stdio.h>
#include<string.h>
void main(){
	char *dest[10][4] = {
	{"Cambodia", "150", "300", "1"}, 
	{"Venice", "400", "1500", "2.5"},
	{"Kerala", "50", "500", "0.5"},
	{"Stuttgart", "300", "900", "2"},
	{"Bangkok", "120", "550", "0.5"},
	{"Austin", "300", "1200", "3"},
	{"Shinjiku", "200", "700", "1"},
	{"Seoul", "220", "800", "1"},
	{"Russia", "320", "500", "1"},
	{"Bali", "100", "350", "0.5"}
	};
	for (int i = 0; i < 10; i++){
        	for (int j = 0; j < 4; j++)
        	{
            		printf("%s ", dest[i][j]);
        	}
        	printf("\n");
    	}
    	printf("Enter travel information (location, budget, no.of tickets):\n");
    	char DDest[3][50];
    	scanf("%s %s %s", DDest[0], DDest[1], DDest[2]);
    	char location[50];
    	strcpy(location, DDest[0]);
    	int locidx = 0;
    	int checkloc = 0;
    	for (int i = 0; i < 10; i++)
    	{
    		if(strcmp(location, dest[i][0])==0)
    		{
    			checkloc++;
    			locidx = i;
    		}
    	}
    	int cost = ((DDest[2])*dest[locidx][1])+dest[locidx][2];
    	printf("%d", cost);
    	if(checkloc == 1)
    	{
    		printf("The location entered: %s\n", location);
    	}
    	else
    	{
    		printf("Enter a valid location.\n");
    	}
}
