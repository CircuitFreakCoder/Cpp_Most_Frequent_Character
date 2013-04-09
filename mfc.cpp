#include <iostream>


using namespace std;


int main()
{
    string s;//input string

    cin>>s;

    int counts = 0;//number of character counts
    int count[s.length()];//array to store the counts of character

    for(int i=0; i<s.length(); i++)
    {
        for(int j=0; j<s.length(); j++)
        {
            if(s[i] == s[j])
            {
                count[i] = ++counts;

            }

        }
     counts = 0 ; //reset the counts

    }

    cout<<"Index\tChar\tCount"<<endl;

    for(int i=0;i<s.length();i++)
        cout<<i<<"\t"<<s[i]<<"\t"<<count[i]<<endl;



  int max =0; //index of the maximum element in the count[] array

  for(int i=0;i<s.length();i++)
  {
    if(count[i]>count[max])
        max = i;
  }

  cout<<"Most frequent character: "<<s[max]<<endl;

  return 0;

}
