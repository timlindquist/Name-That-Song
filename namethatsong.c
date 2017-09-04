#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int new_page(){
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
return 0;
}

int main_menu(){
	printf("   _  __                 ________        __     ____                 __\n");
	printf("  / |/ /__ ___ _  ___   /_  __/ /  ___ _/ /_   / __/__  ___  ___ _  / /\n");
	printf(" /    / _ `/  ' \\/ -_)   / / / _ \\/ _ `/ __/  _\\ \\/ _ \\/ _ \\/ _ `/ /_/ \n");
	printf("/_/|_/\\_,_/_/_/_/\\__/   /_/ /_//_/\\_,_/\\__/  /___/\\___/_//_/\\_, / (_)  \n");
	printf("                                                           /___/       \n");

return 0;
}


int main(){
	new_page();
	main_menu();
	int minyear;
	int numrounds=10;
	int team1score=0;
	int team2score=0;
	int i;
	int j;
	int temp;

	printf("\nEnter a min year: ");
	scanf("%d",&minyear);
	if(minyear<2002){
		printf("Too early we will go with 2002\n");
		minyear=2002;
	}
	printf("\nNumber of rounds: ");
	scanf("%d",&numrounds);
	int mod=2017-minyear;
	char * team1="team 1";
	char * team2="team 2";


	for(i=0;i<numrounds;i++){
		for(j=0;j<2;j++){
			new_page();
			main_menu();
			printf("Round %d	Team %d				Scores: Team1=%d, Team2=%d",i+1,j+1,team1score,team2score);
			srand (time(NULL));
			int year=rand()%mod+minyear;
			int song=rand()%100+1;
			printf("\nYear: %d, Song: %d\n",year,song);
			if(j==0){
				printf("\nTeam %d points: ",j+1);
				scanf("%d",&temp);
				team1score=team1score+temp;
			}
			if(j==1){
				printf("\nTeam %d points: ",j+1);
				scanf("%d",&temp);
				team2score=team2score+temp;
			}
		}
	}


return 0;	
}
