let n =5;
let nr = 2*n-1;
let nst = n;
let nsp = 1;
let final_ans ="";
for(let row =1;row<=nr;row++){
    for(let cst =1;cst<=nst;cst++){
        final_ans += "*";
    }
    for(let csp = 1;csp<=nsp;csp++){
        final_ans += " ";
    }
    for(let cst =1;cst<=nst;cst++){
        final_ans += "*";
    }
    final_ans += '\n';
    if(row<=parseInt(nr/2)){
        nsp += 2;
        nst -= 1;
    }else{
        nst += 1;
        nsp -= 2;

    }
}
console.log(final_ans);