#include <cstring>
bool checkPalindrome(std::string inputString) {

    int code = 0;
    int front = 0;
    int end = strlen(inputString.c_str());
    end = end -1 ;
 
    while(front != strlen(inputString.c_str())){

        if(inputString[front] != inputString[end]){

            code = 1;
            cout<<"break"<<endl;
            break;
        }

        front++;
        end--;

    }

    if(!code){
        
        return true;

    }else {


        return false;
    }
    
    //tested  | done

}

