//1
function astroguru(num,str,loc,job)
{
    console.log("You will be a "+ job +" in"+ loc + " and married to" +str + " with" +num);

}
astroguru(4,"kamala","london","engineer");


//2
function compare(a,b){
    if(a>b){
        console.log("num 1 is larger than num2");
    }
    else if(a<b){
        console.log("num2 is larger than num1");
    }
    else if(a==b){
        console.log("both have the same values");
    }
    else{
        console.log("cannot be compared");
    }
}
compare(10,'a');