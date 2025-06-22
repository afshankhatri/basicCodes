let s = 'hello'
let arr = s.split("")

let count = 0

for (let i = 0; i < arr.length; i++) {
    for (let j = 0; j < arr.length; j++) {
        if (arr[i]==arr[j]) {
            count ++
        }        
    }  
    if (count == 1) {
        console.log(arr[i]);  
        break      
    }  
    count=0
}


{
    function nonrepeatingCharacter(s)
    {
        let arr = s.split("")
        let count = 0
        
        for (let i = 0; i < arr.length; i++) {
            for (let j = 0; j < arr.length; j++) {
                
                
                if (arr[i]==arr[j]) {
                    count ++
                }        
            }  
            if (count == 1) {
                return arr[i]    
            }  
            count=0
        }
        return -1
    }
    console.log(nonrepeatingCharacter('hhhheelloo'));
     
}