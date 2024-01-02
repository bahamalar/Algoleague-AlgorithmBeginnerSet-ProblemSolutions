/* Problem: 
One day, Omar and Havva went to the ice cream shop.
There are N different types of ice cream and the shop has Ai kilogram of each type.
Omar wants to eat lots of ice cream, therefore he decided to eat all of the N-1 types of ice cream and leave one type to Havva.
Since he wants to eat lots of ice cream, could you print the maximum amount of ice cream that Omar can eat?*/

#include <stdio.h>

int main() {
	int n;
	
	//take the number of ice creams
	scanf("%d",&n);
	
	int a[n],i,min=-1,sum;
	
	//take ice cream weights
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	    sum+=a[i];
	    
	    //bring out the lightest ice cream
	    if(min==-1 || a[i]<min)
	    {
	        min=a[i];
	    }
	}
	
	//subtract the minimum weight of ice cream from the total weight
	printf("%d",sum-min);
	
	return 0;
}

//So the solution to this problem is calculating the total weight and giving the lightest ice cream to Havva. So Omar can eat the rest of it.
