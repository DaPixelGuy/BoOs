void memory_copy(char *source, char *dest, int nbytes) {
    int i;
    for (i = 0; i < nbytes; i++) {
        *(dest + i) = *(source + i);
    }
}

void intToString(int hexValue, char *output) {
    int i = 0;
    while (hexValue) {
        int digit = hexValue & 0xF;
        if (digit < 10) {
            output[i] = '0' + digit;
        } else {
            output[i] = 'A' + (digit - 10);
        }

        hexValue >>= 4; 
        i++;
    }
}
void int_to_ascii(int n, char str[]) {
    int i, sign;
    if ((sign = n) < 0) n = -n;
    i = 0;
    do {
        str[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);
    if (sign < 0) str[i++] = '-';
    str[i] = '\0';
}

int strlen(char s[]) {
    int i = 0;
    while (s[i] != '\0') ++i;
    return i;
}

void append(char s[], char n) {
    int len = strlen(s);
    s[len] = n;
    s[len+1] = '\0';
}
