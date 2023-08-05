#include <bits/stdc++.h> //  bai cho 3 so dem +,-,%,%+
using namespace std;06/08/23 00:53
#include <iostream>

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int duong = 0;
	int am = 0;
	int chiahet = 0;
	int duongchia = 0;
	if(a>0){ // ktra a
		duong++;
		if(a%3==0){
			duongchia++;
		}	
	}
	else if(a<0){
		am++;
	}
	// ktra b
	if(b>0){
		duong++;
		if(b%3==0){
			duongchia++;
		}	
	}
	else if(b<0){
		am++;
	}
	// ktra c
	if(c>0){
		duong++;
		if(c%3==0){
			duongchia++;
		}	
	}
	else if(c<0){
		am++;
	}//
	if(a%3==0){
		chiahet++;
	}
	//
	if(b%3==0){
		chiahet++;
	}
	//
	if(c%3==0){
		chiahet++;
	}
	cout<< duong<<am<<chiahet<<duongchia;
	return 0;
}
