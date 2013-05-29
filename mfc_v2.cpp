#include <iostream>
#include <string>

using namespace std;

char mfc(string s)
{
    int counts[s.length()];
    int count = 0;
    int max = 0;

    for(unsigned int i=0; i<s.length(); i++){

        for(unsigned int j=0; j<s.length(); j++){

            if(s[i]== s[j])
                counts[i] = ++count;

        }

        count = 0;

        max = counts[i]>counts[max] ? i : max;
    }

    return s[max];

}



int main()
{

    cout<< mfc("abbcccdddd"); //prints "d"

    
    return 0;
}
