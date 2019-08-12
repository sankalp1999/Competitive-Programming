# Program to print all combination  
# of size r in an array of size n 
  
# The main function that prints  
# all combinations of size r in  
# arr[] of size n. This function  
# mainly uses combinationUtil() 
def printCombination(arr, n, r): 
      
    # A temporary array to  
    # store all combination 
    # one by one 
    data = [0]*r; 
  
    # Print all combination  
    # using temprary array 'data[]' 
    combinationUtil(arr, data, 0,  
                    n - 1, 0, r); 
  
# arr[] ---> Input Array 
# data[] ---> Temporary array to 
#         store current combination 
# start & end ---> Staring and Ending 
#             indexes in arr[] 
# index ---> Current index in data[] 
# r ---> Size of a combination  
# to be printed  
def combinationUtil(arr, data, start,  
                    end, index, r): 
                          
    # Current combination is ready  
    # to be printed, print it 
    if (index == r): 
        for j in range(r): 
            print(data[j], end = " "); 
        print(); 
        return; 
  
    # replace index with all 
    # possible elements. The 
    # condition "end-i+1 >=  
    # r-index" makes sure that  
    # including one element at 
    # index will make a combination  
    # with remaining elements at  
    # remaining positions 
    i = start;  
    while(i <= end and end - i + 1 >= r - index): 
        data[index] = arr[i]; 
        combinationUtil(arr, data, i + 1,  
                        end, index + 1, r); 
        i += 1; 