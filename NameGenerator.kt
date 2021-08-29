import java.lang.StringBuilder
import java.util.*
import kotlin.collections.HashMap

class NameGenerator {
    private val starts = arrayOf("a", "b", "c", "d", "e", "f", "g", "i", "j", "k", "l", "m", "n", "o", "r", "p", "s", "t", "u")
    private val speakable: HashMap<String, Array<String>> = HashMap()
    
    init {
        speakable["a"] = arrayOf<String>("b", "d", "f", "g", "h", "i", "j", "k", "l", "m", "n", "p", "r", "s", "t", "u")
        speakable["b"] = arrayOf<String>("a", "e", "i", "l", "o", "r", "u")
        speakable["c"] = arrayOf<String>("h")
        speakable["d"] = arrayOf<String>("a", "e", "i", "l", "o", "r", "u")
        speakable["e"] = arrayOf<String>("f", "i", "j", "k", "m", "n", "p", "r", "s", "t", "u")
        speakable["f"] = arrayOf<String>("a", "e", "i", "l", "o", "r", "u")
        speakable["g"] = arrayOf<String>("a", "e", "i", "l", "o", "u")
        speakable["h"] = arrayOf<String>("a", "e", "i", "o", "u")
        speakable["i"] = arrayOf<String>("b", "f", "k", "l", "m", "n", "p", "r", "h", "s", "t")
        speakable["j"] = arrayOf<String>("a", "e", "i", "o", "u")
        speakable["k"] = arrayOf<String>("a", "e", "i", "l", "o", "u")
        speakable["l"] = arrayOf<String>("a", "e", "i", "o", "u")
        speakable["m"] = arrayOf<String>("a", "e", "i", "l", "o", "u")
        speakable["n"] = arrayOf<String>("a", "e", "i", "o", "u")
        speakable["o"] = arrayOf<String>("b", "c", "f", "g", "h", "i", "j", "k", "l", "m", "n", "p", "r", "s", "t")
        speakable["p"] = arrayOf<String>("a", "e", "i", "l", "o", "r", "u")
        speakable["r"] = arrayOf<String>("a", "e", "i", "o", "u")
        speakable["s"] = arrayOf<String>("a", "e", "c", "i", "o", "u", "t")
        speakable["t"] = arrayOf<String>("a", "e", "i", "o", "u")
        speakable["au"] = arrayOf<String>("b", "g", "i", "k", "n", "m", "p", "r", "s", "t")
    }
    
    
    var maxlength = 10
    var minlength = 5
    
    fun generate(): String {
        val length = (minlength + Math.random() * (maxlength - maxlength)).toInt()
        var lastChar = starts[(Math.random() * starts.size).toInt()]
        val projectName = StringBuilder(lastChar.uppercase(Locale.getDefault()))
        for (i in 0 until length) {
            val nextChar = speakable[lastChar]!!
            lastChar = nextChar[(Math.random() * nextChar.size).toInt()]
            projectName.append(lastChar)
        }
        return projectName.toString()
    }
}
