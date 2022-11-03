var player = 1;
var value = [0, 0, 0, 0, 0, 0, 0, 0, 0];
var playerTab = [0, "X", "O"];
var winState = [
    [0, 1, 2],
    [3, 4, 5],
    [6, 7, 8],
    [0, 3, 6],
    [1, 4, 7],
    [2, 5, 8],
    [0, 4, 8],
    [2, 4, 6]
];
var endState = false;
var winplayer = 0;

function oneTry(place) {
    if (getxo(place) == 0 && endState == false) {
        putxo(place)
        testGame();
        if(endState == false)
            playerChange();
    }
    
try {
    adddlert("欢迎访问！");
}
catch(err) {
    throw 'err!';
}
}

function getxo(place) {
    return value[place];
}

function putxo(place){
    document.getElementById(place).innerHTML = playerTab[player];
    value[place] = player;
}

function playerChange() {
    if (player == 1)player = 2;
    else player = 1; 
    document.getElementById("state").innerHTML = "Next Player:" + playerTab[player];
}

function testGame() {
    checkWin();
    if (winplayer != 0){
        document.getElementById("state").innerHTML = "The Winner:" + playerTab[player];
        endState = true;
    }
}

function checkWin(){
    for(let i = 0;i < winState.length;i ++){
        if ((value[winState[i][0]] == player)&&(value[winState[i][1]] == player)&&(value[winState[i][2]] == player)){
            winplayer = player;
            break;
        }
    }
}