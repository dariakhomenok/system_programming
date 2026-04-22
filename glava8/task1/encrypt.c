void encrypt(char *s)
{
    int i = 0;
    while(s[i] != '\0') {
        s[i] = s[i] ^ 7;
        i++;
    }
}