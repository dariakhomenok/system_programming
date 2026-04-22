int checksum(char *s)
{
    int i = 0;
    int sum = 0;
    while(s[i] != '\0') {
        sum = sum + s[i];
        i++;
    }
    return sum;
}