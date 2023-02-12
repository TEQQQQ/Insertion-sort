#include<iostream>
using namespace std;
template <typename Type>
void insertion(Type dizi[], int boyut){
	Type i,x,y;
	for(i = 1;i<boyut;i++){
		Type x = dizi[i];
		y = i-1;
		
		while(y>0 && dizi[y]>x){
			dizi[y+1] = dizi[y];
			y--;
		}
		dizi[y+1] = x;
	}
}

int main(){
	int dizi[] = {1,9,8,5,7,1,2};
	int boyut = sizeof(dizi)/sizeof(dizi[0]);
	insertion(dizi,boyut);
	for(int i = 0; i<boyut;i++){
		cout<<dizi[i]<<" ";
	}
}
