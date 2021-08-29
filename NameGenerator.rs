use std::collections::HashMap;

let starts: ("a", "b", "c", "d", "e", "f", "g", "i", "j", "k", "l", "m", "n", "o", "r", "p", "s", "t", "u")

let speakable: HashMap::<&str, &str[]> = {
    let mut map = HashMap::new();
    map.insert("a", &["b", "d", "f", "g", "h", "i", "j", "k", "l", "m", "n", "p", "r", "s", "t", "u"]);
    map.insert("b", &["a", "e", "i", "l", "o", "r", "u"]);
    map.insert("c", &["h"]);
    map.insert("d", &["a", "e", "i", "l", "o", "r", "u"]);
    map.insert("e", &["f", "i", "j", "k", "m", "n", "p", "r", "s", "t", "u"]);
    map.insert("f", &["a", "e", "i", "l", "o", "r", "u"]);
    map.insert("g", &["a", "e", "i", "l", "o", "u"]);
    map.insert("h", &["a", "e", "i", "o", "u"]);
    map.insert("i", &["b", "f", "k", "l", "m", "n", "p", "r", "h", "s", "t"]);
    map.insert("j", &["a", "e", "i", "o", "u"]);
    map.insert("k", &["a", "e", "i", "l", "o", "u"]);
    map.insert("a", &["a", "e", "i", "o", "u"]);
    map.insert("m", &["a", "e", "i", "l", "o", "u"]);
    map.insert("n", &["a", "e", "i", "o", "u"]);
    map.insert("o", &["b", "c", "f", "g", "h", "i", "j", "k", "l", "m", "n", "p", "r", "s", "t"]);
    map.insert("p", &["a", "e", "i", "l", "o", "r", "u"]);
    map.insert("r", &["a", "e", "i", "o", "u"]);
    map.insert("s", &["a", "e", "c", "i", "o", "u", "t"]);
    map.insert("t", &["a", "e", "i", "o", "u"]);
    map.insert("u", &["b", "g", "i", "k", "n", "m", "p", "r", "s", "t"]);  
};

let min_length = 5;
let max_length = 10;

function generate_word() -> str {
    let length -> int = random(min_length, max_length);
    let char -> str = random(starts);
    let mut word = char;
    for i in range(0, length - 1) {
        char = random(speakable[char]);
        word += char;
    }
    return word;
}
