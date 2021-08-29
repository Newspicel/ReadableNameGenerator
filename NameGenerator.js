starts = ["a", "b", "c", "d", "e", "f", "g", "i", "j", "k", "l", "m", "n", "o", "r", "p", "s", "t", "u"]

speakable ={
    "a": ["b", "d", "f", "g", "h", "i", "j", "k", "l", "m", "n", "p", "r", "s", "t", "u"],
    "b": ["a", "e", "i", "l", "o", "r", "u"],
    "c": ["h"],
    "d": ["a", "e", "i", "l", "o", "r", "u"],
    "e": ["f", "i", "j", "k", "m", "n", "p", "r", "s", "t", "u"],
    "f": ["a", "e", "i", "l", "o", "r", "u"],
    "g": ["a", "e", "i", "l", "o", "u"],
    "h": ["a", "e", "i", "o", "u"],
    "i": ["b", "f", "k", "l", "m", "n", "p", "r", "h", "s", "t"],
    "j": ["a", "e", "i", "o", "u"],
    "k": ["a", "e", "i", "l", "o", "u"],
    "l": ["a", "e", "i", "o", "u"],
    "m": ["a", "e", "i", "l", "o", "u"],
    "n": ["a", "e", "i", "o", "u"],
    "o": ["b", "c", "f", "g", "h", "i", "j", "k", "l", "m", "n", "p", "r", "s", "t"],
    "p": ["a", "e", "i", "l", "o", "r", "u"],
    "r": ["a", "e", "i", "o", "u"],
    "s": ["a", "e", "c", "i", "o", "u", "t"],
    "t": ["a", "e", "i", "o", "u"],
    "u": ["b", "g", "i", "k", "n", "m", "p", "r", "s", "t"],
}

minLength = 5
maxLength = 10

function generate(){
    length = Math.floor(Math.random() * (maxLength - minLength + 1)) + minLength
    char = starts[Math.floor(Math.random() * starts.length)]

    generated = char
    for(i = 0; i < length; i++){
        char = speakable[char][Math.floor(Math.random() * speakable[char].length)]
        generated += char
    }

    return generated
}
