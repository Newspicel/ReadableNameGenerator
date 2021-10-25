![GitHub language count](https://img.shields.io/github/languages/count/newspicel/ReadableNameGenerator)
![GitHub top language](https://img.shields.io/github/languages/top/Newspicel/ReadableNameGenerator)
# ReadableNameGenerator
A simple name generator that can generate readable names in a few Languages

This Generator exist in:
- Java
- Javascript
- Typescript
- Kotlin
- Python
- Rust
- PHP
- C (from [ramy-zemo](https://github.com/ramy-zemo))
- Go (from OpenAI davinci-codex)
- C++ (from OpenAI davinci-codex)

Coming Soon:
- Ruby
- Shell / Bash
- C#


## Generator
It generates the length of the word, which can be set via the variables min and max.
The basic principle works like this: It first selects a random letter from the list "starts". 
Then it looks in the list "speakable" for the list of possible letters and adds them at the end. It then repeats this as often as set.


```python
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
```

This is the most important part of this project. Here you can see which letter the words start with and which letter can be followed by which letter.
