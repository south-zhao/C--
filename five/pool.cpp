#include<iostream>
using namespace std;

const float PI=3.1415;
const float FENCE_PRICE=35;
const float CONCRETE_PRICE=20;

class Circle{
	public:
		Circle(float r);
		float circum();
		float area();
	private:
		float radius;
};

Circle::Circle(float r){
	radius=r;
}
float Circle::circum(){
	return PI*2*radius;
}

float Circle::area(){
	return PI*radius*radius;
}

int main(){
	float radius;
	cin>>radius;
	Circle pool(radius);
	Circle poolRim(radius+3);
	float fence=poolRim.circum()*FENCE_PRICE;
	cout<<fence<<endl;
	float concrete=(poolRim.area()-pool.area())*CONCRETE_PRICE;
	cout<<concrete<<endl;
	return 0;
}
