#include <stdio.h>
#include <time.h>

void fun();
void bigO_akarN();
// The main program yang memanggil fungsi di line:12 dan menghitung waktu dari fungsi di line:12
int main()
{
	// Calculate the time taken by fun()
	clock_t t;
	t = clock();
	//bigO_akarN();
	fun();
	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

	printf("BigO_akarN() menghabiskan %f detik untuk execute \n", time_taken);
	return 0;
}

// Test function dengan argumen enter untuk stop execution
void fun()
{
	printf("fun() starts \n");
	printf("Press enter to stop fun \n");
	while(1)
	{
		if (getchar())
			break;
	}
	printf("fun() ends \n");
}

// Kompleksitas waktu Big O (akar n)
void bigO_akarN()
{
    int n = 10;
    int i;
    int c = 1;
    for(i=0;i*i<n;i+=c)
    {
        printf("%i\n",i);
    }
}