#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include <stdlib.h>
#include <bits/stdc++.h> 
using namespace std;




int main(){


	int test;
	cin>>test;


	for(int t=0 ; t<test ; t++){

		string number;
		cin>>number;

		vector<long> v;

		string temp;
		for(int i=0 ; i<number.size() ; i++){


			temp = number;

    		temp.erase(temp.begin()+i);
    		char array[temp.size()+1];
    		strcpy(array , temp.c_str());

			v.push_back(atoi(array));
		}

		sort(v.begin() , v.end());

		cout<<v[0]<<endl;

	}



}