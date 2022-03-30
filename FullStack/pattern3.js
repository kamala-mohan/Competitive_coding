let n =7;
let nr = 7;
let nc = 7;
let final_ans = "";
for(let row = 1;row<=nr;row++){
    for(let col = 1;col<=7;col++){
        if(row === col || col === nr-row+1){
            final_ans += "*";
        }
        else{
            final_ans += " ";
        }
    }
    final_ans += '\n';
}
console.log(final_ans);