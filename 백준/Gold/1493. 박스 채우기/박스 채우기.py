import sys
input = sys.stdin.readline

l, w, h = map(int, input().split())
tmp = l * w * h

N = int(input())
box = [tuple(map(int, input().split())) for _ in range(N)]
box.sort(reverse=True)

ans, now = 0, 0
for i, cnt in box:
    now *= 8
    c_len = 2**i
    
    cnt_limit = (l // c_len) * (w // c_len) * (h // c_len) - now
    cnt_limit = min(cnt, cnt_limit)
    
    ans += cnt_limit
    now += cnt_limit

if now == tmp:
    print(ans)
else:
    print(-1)