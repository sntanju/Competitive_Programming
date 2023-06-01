#include <bits/stdc++.h>
using namespace std;

//#define ll long long

int main() {

	int num;
	scanf("%d",&num);
	int arr[num+1];

	for(int i=0; i < num; i++){
		scanf("%d",&arr[i]);
	}

	int t;
	scanf("%d", &t);

	while(t--){

		int a;
		scanf("%d",&a);
		int sum=0;

		for(int i=0; i < num; i++){

			int x = arr[i]|a;
			int y = arr[i]+a;

			if(x==y)sum+=arr[i];

		}
		printf("%d\n", sum);
	}
}
