#includ <stdio.h>
extern void swap(int *x,int *y);
{
	int temp ;
	temp =x;
	x=y;
	y=temp;
}
int main(){
	printf("hello world\n");

	return 0;
}

