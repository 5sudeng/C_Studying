#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node {
	char country[80];
	char country_code[3];
	int totalCases;
	int totalDeaths;
	struct node * NextPtr;
};

int Length(node * chain) 
{	
	node * thisPtr_L = & chain[0];
	int Count = 0;
	
	while(thisPtr_L != NULL)
	{
		Count ++;
		thisPtr_L = thisPtr_L->NextPtr;
	}
	return Count;
}

void PrintALL(node * chain) 
{	
	node * thisPtr_P = & chain[0];
	
	while(thisPtr_P != NULL)
	{
		printf("Country: %s; Country code: %s\n",  thisPtr_P->country, thisPtr_P->country_code);
		printf("Total Cases: %d\nTotal Deaths: %d\n", thisPtr_P->totalCases, thisPtr_P->totalDeaths);
		thisPtr_P = thisPtr_P->NextPtr;
	}
}

node * FindCountryCode(node * chain, char * input)
{	
}

node * FindMaxCases(node * chain)
{	
}

node * FindMaxDeaths(node * chain)
{	
}

int main(void)
{	FILE * fPtr = fopen("covid-19.csv","r");
	char currentCountry[80] = "";
	int counter=0;
	node chain[235];
	node * maxTotalCases=0;
	node * maxTotalDeaths=0;
	node * head=&chain[0];

	/* Fill in your code here.
	Your code should:
		- Read data from the data file ("covid-19.csv").
		- Calculate the total infection cases and total death cases for each country.
		- Construct a linked list based on the calculated results.
	*/

	maxTotalCases = FindMaxCases(chain);
	maxTotalDeaths = FindMaxDeaths(chain);

	printf("There are %d countries in the data.\n",Length(chain));
	printf("Max Total Cases: %s %d\n",maxTotalCases->country,maxTotalCases->totalCases);
	printf("Max Total Deaths: %s %d\n",maxTotalDeaths->country,maxTotalDeaths->totalDeaths);
		
	char Input[4];
	while(strcmp(Input,"q"))
	{	printf("===============================\n");
		printf("Enter the country code to display the total number of cases and total number of death of the country.\n");
		printf("Enter \"ALL\" to display all data.\n");
		printf("Enter (q to quit): ");
		scanf("%s",Input);
		
		if(!strcmp(Input,"ALL"))
			PrintALL(chain);
		else if(!strcmp(Input,"q"))
			break;
		else
		{	node * ResultPtr = FindCountryCode(chain,Input);
			if (ResultPtr == 0)
				printf("Country Code not found!\n");
			else
				printf("Country: %s; Country code: %s\nTotal Cases: %d\nTotal Deaths: %d\n",ResultPtr->country,ResultPtr->country_code,ResultPtr->totalCases,ResultPtr->totalDeaths);
		}
	}

	return 0;
}
