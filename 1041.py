n = int(input())
dice = list(map(int, input().split()))

if n == 1:
    s_dice = sorted(dice)
    print(sum(s_dice) - s_dice[-1])
else:
    sumLists = []
    sumLists.append(min(dice[0], dice[5]))
    sumLists.append(min(dice[1], dice[4]))
    sumLists.append(min(dice[2], dice[3]))
    sumLists = sorted(sumLists)

    three = (sumLists[0] + sumLists[1] + sumLists[2]) * 4
    two = (sumLists[0] + sumLists[1]) * (4 + 4 * (n - 2) + 4 * (n - 2))
    one = sumLists[0] * (n * n - 4 - (n - 2) * 4 + (n - 2) * (n - 1) * 4)
    print(three + two + one)
