import sys

def getRect(h):
    n = len(h)

    if n == 1: return h[0]

    mid = n // 2
    left_h = getRect(h[:mid])
    right_h = getRect(h[mid:])
    l = mid - 1
    r = mid
    under_w = 2
    min_h = min(h[l], h[r])
    max_area = under_w * min_h
    
    while 0 <= l and r + 1 <= n:

        lh = h[l-1] if l >= 1 else 0

        rh = h[r+1] if r < n-1 else 0

        min_h = min(min_h, lh) if lh > rh else  min(min_h, rh)

        if lh > rh: l -= 1
        else: r += 1

        under_w += 1
        max_area = max(max_area, under_w * min_h)
    
    return max(left_h, right_h, max_area)

while True:
    h = list(map(int, sys.stdin.readline().split()))

    if len(h) == 1 and h[0] == 0: break
    
    print(getRect(h[1:]))