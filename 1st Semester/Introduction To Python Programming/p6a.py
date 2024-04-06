def sorting(filename):
    words = []
    f = open(filename)
    for line in f:
        temp = line.split()
        for i in temp:
            words.append(i)
    f.close()
    words.sort()
    nf = open("p6a_n.txt","w")
    for i in words:
        nf.writelines(i)
        nf.writelines(" ")
    nf.close()

sorting("p6a_o.txt")