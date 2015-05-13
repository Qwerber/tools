import os
import strutils
import parseutils
import niostream
import algorithm

let programName = paramStr(0);
let arguments = commandLineParams();

type
    DataPair = tuple[name:string, value:float]

var 
    values:seq[DataPair] = @[]
    low = 0.0
    high = 100.0
    i = 0
    sortMode = "none"

while i < len(arguments):
    if(arguments[i] == "-r"):
        low = parseFloat(arguments[i+1])
        high = parseFloat(arguments[i+2])
        i+=3
    elif(arguments[i] == "-sd"):
        sortMode = "down"
        i+=1
    elif(arguments[i] == "-su"):
        sortMode = "up"
        i+=1
    elif(arguments[i] == "-sn"):
        sortMode = "none"
        i+=1
    elif(arguments[i] == "-h"):
        echo("-r [low] [high] : specify range")
        echo("-su : sort up")
        echo("-sd : sort down")
        echo("-sn : don't sort")
        i+=1
        quit()


var input:string

while stdin >> input:
    var numValue:string;
    discard stdin >> numValue;
    values.add((input, parseFloat(numValue)))

if(sortMode == "up"):
    values.sort do (x,y:DataPair) -> int:
        result = cmp(x.value, y.value)

if(sortMode == "down"):
    values.sort do (x,y:DataPair) -> int:
        result = cmp(y.value, x.value)

for e in items(values):
    echo(e.name)
    var i = 0;
    var s:Charseq = @[]
    var top = 
        if(e.value > high): high
        else: e.value
    var loopRange = (top - low) / (high - low) * 80.0
    while i < toInt(loopRange):
        s.add('=')
        inc(i)
    var last = 
        if(e.value == top): ""
        else: "+"
    echo($low," ",cast[string](s)," ",$(e.value),last)