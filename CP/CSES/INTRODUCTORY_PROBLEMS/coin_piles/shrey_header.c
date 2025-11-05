#include<stdio.h>
#include"shrey_header.h"

#define OUT_BUF_SIZE 1 << 20  // 1 MB buffer
static char outbuf[OUT_BUF_SIZE];
static int outpos = 0;

void greet() {
    printf("shrey's header file loaded successfuly!\n");
}

#include <stdio.h>

void fastIntInput(int *numPtr) {
    int c = getchar();
    int sign = 1;
    int num = 0;

    // skip non-numeric characters
    while (c != '-' && (c < '0' || c > '9')) {
        c = getchar();
    }

    // check sign
    if (c == '-') {
        sign = -1;
        c = getchar();
    }

    // read number
    while (c >= '0' && c <= '9') {
        num = num * 10 + (c - '0');
        c = getchar();
    }

    *numPtr = num * sign;
}

void fastIntOutput(int n) {
    if (n == 0) {
        putchar('0');
        return;
    }

    if (n < 0) {
        putchar('-');
        n = -n;
    }

    char buf[12]; // enough for 32-bit int
    int i = 0;

    while (n > 0) {
        buf[i++] = (n % 10) + '0';
        n /= 10;
    }

    // print in reverse
    while (i--) {
        putchar(buf[i]);
    }
}

void fastStrOutput(const char *s) {
    while (*s) {
        if (outpos == OUT_BUF_SIZE) {
            fwrite(outbuf, 1, outpos, stdout);
            outpos = 0;
        }
        outbuf[outpos++] = *s++;
    }
}

// optional helper to add newline quickly
void fastNewline() {
    if (outpos == OUT_BUF_SIZE) {
        fwrite(outbuf, 1, outpos, stdout);
        outpos = 0;
    }
    outbuf[outpos++] = '\n';
}

// flush buffer at the end (important!)
void fastFlush() {
    fwrite(outbuf, 1, outpos, stdout);
    outpos = 0;
}

