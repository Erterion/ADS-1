// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
int mid, left, right, k,chet;
left = 0;
right = size-1;
mid = size / 2;
k = value;
chet = 0;
while (*(arr + mid) != k) {
if (*(arr + mid) > k) {
left = mid + 1;
mid = (right - mid) / 2;
}
else {
right = mid;
mid = (left + mid) / 2;
}}
k = mid;
while (*(arr+k-1)==value) {
chet += 1;
k -= 1;
}
k = mid;
while (*(arr + k + 1) == value) {
chet += 1;
k += 1;}
 return(chet+1);
}
