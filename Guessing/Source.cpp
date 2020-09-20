#define CRT_SECURE_NO_WARNING
#include<stdio.h>
int main()
{
	char ans[10];
	printf("Answer : ");
	int i = 0;
	while (i < 10)
	{
		scanf_s("%c", &ans[i]);
		i++;
	}

	char Adrian[10] = {'A','B','C','D','A','B','C','D','A','B'};
	char Bruno[10] = {'B','A','B','C','B','A','B','C','B','A'};
	char Goran[10] = {'C','C','A','A','B','B','C','C','A','A'};

	int j = 0;
	i = 0;
	while (i < 10)
	{
		if (ans[i] == Adrian[i])
		{
			j++;
		}
		i++;
	}
	printf("Adrian's score : %d\n",j);

	j = 0;
	i = 0;
	while (i < 10)
	{
		if (ans[i] == Bruno[i])
		{
			j++;
		}
		i++;
	}
	printf("Bruno's score : %d\n", j);

	j = 0;
	i = 0;
	while (i < 10)
	{
		if (ans[i] == Goran[i])
		{
			j++;
		}
		i++;
	}
	printf("Goran's score : %d\n", j);
	return 0;
}