#include<bits/stdc++.h>

using namespace std;

int fib(int n){
    int arr[n+1];
    int c=0;
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<=n;i++){
        arr[i] = arr[i-1] + arr[i-2];
        c++;
    }
    cout << "Calls needed Bottom_up method " << c << endl;
    return arr[n];
}

int s=0;
int k=0;

int fib2(int n){
    if(n==0){s++;
        return 0;
    }
    else if(n==1){
        s++;
        return 1;
    }
    else{
        s++;
    return fib2(n-1)+fib2(n-2);
    }
    
}

int q=0;
int aka[1000];
int fib3(int n){

    if(aka[n]==-1){
        if(n==0){
            q++;
            return 0;
        }
        else if(n==1){
            q++;
            return 1;
        }
        else{
            q++;
            aka[n] = fib3(n-1)+fib3(n-2);
            cout << aka[n] << endl;
        }
    }
    return aka[n];
}


int main()
{

 
    // to store execution time of code
	double time_spent = 0.0;
    int n;
    cin >> n;
    for(int i=0;i<=n;i++){
        aka[i]=-1;
    }

	clock_t begin = clock();

	// do some stuff here
    cout << fib3(n) << endl;
    cout << "Calls Needed is "  <<  q << endl;
	//Sleep(3);

	clock_t end = clock();

	// calculate elapsed time by finding difference (end - begin) and
	// dividing the difference by CLOCKS_PER_SEC to convert to seconds
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

	printf("Time elpased is %f seconds", time_spent);

	return 0;

}

