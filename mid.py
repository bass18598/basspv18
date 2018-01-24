def mid(a):
        a.sort()
        if len(a)%2!=0:
               mid=a[len(a)/2]
        else:
               mid=(float(a[len(a)/2]+a[(len(a)/2)-1]))/2
        return mid
