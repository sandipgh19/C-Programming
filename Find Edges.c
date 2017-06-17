//Stevie G is one of the greatest ever players to have played football, and he's going to be the one who recites all problems to you today .

//Now, he is a true admirer of mathematical geniuses like you. So he has a series of programming problems, among which the first one is :
/*
You have been given
2
2 integer arrays
A
[
]
A[] and
B
[
]
B[] each of size
N
N. Now we call a pair of indices
(
i
,
j
)
(i,j) connected, if
i
=
j
i=j or
A
[
i
]
=
A
[
j
]
A[i]=A[j] .

Now, for each index
i
i in the array
A
A where
1
≤
i
≤
N
1≤i≤N, you need to find the maximum
B
[
j
]
B[j] such that indices
i
i and
j
j are connected. Can you do it ?

Input Format :

The first line contains a single integer
N
N.

The next line contains
N
N space separated integers, where the
i
t
h
ith integer denotes
A
[
i
]
A[i]. The next line too contains
N
N space separated integers, where the
i
t
h
ith integer on this line denotes
B
[
i
]
B[i].

Output Format :

Print
N
N space separated integers according to those mentioned in the problem statement.

Constraints :

1
≤
N
≤
200
,
000
1≤N≤200,000

1
≤
A
[
i
]
,
B
[
i
]
≤
10
9*/

#include <stdio.h>

int main()
{
    long int n,i,j,k,l,m;
    scanf("%ld",&n);
    long int a[n],b[n],c[n];
    for(i=0;i<n;i++) {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<n;i++) {
        scanf("%ld",&b[i]);
    }

    for(i=0;i<n;i++) {
        m=0;
        c[m] = b[i];
        m++;
        for(j=i+1;j<n;j++) {

            if(a[i]==a[j]) {

                c[m]=b[j];
                m++;
            }
        }
        for(j=0;j<m;++j) {

            for (k = j + 1; k < m; ++k) {

                if(c[j]<c[k]) {
                    l = c[j];
                    c[j] = c[k];
                    c[k] = l;
                }
            }
        }
        printf("%ld ",c[0]);
    }
    return 0;
}
