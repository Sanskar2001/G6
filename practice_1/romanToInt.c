// https://leetcode.com/problems/roman-to-integer/
int charToInteger(char ch)
{
    switch(ch)
    {
        case'I': return 1;
        case'V': return 5;
        case'X': return 10;
        case'L': return 50;
        case'C': return 100;
        case'D': return 500;
        case'M': return 1000;
    }

    return 0;
}

int romanToInt(char * str){

    int n=strlen(str);
    int no=0,ans=0;

    for(int i=0;i<n;i++)
    {
        if(charToInteger(str[i])< charToInteger(str[i+1]))
        ans-=charToInteger(str[i]);

        else
        ans+=charToInteger(str[i]);


    }
    return ans;
}