#include<stdio.h>
enum suit{hearts,diamonds,clubs,spades};
enum rank{ace=1,two,three,four,five,six,seven,eight,nine,ten,jack,queen,king,};
int main(){
printcard,suit,rank;

	switch(suit){
		for(suit=hearts;suit<=spades;suit++)
		{
			for(rank= ace;rank<=king;rank++){
				printcard(suit,rank);
			}
		}{
		case hearts:
			printf("hearts \n");
			break;
			case diamonds :
				printf("diamonds \n");
				break;
				case clubs:
					printf("clubs \n");
					break;
					case spades:
						printf("spades \n");
						break;
				
	}
	printf("off");
	switch(rank){
		case ace:
			printf("ace");
			break;
			case jack:
			printf("jack");
			break;
			case queen:
			printf("queen");
			break;
			case king:
			printf("king");
			break;
			default:
				printf("%d",rank);
			}
			printf("\n");
			
			
	}
}
		
	return 0;
}

