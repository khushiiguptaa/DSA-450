string reverseWord(string str)
{
    int start = 0;
    int end = str.size()-1;
    
    while (start < end)
    {
        int temp;
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    for(int i = 0; i < str.size(); i++)
    {
        cout << str[i];
    }    
}
