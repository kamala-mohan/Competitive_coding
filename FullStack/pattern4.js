let n = 5;
let nr = 2*n-1;
let ts = 1;
let final_ans = "";
for(let row =1;row<=nr;row++){
    for(let cst = ts;cst>=1;cst--){
        final_ans += cst;
    }
    final_ans += '\n';
    if(row <= parseInt(nr/2)){
        ts++;
    }
    else{
        ts--;
    }
}
console.log(final_ans);