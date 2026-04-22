#include <stdio.h>
#include <encrypt.h>
#include <checksum.h>

int main()
{
    char s[] = "Секретный код сейфа: 12345";
    
    printf("Исходные данные: %s\n", s);
    
    encrypt(s);
    printf("Зашифрованные данные: %s\n", s);
    printf("Контрольная сумма: %i\n", checksum(s));
    
    encrypt(s);
    printf("Расшифрованные данные: %s\n", s);
    printf("Контрольная сумма: %i\n", checksum(s));
    
    return 0;
}