let n = 5;
let nr = 2*n-1;
let nst = n;
let nsp = 0;
let final_ans = "";
for(let row = 1;row<=nr;row++){
    //for spaces
    for(let csp = 1;csp<=nsp;csp++){
        final_ans += " ";
    }
    for(let cst = 1;cst<=nst;cst++){
        final_ans += "* ";
    }
    final_ans+='\n';
    if(row<=parseInt(nr/2)){
        nsp++;
        nst--;
    }
    else{
        nst++;
        nsp--;
    }
}
console.log(final_ans);