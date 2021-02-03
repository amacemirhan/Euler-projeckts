# -*- coding: utf-8 -*-
from num2words import num2words
top=0
for i in range(1,1001):
    a=num2words(i)
    a=a.replace(" ", "")
    a=a.replace("-", "")
    print(a)
    top+=len(a)
print(top)
