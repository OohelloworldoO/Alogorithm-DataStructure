## 演算法的複雜度:

### 1.時間複雜度(Time Complexity):致行演算法時需花費的時間

- 需算出每一段的功能執行次數
- 將所有執行次數加總起來後
- 求出此演算法的時間複雜度-- Big-O

### 2.空間複雜度(Space Complexity):執行演算法時需花費的記憶體空間

## 時間複雜度(Time Complexity)

```
x=x+1;
```

`執行次數: 1`

```
for(int i=0; i<n-1; i++)
{
  x= x+1;
}
```

`執行次數: n`

```
for (int i = 0; i < n-1; i++)
{
    for (int j = 0; j < n-1; j++)
    {
        x = x + 1;
    }
}
```

`執行次數： n^2`

### Big-O

Big-O 只顯示演算法執行次數部分的最大指數、最高次方數或是常數 1，並以大 O 符號

- 1.陣列加總的執行次數為 4n+5，Big-O 則是 O(n)
- 2.印出 n\*n 的正方型的執行次數為 n^2+7n+6，Big-O 則是 O(n^2)

會這樣表示是因為影響最大的絕對是執行次數裡的最大指數、最高次方

## 空間複雜度(Space Complexity)

```
int Sum(int n)
{
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        result += i;
    }
    return result;
}
```

這段演算法不論 n 的大小，都會建立一樣個數的變數，也就是說每次執行都是耗費一樣的記憶體空間  
故空間複雜度為 O(1)

```
int[] CreateArray(int n)
{
    int[] result = new int[n];
    for (int i = 0; i < n; i++)
    {
        result[i] = i;
    }
    return result;
}
```

這段演算法因為會根據使用者輸入的 n 來決定 int array 大小及記憶體空間  
故空間複雜度為 O(n)

## 爬山演算法(Hill Climbing)

https://ccckmit.github.io/aibook/htm/hillClimbing.html

## 1-1 漸進符號(Asymptotic Notation)

Asymptotic Notation 是用來描述兩個函數當 n 夠大時，其成長速率上的關係  
若我們將兩個演算法 A 和 B 中做了多少運算或是處理多少資料表是成輸入資料筆數的函數 f(n)和 g(n)時，我們就可以用 Asymptotic notation 來比較演算法之間的效率  
因此，若當 n 夠大時，f(n)成長的速度較 g(n)快，則就代表當處理夠多的資料量時，A 演算法所需的時間成長速度會較 B 演算法還來的快  
因此 A 的效率就較 B 不好  
<br/></br>

### 使用 Asymptotic Notation 的優點

若能得知各個演算法的 Complexity(複雜度)，便能決定哪個演算法較有效率

但是並非所有演算法都像只有兩個迴圈的 Insertion Sort 那麼簡潔而容易分析  
所以在評估演算法之 Complxity(複雜度)時，常使用 Asymptotic Notation(漸進符號)  
概念為:

- 希望能以"簡單的函數"(例如 N^2、InN 等等)來描述 Complxity(複雜度)的"趨勢"，特別是針對資料量非常大的時候

<br/></br>  
<br/></br>  
<br/></br>  
<br/></br>  
<br/></br>

### Θ− Notation，Big-Theta

Asymptotic Notation(漸進符號)是所有能夠描述演算法趨勢的"函數之集合"

- 非負函數 f(n):描述演算法之趨勢
- 非負函數 g(n):簡單函數

若滿足以下定義:

- Θ(g(n))={f(n)：存在正整數 c1,c2,n0,並且對於所有 n≥n0,滿足 0≤c1g(n)≤f(n)≤c2g(n)}

表示 g(n)為 f(n)趨勢之「邊界」(bound)，即可使用 g(n)來描述 f(n)之趨勢，以 f(n)∈Θ(g(n))表示(也會看到 f(n)=Θ(g(n))，但切記，Θ(g(n))是一個集合)

![Big-Theta](https://github.com/OohelloworldoO/Note/blob/main/pictures/%CE%98%E2%88%92%20Notation%EF%BC%8CBig-Theta.png)

舉例來說，若有一個演算法之區是可以用**f(n)=6n+4**代表，那麼以下兩個 g(n)都能夠在 Θ(g(n))的定義下視為 f(n)的「邊界」：

- 若 g(n)=2n，取 c1=2,c2=4,n0=2，則滿足：

0≤2(2n)≤6n+4≤4(2n),∀n≥2，圖左  
也就是說，當資料量 n≥2，f(n)=6n+4 的值往上不會超過 8n，往下不會低於 4n  
若 g(n)=5n，取 c1=1,c2=2,n0=1，則滿足：

0≤1(5n)≤6n+4≤2(5n),∀n≥1，圖右  
同理，當資料量 n≥1，f(n)=6n+4 的值往上不會超過 10n，往下不會低於 5n

根據定義，既然係數(c1,c2)可以任選，那麼以上兩個 g(n)函數其實可以把係數都提到 c1,c2 裡，以同一個函數：g(n)=n 表示即可

- 由此可以確認，Θ(g(n))是多個函數的「集合」

若一個演算法之「趨勢」為 f(n)=6n+4，那麼其複雜度即為 Θ(n)，可以表示成：

- f(n)∈Θ(n)，或者
- f(n)=Θ(n)

以上情況可以推廣至所有的多項式(polynomial)，以 f(n)=3n3+4n2+5 為例，當 n 越來越大時，對 f(n)之趨勢具有決定性影響力的是「最高次項」，此例為「三次方項」，所以，f(n)的複雜度為 Θ(n3)，將係數拿進 c1,c2，便以

- f(n)∈Θ(n^3)，或者
- f(n)=Θ(n^3)表示

Big-Theta(Θ(⋅))是同時找到 f(n)的「上界(upper bound)」與「下界(lower bound)」，像是三明治一樣把 f(n)夾住  
若把「上界」與「下界」分開來看，就是 Big-O 與 Big-Omega

### O−Notation，Big-O

一般談論的演算法之複雜度，經常是指 Big-O，因為在估算成本時，最想知道的是**上界(upper bound)**

Big-O 定義如下：

- O(g(n))={f(n)：存在正整數 c,n0,並且對於所有 n≥n0,滿足 0≤f(n)≤cg(n)}  
  <br/></br>

根據定義，可以將 Big-O 視為 Big-Theta(Θ(⋅))的「上半部」，其以「簡單函數 g(n)」描述 f(n)在資料量夠大時，「最多」會達到怎麼樣的趨勢

![big-o](https://github.com/OohelloworldoO/Note/blob/main/pictures/Big-O.png)

繼續以 f(n)=6n+4 為例，若選 g(n)=n, c=7,n0=4，即可滿足：

- 0≤6n+4≤7n,∀n≥4  
  (∀ 全稱量詞，即存在任意的意思)
- 表示 f(n)之"上界"趨勢能夠以 g(n)=7n 描述

同樣的，把係數放進正整數 c 裡面，f(n)之複雜度在 Big-O 的定義下，可以用簡單函數 g(n)=n 表示：

- f(n)∈O(n)，或者
- f(n)=O(n)

再多看幾個例子：

- 若 f(n)=6n3+5n2−4nlogn+3，那麼此函數之複雜度為 f(n)=O(n^3)
- 若 f(n)=2，此函數之複雜度為 f(n)=O(1)，表示此演算法之效率「與資料量多寡無關」，又稱為常數時間**(constant time)**的複雜度

### Ω−Notation，Big-Omega

若想知道某個演算法"至少"需要多少時間時，便可以 Big-Omega 來估算"下界(lower bound)  
<br/></br>

Big-Omega 的定義:

- Ω(g(n))={f(n)：存在正整數 c,n0,並且對於所有 n≥n0,滿足 0≤cg(n)≤f(n)}  
  <br/></br>

Big-Omega 可以視為 Big-Theta(Θ(⋅))的"下半部"，其以"簡單函數 g(n)"描述 f(n)在資料量夠大時，"至少"會達到怎樣的趨勢

以 f(n)=6n+4 為例，f(n)之複雜度在 Big-Omega 的定義下，可以用簡單函數 g(n)=n 表示

- f(n)∈Ω(n)，或者
- f(n)=Ω(n)

Big-O(O(⋅))與 Big-Omega(Ω(⋅))是夾得"比較緊的(tight)"上界和下界
Littel-o(o(⋅))與 Littel-omega(ω(⋅))，表示「沒有那麼緊的」上下界

<br/></br>

### o−Notation，Littel-o

Littel-o(o(⋅))的定義:

- o(g(n))={f(n)：對於所有正整數 c,存在正整數 n0,使得對於所有 n≥n0,0≤f(n)≤cg(n)}  
  <br/></br>

因為定義中是「對於所有正整數 c」，因此 f(n)=o(g(n))務必要求 g(n)的「成長率」遠遠大於 f(n)，等同於滿足以下極限關係式：  
![Little-o](https://github.com/OohelloworldoO/Note/blob/main/pictures/Little-o%E7%9A%84%E5%AE%9A%E7%BE%A9.png)

<br/></br>

比較 Big-O(O(⋅))與 Littel-o(o(⋅))：

- 2n=o(n2)
- 2n=O(n)
- 2n2=o(n!)
- 2n2=O(n2)

### ω−Notation，Littel-omega

Littel-omega(ω(⋅))的定義:

- ω(g(n))={f(n)：對於所有正整數 c,存在正整數 n0,使得對於所有 n≥n0,0≤cg(n)≤f(n)}

同理，f(n)=ω(g(n))要求 g(n)的「成長率」遠遠小於 f(n)，等同於滿足以下極限關係式：  
![Little-omega](https://github.com/OohelloworldoO/Note/blob/main/pictures/Little-omega%E7%9A%84%E5%AE%9A%E7%BE%A9.png)

比較 Big-Omega(Ω(⋅))與 Littel-omega(ω(⋅))：

- 4n2=ω(n)
- 4n2=ω(logn)
- 4n2=Ω(n2)

常見的時間複雜度之效率比較:  
![compare all the Complxity](https://github.com/OohelloworldoO/Note/blob/main/pictures/compare%20all%20the%20Complexity.png)  
(成本越高，表示效率越差)

**O(1)<O(logN)<O(N)<O(NlogN)<O(N2)<O(2N)<O(N!)**

最有效率的是常數的時間複雜度(O(1))，意思其「運算成本與資料量無關」，所以不管資料量多大，保證能夠在「可數(countable)、有限(finite)」的時間內完成，例如：

- 不管矩陣大小(size)有多大，一定能夠利用 index 在 O(1)時間，對矩陣的元素做存取，例如 Array[index]=5
- 不管 Linked list 長度有多長，一定能夠在 O(1)時間，在 list 的 front 指標後新增節點(insert node at the front)  
  <br/></br>  
  <br/></br>  
  參考：[Linked List: 新增資料、刪除資料、反轉](http://alrightchiu.github.io/SecondRound/linked-list-xin-zeng-zi-liao-shan-chu-zi-liao-fan-zhuan.html#front)

### Asymptotic Notation Note

1.

- Asymptotic Notation 的產生是用於表示兩個函數間的關係。若用 f(n)<g(n)來表示 f(n)的 growth order 比 g(n)的 growth order 小是不正確的  
  <br/></br>

2.

- 當 f(n)=O(g(n))，稱 g(n)是 f(n)的 asymptotically upper bound
- 當 f(n)=Ω(g(n))，稱 g(n)是 f(n)的 asymptotically lower bound
- 當 f(n)=Θ(g(n))，稱 g(n)是 f(n)的 asymptotically tight bound
- 當 f(n)=o(g(n))，稱 g(n)是 f(n)的 asymptotically strict upper bound
- 當 f(n)=ω(g(n))，稱 g(n)是 f(n)的 asymptotically strict lower bound

3.  Asymptotic Notation 皆為函數的集合  
    在此處，和一般的表示法較不同的是:

- 若一函數 f(n)屬於 O(g(n))，並不寫成 f(n)∈ O(g(n))，而是**f(n)=O(g(n))**

綜合來看，O(g(n))所代表的意義為一個函數的集合，其內的函數的 growth order 均 <=g(n)的 growth order  
e.g:  
3n^2+2n、2n+3、logn...等等函數都是屬於 O(n^2)這個集合中

<br/></br>  
<br/></br>  
<br/></br>  
<br/></br>

參考資料：  
[Introduction to Algorithms, Ch3](http://www.amazon.com/Introduction-Algorithms-Edition-Thomas-Cormen/dp/0262033844)  
[Fundamentals of Data Structures in C++, Ch1](http://www.amazon.com/Fundamentals-Data-Structures-Ellis-Horowitz/dp/0929306376)  
[KhanAcademy：Asymptotic notation](https://www.khanacademy.org/computing/computer-science/algorithms/asymptotic-notation/a/asymptotic-notation)  
[Big-O Algorithm Complexity Cheat Sheet](http://bigocheatsheet.com/)  
[Infinite Loop：複雜度分析 - Complexity Analysis](http://program-lover.blogspot.tw/2008/10/complexity-analysis.html)
[MyCodeSchool：Insertion sort algorithm](https://www.youtube.com/watch?v=i-SKeOcBwko)  
[Complxity : Asymptotic Notation](http://alrightchiu.github.io/SecondRound/complexityasymptotic-notationjian-jin-fu-hao.html)

## 隨機亂數

### radom.random():產生小於 1 的隨機浮點數資料 ""0 <= X < 1""

```
import random
print(random.random())

'''
輸出結果 (執行三次)

0.18350339476046051
0.4674897310375111
0.5585431915102029
'''

```

### radom.uniform(a,b):產生指定範圍內的隨機浮點數資料 ""a <= x < b"" a 和 b 都必須指派

```
import random
print(random.uniform(1, 10))

'''
輸出結果 (執行三次)

2.8203248171797264
3.405248506420963
6.5461023522311215
'''

```

### random.randrange(stop):產生 0~stio 內的隨機整數 ""0 <= x < stop""

### random.randrange(start, stop,[step])產生指定範圍內的隨機整數 ""start <= x <stop""

從 0 到 10 中隨機產生一筆整數資料

```
import random
print(random.randrange(11))

'''
輸出結果 (執行三次)

0
2
9
'''

```

從 10 到 50 中隨機產生一筆整數資料:

```
import random
print(random.randrange(10, 51))

'''
輸出結果 (執行三次)

25
47
21
'''

```

從 10 到 50 中隨機產生一筆 5 倍數的整數資料

```
import random
print(random.randrange(10, 51, 5))

'''
輸出結果 (執行三次)

25
35
15
'''

```

### random.randint(start, stop) 產生範圍內的隨機整數資料 ""start <= x <= stop""

從 0 到 10 中隨機產生一筆整數資料

```
import random
print(random.randint(0, 10))

'''
輸出結果 (執行三次)

0
6
7
'''

```

[參考資料: python random 隨機亂數小百科](https://icoding.com.tw/articles/python-tutorial-random-module-1.php)  
[參考資料: python 產生 random 隨機不重複 list](https://shengyu7697.github.io/python-generate-non-repeating-random-numbers/)

## 迭代法(iterator)

- 1.在電腦科學中，迭代是程式中隊一組指令(或一定步驟)的重複
- 2.既可以被用作通用的術語(與"重複"同義)，也可以$來描述一種特定形式的具有可變狀態的重複  
  在第一種意義下，遞迴是迭代的一個例子，但是通常使用一種遞迴式的表達。比如用 ""0!=1"" ， ""n!=n\*(n-1)!"" 來表示階乘。而迭代通常不是這樣寫的。  
  在第二種(更嚴格的)意義下，迭代描述了在指令式程式語言中使用的編程風格。與之形成對比的是遞迴，他更偏向於聲明式的風格

這是一個依賴於破壞性值的迭代的例子，以指令式的虛擬碼寫成:

```
var i, a = 0         // 疊代前初始化
for i from 1 to 3    // 重複3次
{
    a = a + i        // a的值增加i
}
print a              // 列印出數字6
```

在這個程式片段中，變數 i 的值會不斷改變，一次取值 1、2 和 3。這種改變賦值，或者叫做可變狀態，是迭代的特徵  
是二分法解方程的遞迴和迭代演算法的比較  
遞迴:

```
確定開區間左邊界和右邊界，(L, R)
若L + 1 >= R（即不包含整數點），表示序列中不存在f(x)
取中位 M = (L + R) / 2
若f(M) == y，返回M
否則根據f(M)和y的關係遞迴尋找(L, M)或(M, R)
```

迭代:

```
確定邊界(L, R)
while (L + 1 < R) /* 區間中包含整點 */
求中位M = (L + R) / 2
若f(M)等於y，登出迴圈
根據f(M)與y的關係執行 L = M 或 R = M，進入下一輪迴圈
```

[參考資料:迭代 維基百科](https://zh.wikipedia.org/wiki/%E8%BF%AD%E4%BB%A3)

## 蒙地卡羅(Monte Carlo method)
