# ReadableNameGenerator
A simple name generator that can generate readable names

## Example

```java
public static void main(String[] args) {
        for (int i = 0; i < 100; i++) {
            System.out.println(new NameGenerator().generate());
        }
    }
```


## Generator
```java
private String[] starts = {"a", "b", "c", "d", "e", "f", "g", "i", "j", "k", "l", "m", "n", "o", "r", "p", "s", "t", "u"};
    private HashMap<String, String[]> speakable = new HashMap<String, String[]>() {{
        put("a", new String[]{"b", "d", "f", "g", "h", "i", "j", "k", "l", "m", "n", "p", "r", "s", "t", "u"});
        put("b", new String[]{"a", "e", "i", "l", "o", "r", "u"});
        put("c", new String[]{"h"});
        put("d", new String[]{"a", "e", "i", "l", "o", "r", "u"});
        put("e", new String[]{"f", "i", "j", "k", "m", "n", "p", "r", "s", "t", "u"});
        put("f", new String[]{"a", "e", "i", "l", "o", "r", "u"});
        put("g", new String[]{"a", "e", "i", "l", "o", "u"});
        put("h", new String[]{"a", "e", "i", "o", "u"});
        put("i", new String[]{"b", "f", "k", "l", "m", "n", "p", "r", "h", "s", "t"});
        put("j", new String[]{"a", "e", "i", "o", "u"});
        put("k", new String[]{"a", "e", "i", "l", "o", "u"});
        put("l", new String[]{"a", "e", "i", "o", "u"});
        put("m", new String[]{"a", "e", "i", "l", "o", "u"});
        put("n", new String[]{"a", "e", "i", "o", "u"});
        put("o", new String[]{"b", "c", "f", "g", "h", "i", "j", "k", "l", "m", "n", "p", "r", "s", "t"});
        put("p", new String[]{"a", "e", "i", "l", "o", "r", "u"});
        put("r", new String[]{"a", "e", "i", "o", "u"});
        put("s", new String[]{"a", "e", "c", "i", "o", "u", "t"});
        put("t", new String[]{"a", "e", "i", "o", "u"});
        put("u", new String[]{"b", "g", "i", "k", "n", "m", "p", "r", "s", "t"});
    }};
```

This is the most important part of this project. Here you can see which letter the words start with and which letter can be followed by which letter.
