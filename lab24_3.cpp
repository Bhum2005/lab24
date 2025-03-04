#include<iostream>

using namespace std;

//Write function count() here.
#include <vector>
int count(int x[],int y){
    vector<int> dat;
    int count=0;
    for(int i=0;i<y;i++){
        int num=dat.size();
        if(num==0){
            dat.push_back(x[i]);
            count++;
        }
       else{
        bool check=true;
            for(int j=0;j<num;j++){
            if(x[i]==dat[j]){
                check=false;
            }
        }
        if(check==true){
            count++;
            dat.push_back(x[i]);
        }
       }
    }
    return count;
}

int main(){	
	int data[] = {1,2,4,5,4,8,2,1,2,4,6,1,4,4,4,2,1,0,12}; 
	
	cout << "There are " << count(data,sizeof(data)/sizeof(int)); 
	cout << " different numbers in data.";
	
	return 0;
}
