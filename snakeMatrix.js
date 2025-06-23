// final try
{
    const commands = ["down","right","up"]
    let pos = 0
    let n= 3
    for (const command of commands) {
        if(command == "up"){
            pos -= n
        }
        else if (command == "down") {
            pos +=n 
        }
        else if (command == "left") {
            pos -=1
        }
        else{
            pos +=1
        }
    console.log(pos);
    }
}


//1st trial
console.log('hey');
let xa = 0
let yb = 0
let n= 3
for (let i = 0; i < n; i++) {
    for (let j = 0; j < n; j++) {
        var num = (i*n) + j
        console.log(num);
    }
}
var initially = [xa,yb]
console.log(initially);

let commandss = ["up",'down','left','left','right']
for (let i = 0; i < commandss.length; i++) {
    // console.log(commands[i]);
    for (const command of commandss) {
        if(command == "up"){
            xa+=0
            yb+=1
        }
        else if (command == "down") {
            xa+=0
            yb-=1
        }
        else if (command == "left") {
            xa-=1
            yb+=0
        }
        else{
            xa+=1
            yb+=0
        }
    }
    console.log(initially);

}

//trying square pattern
for (let i = 1; i <= 5; i++) {
    let pattern = '';
    for (let j = 1; j <= 5; j++) {
        pattern += j;
    }
    console.log(pattern);
}

// try 2
for (let i = 0; i <= 5; i++) {
    let pattern = '';
    for (let j = 0; j <= 5; j++) {
        pattern += j;
    }
    console.log(pattern);
}

let x= 0
let y = 0
let commands = ["up",'down','left','left','right']
for (let i = 0; i < commands.length; i++) {
    // console.log(commands[i]);
    for (const command of commands) {
        if(command == "up"){
            x+=0
            y+=1
        }
        else if (command == "down") {
            x+=0
            y-=1
        }
        else if (command == "left") {
            x-=1
            y+=0
        }
        else{
            x+=1
            y+=0
        }
    }
snake = [x,y]
console.log(snake);
}


// try again...this was final try ... sol is at top


var finalPositionOfSnake = function(n, commands) {
    let pos = 0
    for(const command of commands){
        if(command == "RIGHT"){
            pos += 1
        }
        else if (command == "LEFT"){
            pos -=1
        }
        else if (command == "UP"){
            pos -= n 
        }
        else{
            pos += n
        }
    }
    return pos
};
console.log(finalPositionOfSnake(3,["DOWN","RIGHT","UP"]));
 