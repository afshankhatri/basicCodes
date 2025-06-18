const words = ["a",'aba','ababa','aa']
let count = 0
for (let i = 0; i < words.length; i++) {
    // console.log(i);
    for (let j = i+1; j < words.length; j++) {
        // console.log(words[j]);     
        if (words[j].startsWith(words[i]) && words[j].endsWith(words[i])) {
            count++         
        }
    }
}
