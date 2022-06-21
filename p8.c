#include<stdio.h>
main()
{
	char game[]={'_','_','_','_','_','_','_','_','_'};

	int turn=1,p;

	while(turn<10)
	{

		if(turn%2==0)
		{
			printf("\nKush ur turn , Enter position =>");
			scanf("%d",&p);
			if(game[p-1]=='_')
			{
				game[p-1]='X';
			}
			else
			{
				printf("\nalready");
				turn--;
			}
		}
		else
		{
			printf("\nAaquib ur turn , Enter position =>");
			scanf("%d",&p);
			if(game[p-1]=='_')
			{
				game[p-1]='0';
			}
			else
			{
				printf("\nalready");
				turn--;
			}
		}





	printf("\nafter %d turn",turn);
	printf("\n\t%c  | \t%c   |\t%c",game[0],game[1],game[2]);
	printf("\n------------------------------");
	printf("\n\t%c  |\t%c    |\t%c",game[3],game[4],game[5]);
	printf("\n------------------------------");
	printf("\n\t%c  |\t%c    |\t%c",game[6],game[7],game[8]);

if(game[0]==game[1] && game[0]==game[2] && game[0]=='X')
	{
		printf("\nKush is winner");
		turn=15;
	}
	else if(game[0]==game[1] && game[0]==game[2] && game[0]=='0')
	{
		printf("\nAAquib is winner")	;
		turn=15;
	}
else if(game[3]==game[4] && game[3]==game[5] && game[3]=='X')
	{
		printf("\nKush is winner");
		turn=15;
	}
	else if(game[3]==game[4] && game[3]==game[5] && game[3]=='0')
	{
		printf("\nAAquib is winner")	;
		turn=15;
	}

	else if(game[6]==game[7] && game[6]==game[8] && game[6]=='X')
	{
		printf("\nKush is winner");
		turn=15;
	}
	else if(game[6]==game[7] && game[6]==game[8] && game[6]=='0')
	{
		printf("\nAAquib is winner")	;
		turn=15;
	}
else if(game[0]==game[3] && game[0]==game[6] && game[0]=='X')
	{
		printf("\nKush is winner");
		turn=15;
	}
	else if(game[0]==game[3] && game[0]==game[6] && game[0]=='0')
	{
		printf("\nAAquib is winner")	;
		turn=15;
	}

	else if(game[1]==game[4] && game[1]==game[7] && game[1]=='X')
	{
		printf("\nKush is winner");
		turn=15;
	}
	else if(game[1]==game[4] && game[1]==game[7] && game[1]=='0')
	{
		printf("\nAAquib is winner")	;
		turn=15;
	}

	else if(game[2]==game[5] && game[2]==game[8] && game[2]=='X')
	{
		printf("\nKush is winner");
		turn=15;
	}
	else if(game[2]==game[5] && game[2]==game[8] && game[2]=='0')
	{
		printf("\nAAquib is winner")	;
		turn=15;
	}
	else if(game[0]==game[4] && game[8]==game[0] && game[0]=='X')
	{
		printf("\nKush is winner");
		turn=15;
	}
	else if(game[0]==game[4] && game[8]==game[0] && game[0]=='0')
	{
		printf("\nAAquib is winner")	;
		turn=15;
	}

	else if(game[2]==game[4] && game[6]==game[2] && game[2]=='X')
	{
		printf("\nKush is winner");
		turn=15;
	}
	else if(game[2]==game[4] && game[6]==game[2] && game[2]=='0')
	{
		printf("\nAAquib is winner")	;
		turn=15;
	}



	turn++;
	}

//printf("\nTurn = %d",turn);
if(turn==10)
{
	printf("\nit's tie");
}
}
