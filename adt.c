#include<stdio.h>
#include<stdlib.h>

struct adt
{
	int cap;
	int lastin;
	int*ptr;
};

struct adt* create(int cap)
{
	struct adt *arr;
	arr=(struct adt*)malloc(sizeof(struct adt));
	arr->cap=cap;
	arr->lastin=-1;
	arr->ptr=(int*)malloc(arr->cap*sizeof(int));
	return(arr);
}

int getitem(struct adt *arr,int index)
{
	if(arr->lastin<index||index<0)
	{
		printf("\nInvalid index");
		return(-1);
	}
	else
	{
		return(arr->ptr[index]);
	}
}

int setitem(struct adt* arr,int index,int value)
{
	int i;
	if(arr->lastin==arr->cap-1)
	{
		printf("overflow!");
		return(0);
	}
	if(index<0||index>arr->lastin+1)
	{
		printf("\nINvalid index");
		return(0);
	}
	if(index<=arr->lastin)
	{
		arr->lastin=arr->lastin+1;
		i=arr->lastin;
		while(i!=index)
		{
			arr->ptr[i]=arr->ptr[i-1];
			i--;
		}
		arr->ptr[i]=value;
		return(1);
	}
	if(index==arr->lastin+1)
	{
		arr->lastin=arr->lastin+1;	
		arr->ptr[index]=value;
		return(1);
	}
}

int edititem(struct adt* arr,int index, int newvalue)
{
	if(index<0||arr->lastin<index)
	{
		printf("Invalid index");
		return(0);
	}
	else
	{
		arr->ptr[index]=newvalue;
		return(1);
	}
}

int countitems(struct adt*arr)
{
return(arr->lastin+1);
}

int removeitem(struct adt*arr,int index)
{
	if(index<0||index>arr->lastin)
	{
		printf("Invalid index");
		return(0);
	}
	if(index<arr->lastin)
	{
		int i;	
		i=index;
		while(i<arr->lastin)
		{
			arr->ptr[i]=arr->ptr[i+1];
			i++;
		}
		arr->lastin=arr->lastin-1;
		return(1);
	}
	if(index==arr->lastin)
	{
		arr->lastin=arr->lastin-1;
		return(1);
	}
}

int search(struct adt* arr,int item)
{
	int i;
	if(arr->lastin==-1)
		return(-1);
	for(i=0;i<=arr->lastin;i++)
		if(arr->ptr[i]==item)
			return(i);
		else
			return(-1);
}

void sort(struct adt* arr)
{
	int i,j,n,temp;
	n=arr->lastin+1;
	for(i=0;i<n;i++)
		for(j=i;j<n;j++)
			if(arr->ptr[i]>arr->ptr[j])
			{
				temp=arr->ptr[i];
				arr->ptr[i]=arr->ptr[j];
				arr->ptr[j]=temp;
			}	
}

main()
{
	int n,a,b,i;
	struct adt *arr;
	printf("Enter size of adt ");
	scanf("%d",&n);
	arr=create(n);
	while(1)
	{
		printf("Enter 1.getitem	2.setitem 3.edititem 4.countitem 5.removeitem 6.search 7.sort");
		scanf("%d",&i);
		if(i==1)
		{
			printf("Enter Index");
			scanf("%d",&a);
			printf("%d",getitem(arr,a));
		}
		else if(i==2)
		{
			printf("Enter Index and value");
			scanf("%d%d",&a,&b);
			setitem(arr,a,b);
			
		}
		else if(i==3)
		{
			printf("Enter Index and value");
			scanf("%d%d",&a,&b);
			edititem(arr,a,b);	
		}
		else if(i==4)
		{
			printf("%d",countitem(arr));
		}
		else if(i==5)
		{
			printf("Enter Index");
			scanf("%d",&a);
			removeitem(arr,a);
		}
		else if(i==6)
		{
			printf("Enter value");
			scanf("%d",&a);
			search(arr,a);
		}
		else if(i==7)
		{
			sort(arr);
		}

	}
	return(0);
}











