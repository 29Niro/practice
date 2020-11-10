def encryption(s):
    import math;

    x=math.sqrt(len(s))
    row=math.floor(x)
    column=math.ceil(x)
    l=[]

    if(row*column>=len(s)):
        a=[[0 for x in range(column)]for y in range(row)]
        m=0
        for i in range(row):
            for j in range(column):
                if(m<len(s)):
                    a[i][j]=s[m]
                m+=1

        for j in range(column):
            for i in range(row):
                if(a[i][j]==0):
                    pass
                else:
                    l.append(a[i][j])
            l.append(" ")

    else:
        row=column
        a=[[0 for x in range(column)]for y in range(row)]
        m=0
        for i in range(row):
            for j in range(column):
                if(m<len(s)):
                    a[i][j]=s[m]
                m+=1

        for j in range(column):
            for i in range(row):
                if(a[i][j]==0):
                    pass
                else:
                    l.append(a[i][j])
            l.append(" ")

    return("".join(l))
