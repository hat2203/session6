	// tim gia tri trong mang xa gia tri x nhat
# include <stdio.h>
# include <math.h>
int main (){
	int n;
	printf ("nhap n=");
	scanf ("%d", &n);
	int arr[n];
	for (int i=0; i<n ;i++){
		scanf ("%d", &arr[i]);
	}
	int x;
	printf ("nhap x=");
	scanf ("%d", &x);

		int imax;
	for (int i=0;i<n;i++){	
		imax=(x-arr[i]);
	}
	printf ("gia tri xa nhat la :\n  %d ", imax);
		
	}

	
	

