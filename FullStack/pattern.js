// let n = 5;
// let nr = 2*n-1;
// let nst = 1;
// let nsp = n-1;
// let final_ans = "";
// for(let row = 1;row<=nr;row++){
//     //for spaces
//     for(let csp = 1;csp<=nsp;csp++){
//         final_ans += " ";
//     }
//     for(let cst = 1;cst<=nst;cst++){
//         final_ans += "*";
//     }
//     final_ans+='\n';
//     if(row<=parseInt(nr/2)){
//         nsp--;
//         nst++;
//     }
//     else{
//         nst--;
//         nsp++;
//     }
// }
// console.log(final_ans);



let n = 5;
final_ans = "";
for(let i =1;i<=n;i++){
    for(let sp = 1;sp<=n-i;sp++){
        final_ans += " " 
    }
    for(let st = 1;st<=i;st++){
        final_ans+="*";
    }
    final_ans += '\n';
}
console.log(final_ans);
