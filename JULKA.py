// Problem: Julka
// Contest: SPOJ - Classical
// URL: https://www.spoj.com/problems/JULKA/
// Memory Limit: 1536 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

for i in range(10):
    G1 = int(input())
    G2 = int(input())
    x, y = ((G1 - G2) // 2, (G1 + G2) // 2)
    print(y)
    print(x)
