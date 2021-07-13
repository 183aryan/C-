#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}

int main(){
    vector<int> vec1;
    int element,size;
    cout<<"Enter the size of vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<"Enter the elements to add in this vector"<<endl;
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter,5,566);
    vector<int> v(6,3);
    display(v);

    return 0;
    
}