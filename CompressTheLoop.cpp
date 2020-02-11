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


	int test;
	cin>>test;


	loop(t,test){

		vector<int> series;

		int size;
		string answer;
		int temp;

		int flag=0;
		int count=0;

		loop(i,size){

			cin>>temp;
			series.push_back(temp);

		}

		answer.append(series[0] - '0');

		loop(i,size-1){

			if(series[i+1] - series[i] == 1 ){
				flag =1 ;
				count++;
			}else{

				if(flag == 0){
					answer.append(',');
					answer.append(series[i] - '0');
				}

				else{

					flag=0;
					count=0;

					if(count>=3){
						answer.append("...");
						answer.append(series[i]-'0');
					}else{
						answer.append(",");
						answer.append(series[i]-'0');
					}

				}
			}

		}

		cout<<endl;

	}

}