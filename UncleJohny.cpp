#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(){

	int test;
	cin>>test;

	while(test--){

		int n;
		cin>>n;
		vector<long> songs;

		long temp;
		for(int i=0 ; i<n ; i++){
			cin>>temp;
			songs.push_back(temp);
		}

		int k;
		cin>>k;
		
		int answer=1;
		for (int i=0; i<n; i++) {
      		if (songs[i] < songs[k-1])
        	answer++;
    	}

		cout<<answer<<endl;

	}

}