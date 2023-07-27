# Quick Sort
### Quick Sort, en popüler ve hızlı sıralama algoritmalarından biri olarak bilinir. Bu algoritma, hızlı bir şekilde büyük veri kümesini sıralamak için etkili bir yöntem sunar. 
Hızlı sıralama, "böl ve fethet" stratejisini temel alarak çalışır. Yani, veri kümesini parçalara ayırır, her bir parçayı ayrı ayrı sıralar ve daha sonra parçaları birleştirerek sonuçta tamamen sıralı bir liste elde eder.
###

Pivot (Pivot Noktası) Seçimi: İlk adım olarak, veri kümesinden bir eleman seçilir ve bu eleman pivot (dönüm) olarak belirlenir. Pivot, veri kümesini iki bölüme ayırmak için referans noktası olarak kullanılır.

Bölme (Partitioning) İşlemi: Pivot seçildikten sonra, veri kümesinde pivot elemandan küçük olanlar ve pivot elemandan büyük olanlar olmak üzere iki alt küme oluşturulur. Pivot eleman, bu iki alt küme arasında doğru konumuna yerleştirilir. Yani, sol tarafta pivot elemandan küçük, sağ tarafta ise pivot elemandan büyük elemanlar bulunur.

Rekürsif Sıralama: İki alt küme, pivot elemanın konumu üzerinden ayrı ayrı sıralanır. Bu işlem, her alt küme için tekrarlanarak alt kümeler daha küçük parçalara ayrılıncaya kadar devam eder.

Birleştirme (Merge) İşlemi: Alt kümeler, sıralanmış halleriyle birleştirilerek orijinal veri kümesini oluşturur.

Hızlı sıralamanın zaman karmaşıklığı en iyi durumda O(n log n), ortalama ve en kötü durumlarda ise O(n^2) olabilir. Ancak çoğunlukla ortalama durumda hızlı ve etkili çalıştığı için tercih edilir. Eğer pivot eleman düzenli bir şekilde seçilemezse (örneğin, her zaman en küçük veya en büyük eleman seçilirse), en kötü durum karmaşıklığı ortaya çıkabilir. Ancak iyi tasarlanmış bir pivot seçimi algoritması, bu durumu büyük ölçüde azaltabilir ve ortalama durumda hızlı sıralama algoritması oldukça başarılı bir şekilde çalışır.

Hızlı sıralama, veri kümesinin boyutuna bağlı olmaksızın genellikle verimli bir sıralama algoritmasıdır. Ancak bellek yönetimi ve pivot seçimi gibi konularda dikkatli olunması gerekebilir.

![quick_sort_partition_animation](https://github.com/plaree/sorting-algorithms-with-C/assets/57459021/54ddab99-0f12-41ed-8c0b-05a3b1008178)
