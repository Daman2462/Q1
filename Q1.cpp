#include<iostream>
#include <vector>
using namespace std;
int main(){
int n;
vector<double>arr;
cout<<"Enter number of elements: ";
cin>>n;

for(int i=0;i<n;i++){
double c;
double ans=0;
cout<<<"Enter:";
cin>>c;
arr.push_back(c);
ans+=c;
}
cout<<ans/n<<endl;
return 0;
}
