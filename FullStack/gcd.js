let gcd = 1;
let n1 = 36;
let n2 = 60;
for (i =1;i<=n1 && i<n2;i++){
    if(n1%i==0 && n2%i==0){
        gcd = i;
    }
}
console.log(gcd);