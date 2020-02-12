#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include <stdlib.h>
#include <bits/stdc++.h> 
using namespace std;

#define loop(x,n) for(int x = 0; x < n; ++x)


void solve1(int size , vector<int> v){

	int number;
	int flag;

	for(int i=0 ; i<size ; i++){
		number = v[i];
		flag =0;
		for(int j=i+1 ; j<size ; j++){

			if(v[j] > number){
				flag = 1;
				cout<<v[j]<<" ";
				break;
			}
		}


			if(flag == 0){
				cout<<-1<<" ";
			}
	}

	cout<<endl;

}


void solve2(int size , vector<int> v){

	stack <int> s;
	vector <int> answer;

	loop(i,size){

		if(s.empty()){
			s.push(v[i]);
			continue;
		}

		while(s.empty() == false && s.top() < v[i]){
			cout<<s.top()<<"-->"<<v[i]<<endl;
			s.pop();
		}

		s.push(v[i]);
	}

	while(s.empty() == false){
		cout<<s.top()<<"-->"<<"-1"<<endl;
		s.pop();
	}

	cout<<endl;

}




int main(){

	int t;
	cin>>t;


	loop(x,t){


	int size;
	vector<int> v;
	int temp;


	cin>>size;

	loop(i,size){
		cin>>temp;
		v.push_back(temp);
	}


	//solve1(size,v);
	solve2(size,v);
	}

}
