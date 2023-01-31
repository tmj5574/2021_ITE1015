#include <iostream>
using namespace std;

int add(int a,int b){
	return a+b;}

string add(std::string a, std::string b){
	return a+"-"+b;}

float add(float a, float b = 0.9){
	return a+b;}

int main(){
	int a,b;
	string c,d;
	float f;
	cin >> a >> b >> c >> d >> f ;
	cout << add(a,b)<<endl<< add(c,d)<<endl<< add(f)<<endl;
	return 0;}
	
