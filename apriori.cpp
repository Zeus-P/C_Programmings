#include<stdio.h>
#include<stdlib.h>
void items(){
	int ch[4],i=0,j=0;
	int dataSet[4][4],freq[5];
	do{
	printf("How Many Items You've Bought\n");
	scanf("%d",&ch[i]);
	printf("Choose The Items You Bought From Our Store : \n");
	printf("1.Bread\n2.Sauce\n3.Butter\n4.Coldrink\n5.Mayonnaise\n");
	for(j=0;j<ch[i];j++)
		scanf("%d",&dataSet[i][j]);
	i++;
	}while(i!=4);
	printf("You've Enterred Data Items :\n");
	for(i=0;i<4;i++){
	for(j=0;j<ch[i];j++){
		printf("%d",dataSet[i][j]);
		printf("   ");
	}
	printf("\n");
	}
	for(i=0;i<4;i++){
	for(j=0;j<ch[i];j++){
		switch(dataSet[i][j]){
			case 1 : freq[0]++
				break;
			case 2 : freq[1]++;
				break;
			case 3 : freq[2]++;
				break;
			case 4 : freq[3]++;
				break;
			case 5 : freq[4]++;
				
			}
	printf("\n");
	}
	
	
}
 

int main()
{	
	int choice;
	
	do{
		printf("Select Operation You Wanna Perform :\n");
		printf("1.Enter Items \n2.Check Confidence of Items\n3.Exit\n");
		printf("Please Enter Your Choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:items();
			break;
			
		}
}while(choice !=3);
}