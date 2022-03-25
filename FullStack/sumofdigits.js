let num = 1364;
let rem =0;
let res = 0;
while(num>0){
    rem = parseInt(num%10);
    res += rem;
    num = parseInt(num/10);
}
console.log(res);