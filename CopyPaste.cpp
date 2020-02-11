#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main(){


	int test;
	cin>>test;

	while(test--){


		int size;
		cin>>size;

		vector<int> a;
		map<int,int> m;

		int temp;
		for(int i=0 ; i<size ; i++){
			cin>> temp;
			a.push_back(temp);
			m[temp] = 1;
		}

		cout<<m.size()<<endl;

	}



}