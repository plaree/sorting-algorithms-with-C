# Quick Sort
### Quick Sort, en popüler ve hızlı sıralama algoritmalarından biri olarak bilinir. Bu algoritma, hızlı bir şekilde büyük veri kümesini sıralamak için etkili bir yöntem sunar. 
Hızlı sıralama, "böl ve fethet" stratejisini temel alarak çalışır. Yani, veri kümesini parçalara ayırır, her bir parçayı ayrı ayrı sıralar ve daha sonra parçaları birleştirerek sonuçta tamamen sıralı bir liste elde eder.
###

Pivot (Pivot Noktası) Seçimi: İlk adım olarak, veri kümesinden bir eleman seçilir ve bu eleman pivot (dönüm) olarak belirlenir. Pivot, veri kümesini iki bölüme ayırmak için referans noktası olarak kullanılır.

Bölme (Partitioning) İşlemi: Pivot seçildikten sonra, veri kümesinde pivot elemandan küçük olanlar ve pivot elemandan büyük olanlar olmak üzere iki alt küme oluşturulur. Pivot eleman, bu iki alt küme arasında doğru konumuna yerleştirilir. Yani, sol tarafta pivot elemandan küçük, sağ tarafta ise pivot elemandan büyük elemanlar bulunur.

Rekürsif Sıralama: İki alt küme, pivot elemanın konumu üzerinden ayrı ayrı sıralanır. Bu işlem, her alt küme için tekrarlanarak alt kümeler daha küçük parçalara ayrılıncaya kadar devam eder.

Birleştirme (Merge) İşlemi: Alt kümeler, sıralanmış halleriyle birleştirilerek orijinal veri kümesini oluşturur.

![quick_sort_partition_animation](https://github.com/plaree/sorting-algorithms-with-C/assets/57459021/54ddab99-0f12-41ed-8c0b-05a3b1008178)
