#include <stdio.h>
#include<string.h>
int main()
{
    char str1[] = "abacbd";
    char str2[] = "aabc";
    int sum = 0;
    int freq1[26] = {0};
    int freq2[26] = {0};
    for (int i = 0; i < 6; i++)
    {
        freq1[str1[i] - 'a']++;
    }
    for (int i = 0; i < 4; i++)
    {
        freq2[str2[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] <= freq2[i])
        {
            sum += freq1[i];
        }
        else
        {
            sum += freq2[i];
        }
        
    }
    printf("%d", sum);
    return 0;
}