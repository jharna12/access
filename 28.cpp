#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, non = 1;
    cin>>n;
    vector<int> vec(n);
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }
    sort(vec.begin(), vec.end());
    long int sum = vec[0];
    for(int i=1; i<n; i++){
        if(vec[i]>=sum)
            non++;
        sum += vec[i];
    }
    cout<<non<<endl;
	return 0;
}
