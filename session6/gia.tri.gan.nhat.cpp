	// tim gia tri trong mang gan gia tri x nhat
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

		int imin;
		imin=arr[0];
	for (int i=0;i<n;i++){	
		imin=(arr[i]-x);
	}
	printf ("gia tri gan nhat la :\n  %d ", imin);
		
	}

	
	

