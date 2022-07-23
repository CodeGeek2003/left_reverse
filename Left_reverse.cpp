#include <vector>
#include <iostream>
#include <deque>
#include <stack>
#include <string>
using namespace std;
using ll=long long;
using dq= std::deque<int>;
using vec= std::vector<int>;
using vst=std::vector<char>;
int main(){
    dq arr;
    int arr_el,op_num,i,x;
    cin>>arr_el>>op_num;
    for(i=0;i<arr_el;i++){
        cin>>x;
        arr.push_back(x);
    }
    int temp;
    for (i=0;i<op_num;i++){
        temp=arr.front();
        arr.pop_front();
        arr.push_back(temp);
    }
    for(i=0;i<arr_el;i++){
        cout<<arr[i]<<" ";
    }
}
