fun tongchuso(n: Int): Int {
    var sum = 0
    var num = n
    while (num > 0) {
        sum += num % 10
        num /= 10
    }
    return sum
}
fun main(){
    val n = readLine()!!.toInt()
    println(tongchuso(n))
}