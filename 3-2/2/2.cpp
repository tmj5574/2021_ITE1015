#include <iostream>

#include <string>

using namespace std;

string primeFactorization(unsigned int_number){
	string result;
	int count = 0;
	int exnum;
	int len1;
	int len2;
	int ex = 1;

	for(int i = 2; i<int_number+1; i++){


		if(int_number == 1){
			break;
		}

		else if (int_number % i == 0){
			int_number /= i;
			count++;

			if (exnum == i){
				result.erase(len1, len2-len1);
			}

			if (result != ""){
				if(ex > 1){
					result += "";
				}
				else{
					result += " X ";
			}
			ex++;
			}
			
	}
		

		else if (int_number % i != 0){
			count = 0;
			ex = 1;
			continue;
		}
	len1 = result.size();
	result = result + to_string(i) + "^" + to_string(count);
	len2 = result.size();
	exnum = i;
	i--;

		
}

 return result;
}

int main(void){
	unsigned int number;
	cin >> number;

	cout << primeFactorization(number) << endl;
	return 0;
}
