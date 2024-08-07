import { createHash } from 'crypto';
let i=0;
let hash='uhkkui';
let input;
while(hash.substring(0,5)!=="00000"){
     input='100xdevs'+i;
     hash = createHash('sha256').update(input).digest('hex');
     i++;
}

console.log(input)
console.log(hash)