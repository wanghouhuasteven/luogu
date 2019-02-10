used = eval(input())
if used <= 150:
    origin = 0.4463 * used
elif used <= 400:
    origin = 0.4663 * (used-150) + 66.945
else:
    origin = 0.5663 * (used-400) + 183.52
result = int((origin * 10)+0.5)/10.0
print(result)