temp=arr[min];        //as we are sorting in ascending manner, the smallest elemnt will come first, so we swap here
                    arr[min]=arr[i];      //manual swaping
                    arr[i]=temp;        //manual swaping
                    
                    if(i!=min) cnt++;          //increamenting the counter variable if there are any swap happens to keep track the total step used for swaping
