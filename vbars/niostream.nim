import strutils
import os

type
    Charseq* = seq[char]

var lastchar = ' '

proc isWhitespace(c:char):bool = 
    (c == ' ' or c == '\t' or c == '\r' or c == '\l')

proc `>>`*(strm:File, str:var string):bool = 
    var 
        input = ' '
        cseq:Charseq = @[]

    while isWhitespace(input):
        input = strm.readChar()
    
    if(cast[int](input) == 255):
        result = false
        return
    
    cseq.add(input)
    
    while not(isWhitespace(input) or cast[int](input) == 255):
        input = strm.readChar()
        if(not(isWhitespace(input) or cast[int](input) == 255)):
            cseq.add(input)

    str = cast[string](cseq)
    result = len(cseq) != 0