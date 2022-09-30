//Maximum Profit by buying and selling stocks
//Problem Statement: Suppose you have given the stock prices for respective days like (100, 180, 260, 310, 40, 535, 695). The stock price for the 1st day is 100, the 2nd day it is 180 and so on. Write a Python program to determine what days the user should buy and sell the stocks to get the maximum profit.

//In the above case, in the following scenarios user will get maximum profit.
//Buy stock on 1st day (100)
//Sell stock on 4th day (310)
//Buy stock on 5th day  (100)
//Sell stock on 7th day (695)


//Algorithm steps:
//Find the local minima (buying stock)
//Find local maxima (selling stock)
//Repeat until all days are covered.



My sol:

liStocks = [100, 180, 260, 310, 40, 535, 695]
  
#find local minima
def findMin(liStocks):
    for i, val in enumerate(liStocks[:-1]):
        if val < liStocks[i+1]: 
            return i, val 
    return -1, -1
  
#find local maxima 
def findMax(liStocks): 
    for i, val in enumerate(liStocks[:-1]): 
        if val > liStocks[i+1]:
            return i, val
    return i+1, liStocks[-1]
  
  
  
def buySellStock():
    index=0
    while index < len(liStocks): 
        i, val = findMin(liStocks[index:]) 
        if i > -1:
            index=i+index
            print("bye stock on day ", index+1, val)
        else:
            break
      
        i, val = findMax(liStocks[index:])
        index=i+index
        print("sell stock on day ", index+1, val)
  
  
if __name__ == "__main__":
    buySellStock()
