fun demuoc(n: Int): Int {
    var count = 0
    for (i in 1..n) {
        if (n % i == 0) {
            count++
        }
    }
    return count
}
fun main(){
    val n = readLine()!!.toInt()
    println(demuoc(n))
}