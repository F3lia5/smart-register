# Akıllı Kasa – Para Üstü Hesaplama Programı

C dilinde yazılmış bir ödev projesidir. Kasiyerin girdiği ürün tutarı ve müşterinin ödediği paraya göre para üstünü hesaplar ve bu para üstünün **en az sayıda banknot ve madeni para** ile nasıl verileceğini ekrana yazar.

## Programın Amacı

- Kullanıcıdan ürün tutarını ve ödenen parayı (TL) alır. Ödenen para, ürün tutarına eşit ya da ondan büyüktür.
- Para üstünü hesaplar.
- Para üstünü en az sayıda küpürle gösterir.
- Müşteriye verilen toplam küpür sayısını yazdırır.

**Kullanılan küpürler:**

| Banknot | Madeni para |
|---------|-------------|
| 200 TL, 100 TL, 50 TL, 20 TL, 10 TL, 5 TL, 1 TL | 50 kuruş, 25 kuruş, 10 kuruş, 5 kuruş, 1 kuruş |

## Programın Uyması Gereken Kurallar

1. Ürün tutarı ve ödenen para `float` değişkenlerde tutulur. Küpür hesabı **kuruş cinsinden tam sayılarla** yapılır.
2. Programın sonunda verilen **toplam küpür sayısı** ekrana yazdırılır.
3. **Rapor sorusu:** Para üstü kuruşa çevrilirken yuvarlama yapılmazsa (ödenen − tutar, × 100, `int`'e çevirme) 18,70 TL tutar ve 20 TL ödeme için doğru para üstü olan 130 kuruş yerine 129 kuruş bulunur. Nedeni ondalık sayıların ikilik tabanda tam saklanamamasıdır. Programda bu sorun yuvarlama ile çözülmüştür.

## Ödev Kapsamı – Kullanılabilecek ve Kullanılamayacak Konular

Hocanın ödev için belirttiği ders konuları:

- C programlama diline giriş
- Değişkenler ve operatörler
- Veri depolama ve sayı sistemleri
- Program yapısı
- Aritmetik işlemler ve kullanıcı girdisi
- Tür dönüşümü (type casting) ve birim dönüşümleri

**Hocadan alınan onay (soru-cevap sonucu):**

| Yapı | Durum |
|------|-------|
| Bölme (`/`) ve mod (`%`) operatörleri | Kullanılabilir |
| Type casting | Kullanılabilir |
| `math.h` kütüphanesi (ör. yuvarlama) | Kullanılabilir |
| `while` döngüsü | Kullanılabilir |
| Diziler | Kullanılabilir |
| Fonksiyonlar | Kullanılabilir |
| `if` / `else` | **Kullanılamaz** |
| `for` döngüsü | **Kullanılamaz** |
| Listede olmayan diğer yapılar (`switch` vb.) | Hocaya sorulmadı, kullanılmayacak |

## Algoritma

1. Ürün tutarını ve ödenen parayı `float` olarak oku.
2. Farkı hesapla, 100 ile çarp, yuvarla ve kuruş cinsinden `int` değişkene ata.
3. En büyük küpürden başlayarak her küpür için: adet = kalan / küpür, kalan = kalan % küpür.
4. Her küpürün adedini ekrana yaz.
5. Adetleri toplayıp toplam küpür sayısını yazdır.

Akış şeması ve algoritmanın ayrıntıları ödev kâğıdında yer almaktadır.

## Geliştirme Süreci ve Kullanılan Araçlar

**Kod yazma ve derleme**
- Kod editörü: VS Code kullanıldı, kod burada yazıldı ve düzenlendi.
- Derleyici: GCC ile program derlendi ve farklı örneklerle test edildi.

**Sürüm kontrolü**
- Git ile proje yerelde takip edildi, GitHub'da repo açıldı.
- Her aşamadan sonra `git add`, `git commit` ve `git push` ile değişiklikler yüklendi.

**Araştırma ve öğrenme kaynakları**
- W3Schools sitesinde `scanf`, `printf`, `%` operatörü ve `float` yuvarlama konuları okundu.
- Ders Notları ve Örnekler: C Dili ve Yazılım Mühendisliğine Giriş dersleri kapsamında Obsidian üzerinde tuttuğum notlar ve derste işlenen örnekler incelenmiştir. İstek üzerine notlar paylaşılabilir.
- Bu projenin geliştirilme sürecinde yapay zekâ asistanı (Claude), yalnızca Türkçe imla, yazım kuralları ve dil analizi amacıyla kullanılmıştır. Projenin kaynak kodları, algoritma tasarımı, kullanılan kütüphaneler/teknolojiler ve geliştirme süreçleri tamamen benim tarafımdan araştırılmış, öğrenilmiş ve yazılmıştır. Kod içeriğinde veya teknik öğrenim aşamasında herhangi bir yapay zekâ desteğinden yararlanılmamıştır.

**Test süreci**
- Program, [18.70 TL tutar ve 20 TL ödeme gibi] örneklerle denendi.
- Float hassasiyeti nedeniyle çıkan hata [fark edildi ve yuvarlama ile düzeltildi].

## Derleme ve Çalıştırma

```
gcc akilli_kasa.c -o akilli_kasa -lm
./akilli_kasa
```

## Örnek Çalıştırma

```
Urun tutari (TL): 18.70
Odenen para (TL): 20
```

Beklenen para üstü: **1 TL 30 Kuruş** (1 × 1 TL, 1 × 25 kuruş, 1 × 5 kuruş = 3 küpür)

## Dosyalar

- `akilli_kasa.c` – program kaynak kodu
- `README.md` – proje açıklaması
