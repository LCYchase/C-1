#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define wor 11
#define col 11
#define wors 9
#define cols 9
void init1(char cmm[wors][cols], int x, int y);
void Printing(char mu[wor][col], int x, int y);
void Printing1(char cmm[wors][cols], int x, int y);
void lei(char mu[wor][col], int x, int y);
int saolei(char mu[wor][col], int x, int y, char cmm[wors][cols], int c, int e);
int shu(char mu[wor][col], int x, int y);
void open(char muu[wors][cols], int x, int y, char cmm[wor][col]);