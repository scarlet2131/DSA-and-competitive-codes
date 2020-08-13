def solution(pegs):
    n = len(pegs)
    l,h = 1,pegs[-1]-pegs[0]+1
    while l<=h:
        m = l

        valid = True
        # first gear size is m - keep calculating further gears
        gears = [m]
        for i in range(1,n):
            g = pegs[i]- (pegs[i-1] + gears[-1])
            gears.append(g)
            if g<=0:
                valid = False
                break
        # print(m,gears)
        if m == 2*gears[-1]:
            return [m,1]
        elif m+1==2*gears[-1]:
            return [(m*3) + 1, 3]
        elif m+2 == 2*gears[-1]:
            return [(m*3) + 2, 3] 
        
        l+=1
    return [-1,-1]