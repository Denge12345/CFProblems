import sys

input = sys.stdin.readline
out = []

def solve():
    line = input()
    a, b = line.split()
    out.append(f"{b[0]}{a[1:]} {a[0]}{b[1:]}")

def main():
    t = int(input())
    for _ in range(t):
        solve()
    sys.stdout.write("\n".join(out))
    
if __name__ == "__main__":
    main()