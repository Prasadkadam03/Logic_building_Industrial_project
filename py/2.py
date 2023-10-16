def calculate_percentage(iMarks, iTotal):
    fPercentage = 0.0
    if iMarks < 0 or iTotal < 0:
        print("Invalid input")
        return fPercentage
    if iMarks > iTotal:
        print("Invalid input")
        return fPercentage
    fPercentage = (iMarks / iTotal) * 100
    return fPercentage

iValue1 = 0
iValue2 = 0
fRet = 0.0
print("Enter the marks : ")
iValue1 = int(input())
print("Enter the total marks : ")
iValue2 = int(input())
fRet = calculate_percentage(iValue1, iValue2)
print("Your percentage is : ", fRet)