int adjacentElementsProduct(std::vector<int> inputArray) {

    int size = inputArray.size();
    int i = 0;
    int max = INT_MIN;
    int product = 0;

    while(i <= size-2 ){
        product = inputArray[i] * inputArray[i+1];

        if(product > max){

            max = product;


        }


        i++;
    }

    return max;

}

