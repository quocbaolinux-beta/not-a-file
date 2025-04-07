import java.util.*

fun main() {
    val sc = Scanner(System.`in`)
    val t = sc.nextInt()

    repeat(t) {
        val d = sc.nextInt()
        val u = sc.nextInt()
        val l = sc.nextInt()
        
        val pwd = genPwd(d, u, l)
        println(pwd)
    }
}

fun genPwd(d: Int, u: Int, l: Int): String {
    val rnd = Random()
    val digits = ('0'..'9').toList()
    val uppers = ('A'..'Z').toList()
    val lowers = ('a'..'z').toList()
    val dList = List(d) { digits[rnd.nextInt(digits.size)] }
    val uList = List(u) { uppers[rnd.nextInt(uppers.size)] }
    val lList = List(l) { lowers[rnd.nextInt(lowers.size)] }
    val all = dList + uList + lList
    val shuffled = all.toMutableList()
    var i = 1
    while (i < shuffled.size) {
        if (shuffled[i] == shuffled[i - 1]) {
            val swapIdx = rnd.nextInt(shuffled.size)
            if (swapIdx != i && swapIdx != i - 1 && (swapIdx == shuffled.size - 1 || shuffled[swapIdx] != shuffled[swapIdx + 1])) {
                val temp = shuffled[i]
                shuffled[i] = shuffled[swapIdx]
                shuffled[swapIdx] = temp
            } else {
                continue
            }
        }
        i++
    }
    return shuffled.joinToString("")
}