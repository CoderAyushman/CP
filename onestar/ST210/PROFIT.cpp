#include <bits/stdc++.h>
using namespace std;
// st-210, div-4, q-2, df-607, timetaken-9min
int main() {
	int t,n,x,c=0,p=0;
	cin>>t;
	while(t--){
	    cin>>n>>x;
	    for(int i=1; i<=n; i++){
	        if(i>=x){
	        c++;
	        p+=i;
	        }
	    }
	    cout<<p-c*x<<endl;
	    c=0;
	    p=0;
	}

	return 0;
}
