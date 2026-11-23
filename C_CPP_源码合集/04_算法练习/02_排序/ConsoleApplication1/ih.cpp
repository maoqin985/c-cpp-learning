#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int n,m;
	while(cin>>n>>m){
		vector<int> v(n);
		for(int i=0;i<m;i++)
		cin>>v[i];
		sort(v.begin(),v.end());
		for(int i=n-1;i<n-m-1;i--){
		cout<<v[i]<<endl;
		if(i>n-m-1)
		cout<<' ';
	}
}
	cout<<"\n";
	return 0;
} 
