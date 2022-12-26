#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    int i,t,n,k,x;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;

        for(i=0; i<n; i++)
        {
            cin>>x;
            v.push_back(x);
        }

        k=k-1;
        int temp=v[k];

//
        vector<int>::iterator it;


//erase k-th
        v.erase(v.begin()+k);

//sort
        sort(v.begin(), v.end());


//insert k-th
        v.insert(v.begin()+k,temp);


//
        for(i=0; i<v.size(); i++)
        {
           if(i==v.size()-1) cout<<v[i]<<endl;
           //(size-1),because,size=total number of elements.
           //here, n=size; so, if n=5, size=5
           //but, i = 0,1,2,3,4
           //so, to get the last index, we should write (size-1)
           //thus the value of last index gets an endline/"\n"

              else  cout<<v[i]<<" ";
        }
//we can't write cout<<endl; here
//because, if we do so, the last output will remain a space at its end (eg. "1 2 3 4 5 ",which is invalid)
//as the expected output is "1 2 3 4 5"
        v.clear();
//we should write v.clear() for clearing all the data of current test case
//if we don't clear the elements of previous case, the vector holds the elements and add them with the next cases elements
    }

    return 0;
}


