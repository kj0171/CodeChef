#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include <stdlib.h>
#include <bits/stdc++.h> 
using namespace std;

#define loop(x,n) for(int x = 0; x < n; ++x)


void DISPLAY(vector<int> number){
	loop(i,number.size()){
		cout<<number[i]<<" ";
	}
}



int main(){

	int size;
	cin>>size;
	vector<int> numbers;
	int temp;

	loop(t,size){
		cin>>temp;
		numbers.push_back(temp);
	}


	loop(i,size){

		loop(j,size-i-1){

			if( numbers[j] > numbers[j+1]){

				temp = numbers[j];
				numbers[j] = numbers[j+1];
				numbers[j+1] = temp;
			}

			cout<<"i:"<<i<<" j:"<<j<<" ";
			DISPLAY(numbers);
			cout<<endl;

		}


	}

	



}