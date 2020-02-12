#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include <stdlib.h>
#include <bits/stdc++.h> 
using namespace std;

#define loop(x,n) for(int x = 0; x < n; ++x)




int main(){


	int size;
	cin>>size;

	vector<int> v;

	map<int,int> m;

	int temp;
	int flag = 0 ;
	loop(i,size){
		cin>>temp;
		v.push_back(temp);
		m[temp*temp] = 1;
	}


	for(int i=0  ; i<size ; i++){
		for(int j=i+1 ; j<size-1 ; j++){

			if(m[(v[i]*v[i]) + (v[j]*v[j])]==1){
				flag = 1;
				break;
			}
		}

		if(flag == 1 ){
			break;
		}
	}

	if(flag == 1){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}



}