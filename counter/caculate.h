#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define COL 10
#define SUM1 5

void InitAnswer(int arr[COL],int answer[COL],int n);
void ShowAnswer(int arr[COL], int n);
void ShowQuestion(int arr[COL],int n,int sum);
void Answer(int answer[COL], int n);
void judgeAnswer(int arr[COL],int answer[COL],int n);