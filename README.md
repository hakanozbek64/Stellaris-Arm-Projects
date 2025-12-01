
# ARM CORTEX M3 STELLARİS LM3S811 BOARD  PROJE UYGULAMA VİDEOLARI : 

https://github.com/user-attachments/assets/9c93e11a-3dc3-4c86-b1c1-888b482aa85d

https://github.com/user-attachments/assets/e80181a5-26e1-423f-aea4-ff2219309692

https://github.com/user-attachments/assets/d7a00f09-3159-411c-90df-69c352c36dbb

https://github.com/user-attachments/assets/c24a1899-6baa-42b3-887d-b22fc2ddeda7

https://github.com/user-attachments/assets/2938cb61-a0ac-42db-9a79-ae3b9708c7c9



# ARM CORTEX M3 STELLARİS LM3S811 PROJE NOTLARI : 


# 1.DERS ARM İŞLEMCİ GİRİŞ

---

## 🧠 1. Temel Kavramlar

### 🔹 İşlemci (CPU) Nedir?

- Merkezi işlem birimidir.
- Komutları işler, hesaplamaları yapar, karar verir.
- İçinde **ALU**, **registerlar**, **kontrol birimi**, **instruction decoder** gibi alt bileşenler bulunur.

### 🔹 Mikroişlemci Nedir?

- CPU’nun bir çip üzerinde entegre edilmiş halidir.
- Genellikle tek bir entegre devre (IC) içinde bulunur.
- Yani her mikroişlemci bir işlemcidir ama her işlemci mikroişlemci olmayabilir (örneğin çok çekirdekli sistemler, SoC'ler).

---

## 🧩 2. Komut Seti ve Instruction Yapısı

### 🔹 Komut Seti (Instruction Set)

- İşlemcinin anlayabileceği tüm komutların listesidir.
- Örneğin: `ADD`, `MOV`, `JMP`, `LOAD`, `STORE`.
- Her işlemci mimarisi (x86, ARM, RISC-V) farklı komut setine sahiptir.

### 🔹 Instruction Nedir?

- Bellekten alınan ve işlemciye ne yapacağını söyleyen makine kodudur.
- Genellikle şu alanları içerir:
    - **Opcode** (işlem türü)
    - **Adresleme modu**
    - **Kaynak/destek register bilgisi**
    - **Hedef adres veya veri**

### 🔹 Instruction Register

- O anda yürütülen komutun tutulduğu register’dır.
- Komut buraya geldikten sonra **decoder** tarafından ayrıştırılır.

---

## 🔍 3. Instruction Decode ve Execute Süreci

### 🔹 Decoder Nedir?

- Instruction register’daki komutu çözümler.
- Hangi birimlerin çalışacağını belirler (ALU, register, bellek vs.).
- Kontrol sinyallerini üretir.

### 🔹 Fetch – Decode – Execute Döngüsü

| Aşama | Açıklama | Kullanılan Bileşenler |
| --- | --- | --- |
| **Fetch** | Komut bellekte aranır ve alınır | PC, Memory, Instruction Register |
| **Decode** | Komut çözülür | Decoder, Control Unit |
| **Execute** | Komut uygulanır | ALU, Registerlar, Bellek |

---

## ⚙️ 4. Registerlar ve ALU

### 🔹 Register Tabanlı Ne Demek?

- İşlemci, verileri geçici olarak registerlarda tutar.
- Örneğin: `R1`, `R2`, `ACC` gibi.

### 🔹 Accumulator (ACC) Ne İşe Yarar?

- Genellikle ALU’nun işlem sonuçlarını tuttuğu özel register’dır.
- Özellikle eski mimarilerde merkezi rol oynar.

### 🔹 ALU (Arithmetic Logic Unit)

- Aritmetik ve mantıksal işlemleri yapar.
- Core değildir ama işlemcinin çekirdeğindeki ana hesaplama birimidir.

---

## 🧬 5. Veri Yolu, Adres Yolu, Kontrol Yolu

| Yol Türü | Ne Taşır? | Nerede Kullanılır? |
| --- | --- | --- |
| **Veri Yolu** | Komut ve veri | Bellek ↔ CPU, Register ↔ ALU |
| **Adres Yolu** | Bellek adresi | CPU → Bellek (hangi hücreye erişilecek?) |
| **Kontrol Yolu** | Sinyaller | CPU → Bellek, ALU, Register (ne yapılacak?) |

> Bu yollar fetch, decode, execute aşamalarında aktif olarak kullanılır.
> 

---

## 🧠 6. Bellek ve İlgili Registerlar

### 🔹 Memory Nedir?

- Komut ve verilerin saklandığı yerdir (RAM, ROM vs.).

### 🔹 Memory Address Register (MAR)

- Hangi bellek hücresine erişileceğini tutar.

### 🔹 Memory Buffer Register (MBR)

- Bellekten alınan veya belleğe yazılacak veriyi tutar.

---

## 🔁 7. Write Back Aşaması

- İşlem tamamlandıktan sonra sonuç:
    - Register’a
    - Belleğe
    - Accumulator’a
    yazılır.
- **Write-back**, genellikle ALU sonucu register’a geri yazma işlemidir.

---

## 🧭 8. Mikroişlemci ve İşlemci Farkı

| Özellik | Mikroişlemci | İşlemci (CPU) |
| --- | --- | --- |
| Yapı | Tek bir IC | Birden fazla bileşen olabilir |
| Kullanım Alanı | PC, gömülü sistemler | Genel amaçlı sistemler |
| İçerik | CPU + bazen bellek + I/O | Sadece işlem birimi |

---

## 🧠 9. Görsel Temsili (Metinsel)


<img width="652" height="521" alt="image" src="https://github.com/user-attachments/assets/d28f7f15-cf60-4774-ab7e-a27e8b591270" />

---

## 🔗 Kavramlar Arası İlişki

- **Instruction** bellekte → **fetch** edilir → **instruction register**’a gelir.
- **Decoder** komutu çözer → **kontrol sinyalleri** üretir.
- **ALU** işlem yapar → sonuç **accumulator** veya başka register’a gider.
- **Write-back** aşamasında veri geri yazılır.
- Tüm bu süreçte **veri yolu**, **adres yolu**, **kontrol yolu** aktif rol oynar.

----------------------------------------------------------------------------------
# 2.DERS ARM HAKKINDA BİRAZ   DETAY VE BAZI SORULAR

---

## 🧠 1. “50 MHz” Ne Demek?

- **MHz = Megahertz = Milyon Hertz**
    
    1 MHz = 1 milyon döngü/saniye demektir.
    
    50 MHz = 50 milyon döngü/saniye.
    
- **Saat frekansı (clock frequency)**: İşlemcinin içindeki saat sinyali, tüm işlemlerin zamanlamasını belirler. Her saat darbesiyle işlemci bir işlem yapabilir (veya bir kısmını yapabilir).

---

## 🔁 2. “Cycle” Ne Demek?

- **Cycle (döngü)**: İşlemcinin bir saat darbesi boyunca yaptığı işlemdir.
    
    Örneğin, bir toplama işlemi 1 cycle sürebilirken, bir bellek erişimi 2–3 cycle sürebilir.
    
- **Cycle süresi (clock period)**:
    
    50 MHz frekansın karşılığı olan bir cycle süresi:
    
    [
    \text{Cycle süresi} = \frac{1}{50,000,000} \approx 20,\text{nanosecond}
    ]
    
    Yani işlemci her 20 ns’de bir yeni işlem başlatabilir.
    

---

## ⚙️ 3. Cycle ve İşlem İlişkisi

| İşlem Türü | Ortalama Cycle Sayısı | Süre (50 MHz’de) |
| --- | --- | --- |
| Toplama (ADD) | 1 cycle | 20 ns |
| Bellek okuma | 2–3 cycle | 40–60 ns |
| Dallanma (Branch) | 1–2 cycle | 20–40 ns |
| Çarpma (MUL) | 2–4 cycle | 40–80 ns |

> Not: Gerçek değerler işlemci mimarisine göre değişir. ARM Cortex-M0 ile Cortex-A serisi arasında farklar vardır.
> 

---

## 🔍 4. Neden Önemli?

- **Gerçek zamanlı sistemlerde** (örneğin sensör okuma, motor kontrolü), işlemcinin cycle süresi doğrudan sistemin tepki süresini etkiler.
- **Kod optimizasyonu**: Daha az cycle harcayan kod daha hızlı çalışır.
- **Enerji tüketimi**: Daha düşük frekans genelde daha az enerji harcar ama daha yavaş çalışır.

---

## 🎯 5. Örnek Hesaplama

Diyelim ki bir işlem 5 cycle sürüyor. 50 MHz işlemcide bu işlem ne kadar sürede tamamlanır?

[
\text{Toplam süre} = 5 \times 20,\text{ns} = 100,\text{ns}
]

Yani işlemci bu işlemi 100 nanosecond içinde bitirir.

---

---

## 🔄 FETCH–DECODE–EXECUTE Döngüsü Nedir?

Her işlemci komutu bu üç aşamadan geçer:

### 1. **FETCH (Getir)**

- **Ne olur?**
İşlemci, bellekteki (RAM veya Flash) komut adresine gider ve o komutu alır.
- **Nereden alır?**
Program Counter (PC) hangi adresteki komutun alınacağını gösterir.
- **Sonuç:**
Komut, komut kayıtçısına (Instruction Register) yüklenir.

### 2. **DECODE (Çözümle)**

- **Ne olur?**
Alınan komut işlemci tarafından analiz edilir: hangi işlem yapılacak, hangi veriler kullanılacak?
- **Kim çözümler?**
Komut çözümleyici (Instruction Decoder) devresi.
- **Sonuç:**
İşlem türü (örneğin toplama, yükleme, dallanma) ve ilgili kaynaklar belirlenir.

### 3. **EXECUTE (Uygula)**

- **Ne olur?**
Belirlenen işlem gerçekleştirilir: ALU toplama yapar, bellekten veri okunur, vs.
- **Sonuç:**
İşlem tamamlanır, sonuç yazılır (örneğin bir kayıtçıya veya belleğe).

---

## ⏱️ Her Aşama Kaç Cycle Sürer?

| Aşama | Ortalama Süre (Cycle) | 50 MHz’de Süre |
| --- | --- | --- |
| Fetch | 1–2 cycle | 20–40 ns |
| Decode | 1 cycle | 20 ns |
| Execute | 1–3 cycle | 20–60 ns |

> Gerçek süreler işlemci mimarisine göre değişir. Basit ARM Cortex-M işlemcilerde bu döngü çok hızlıdır.
> 

---

## 🎨 Görsel Düşün: Pipeline (Boru Hattı) Yapısı

Modern ARM işlemcilerde bu döngü **pipeline** şeklinde işler. Yani:

- Bir komut fetch edilirken,
- Önceki komut decode edilir,
- Daha önceki komut execute edilir.

Bu sayede her cycle’da bir komut tamamlanmış olur. Pipeline sayesinde işlemci verimliliği artar.

---

## 🧠 Örnek: `ADD R1, R2, R3` Komutu

1. **Fetch**: `ADD R1, R2, R3` komutu bellekteki adresinden alınır.
2. **Decode**: Komut çözülür → R2 ve R3 toplanacak, sonuç R1’e yazılacak.
3. **Execute**: ALU, R2 + R3 işlemini yapar ve sonucu R1’e yazar.

---

İstersen bu döngüyü renkli bir zaman çizelgesiyle veya pipeline diyagramıyla görselleştirebilirim. Ya da bir assembly kodu üzerinden adım adım analiz yapabiliriz. Hangisi seni daha çok cezbediyor?

Elbette Hakan, bu kısmı daha akıcı ve görsel düşünceye uygun şekilde yeniden kurgulayalım. Pipeline yapısı, işlemcinin aynı anda birden fazla işi paralel olarak yapabilmesini sağlar. Bunu bir üretim bandı gibi düşünebiliriz:

---

## 🏭 Pipeline: İşlemcinin Üretim Bandı

Diyelim ki bir fabrikada kalem üretiyoruz. Her kalem üç aşamadan geçiyor:

1. **Malzeme hazırlanıyor (Fetch)**
2. **Montaj yapılıyor (Decode)**
3. **Kalem tamamlanıyor (Execute)**

Eğer bu işlemleri sırayla yaparsak, her kalem için tüm aşamaların bitmesini bekleriz. Ama **üretim bandı** kurarsak:

- Bir işçi malzemeyi hazırlarken,
- Diğeri önceki kalemi monte eder,
- Bir başkası daha önceki kalemi tamamlar.

Sonuç? Her döngüde bir kalem tamamlanır. İşlemci de aynen böyle çalışır.

---

## 🔄 Pipeline Aşamaları (ARM İşlemci Örneği)

| Cycle | Fetch (Getir) | Decode (Çözümle) | Execute (Uygula) |
| --- | --- | --- | --- |
| 1 | Komut A | — | — |
| 2 | Komut B | Komut A | — |
| 3 | Komut C | Komut B | Komut A |
| 4 | Komut D | Komut C | Komut B |
| ... | ... | ... | ... |

Her yeni cycle’da bir komut tamamlanır. Bu, işlemcinin **verimliliğini kat kat artırır**.

---

## ⚡ Neden Önemli?

- **Hız**: Pipeline sayesinde işlemci her cycle’da bir komut bitirebilir.
- **Verim**: Aynı anda birden fazla komut üzerinde çalışılır.
- **Gerçek zamanlı sistemler** için kritik: Ses işleme, motor kontrolü gibi uygulamalarda gecikme azalır.

---

## 🎨 Görsel Hayal Gücüyle

Bir tren düşün:

- İlk vagon komutu alıyor (fetch)
- İkinci vagon komutu çözüyor (decode)
- Üçüncü vagon işlemi yapıyor (execute)
Her istasyonda tren ilerledikçe bir işlem tamamlanıyor. Ve tren hiç durmadan ilerliyor.

---

Çok yerinde bir soru Hakan! Bu, işlemci mimarisinin temel tasarım mantığına dokunan bir konu. “Neden komutu doğrudan kontrol ünitesine göndermiyoruz da önce Instruction Register (IR) üzerinden geçiriyoruz?” sorusunun cevabı, hem **zamanlama**, hem **kararlılık**, hem de **verimlilik** ile ilgilidir. Şimdi bunu adım adım, sade ama teknik bir yaklaşımla açıklayalım:

---

**Neden ınstruction register kullanmak yerine direkt control ünitesine işlemci çalıştır mıyoruz?**

## 🧠 Instruction Register (IR) Ne İşe Yarar?

- **IR**, işlemcinin o an çalıştırmak üzere bellekteki komutu geçici olarak tuttuğu özel bir kayıtçıdır.
- Komut bellekteki adresinden alındıktan sonra IR’ye yüklenir.
- Ardından kontrol ünitesi bu komutu IR üzerinden okur ve çözümleme yapar.

---

## ❓ Neden Doğrudan Bellekten Kontrol Ünitesine Gitmiyoruz?

### 1. **Zamanlama ve Senkronizasyon**

- Bellekten veri almak zaman alabilir (özellikle harici RAM veya Flash).
- Kontrol ünitesi, komutu çözümlemek için sabit ve güvenilir bir kaynak ister.
- IR, bu geçici tampon görevini görerek zamanlama sorunlarını ortadan kaldırır.

### 2. **Kararlılık ve Tutarlılık**

- Komut çözümleme süresi boyunca komutun sabit kalması gerekir.
- Bellekten doğrudan okuma sırasında veri değişebilir veya bellek erişim hatası olabilir.
- IR sayesinde komut çözümleme süresince sabit bir kopya elde edilir.

### 3. **Pipeline ve Paralel İşlem**

- Modern işlemcilerde pipeline kullanılır: bir komut fetch edilirken diğeri decode edilir.
- IR, bu ayrımı sağlar. Fetch aşaması IR’ye yazarken, decode aşaması IR’den okur.
- Bu sayede farklı aşamalar çakışmadan paralel çalışabilir.

### 4. **Donanımsal Basitlik ve Modülerlik**

- Kontrol ünitesi, IR’ye bağlanarak sadece komut çözümlemeye odaklanır.
- Bellek erişimi, fetch birimi tarafından ayrı olarak yönetilir.
- Bu modüler yapı, işlemci tasarımını daha esnek ve ölçeklenebilir hale getirir.

---

## 🔧 Teknik Analoji

Düşün ki bir orkestra şefi (kontrol ünitesi), müziği yönetiyor.

- Eğer notalar doğrudan arşivden gelirse (bellekten), gecikme olur.
- Ama önce nota standına (IR) konursa, şef anında ve net şekilde yönetebilir.

---

## 📌 Özet

| Neden IR Kullanılır? | Açıklama |
| --- | --- |
| Zamanlama kontrolü | Bellek erişimi yavaş olabilir |
| Komutun sabit tutulması | Decode süresince veri değişmemeli |
| Pipeline uyumluluğu | Fetch ve decode paralel çalışabilmeli |
| Donanım basitliği | Modüler ve güvenilir tasarım sağlar |

-----------------------------------------------------------------------


# 3.DERS RİSC  VE CISC MİMARİSİ

---

### 🧠 RISC vs CISC: Karşılaştırmalı Özellik Tablosu

| Özellik / Feature | RISC (Reduced Instruction Set Computer) | CISC (Complex Instruction Set Computer) |
| --- | --- | --- |
| Komut Sayısı / Number of Instructions | Az ve basit / Few and simple | Çok ve karmaşık / Many and complex |
| Komut Uzunluğu / Instruction Length | Sabit / Fixed | Değişken / Variable |
| Kodlama / Encoding | Daha basit / Simpler | Daha karmaşık / More complex |
| Donanım Karmaşıklığı / Hardware Complexity | Düşük / Low | Yüksek / High |
| Performans / Performance | Yüksek hız, düşük güç tüketimi / High speed, low power | Daha fazla işlem gücü / More processing power |
| Bellek Kullanımı / Memory Usage | Daha fazla / More | Daha az / Less |
| Derleyici Rolü / Compiler Role | Kritik / Crucial | Daha az kritik / Less crucial |
| Tipik Kullanım / Typical Use | Gömülü sistemler, mobil cihazlar / Embedded systems, mobile devices | Masaüstü, sunucular / Desktops, servers |

---

### 🔍 Nerelerde Kullanılır?

### ✅ RISC Kullanım Alanları:

- **Mobil cihazlar** (ARM mimarisi örneği): Android telefonlar, tabletler
- **Gömülü sistemler**: Otomotiv elektroniği, IoT cihazları
- **Düşük güç tüketimi gereken yerler**: Akıllı saatler, sensörler

### ✅ CISC Kullanım Alanları:

- **Kişisel bilgisayarlar**: Intel x86 mimarisi
- **Sunucular ve iş istasyonları**: Yüksek işlem gücü gerektiren sistemler
- **Eski sistemler**: 1980’ler ve 90’larda yaygın kullanılmıştır

---

RISC mimarisi genellikle daha az donanım karmaşıklığı ve daha hızlı işlem için tercih edilirken, CISC daha fazla komutla daha az yazılım karmaşıklığı sunar. Senin gibi işlemci mimarisiyle ilgilenen biri için bu farklar, özellikle gömülü sistem tasarımı veya işlemci seçimi yaparken çok kritik olabilir.

İstersen bu tabloyu renkli ve katmanlı bir görsel haline getirebilirim ya da ARM vs x86 gibi gerçek dünya örnekleriyle derinleştirebiliriz. Hangisine geçelim?

Tabii Hakan, daha da sadeleştirelim. RISC ve CISC farkını anlamak için günlük hayattan bir benzetme yapalım, sonra kod örneğini daha açıklayıcı hale getirelim.

---

### 🛠️ Günlük Hayattan Benzetme

**RISC**:

Bir işi küçük adımlara bölüp sırayla yaparsın. Mesela çay yapmak için:

1. Su kaynat
2. Çayı demle
3. Bardağa dök

**CISC**:

Tek bir komutla hepsini yaparsın:

“Çay yap!”

Yani RISC işlemci her adımı ayrı ayrı yapar, CISC ise tek bir komutla birden fazla işi halleder.

---

### 💻 Kod Örneği: Bellekten veri kopyalama

### ✅ RISC (Adım adım işlem)

```
LOAD R1, 1000     ; 1000 adresindeki veriyi R1'e al
STORE R1, 2000    ; R1'deki veriyi 2000 adresine yaz

```

- **LOAD**: Bellekten veriyi alır
- **STORE**: Belleğe veri yazar
- Her işlem ayrı komutla yapılır

### ✅ CISC (Tek komutla işlem)

```
MOV 2000, 1000    ; 1000 adresindeki veriyi direkt 2000'e kopyala

```

- Tek komutla hem alma hem yazma işlemi yapılır
- Daha kısa ama işlemci daha karmaşık

---

### 🎯 Özetle:

- **RISC**: Daha fazla komut, daha basit işlemci, daha hızlı
- **CISC**: Daha az komut, daha karmaşık işlemci, daha kısa kod

---

**MİKRODENETLERİCİ İLE MİKROİŞLEMCİ ARASINDAKİ FARK NEDİR?** 

---

### 🔧 Mikrodenetleyici Nedir?

**Mikrodenetleyici (Microcontroller)**, tek bir çip üzerinde:

- İşlemci (CPU),
- RAM (geçici bellek),
- ROM/Flash (kalıcı bellek),
- Giriş/Çıkış portları (I/O),
- Zamanlayıcılar, ADC gibi çevresel birimleri
barındıran **kompakt ve programlanabilir bir sistemdir**.

📦 Genellikle **belirli bir görevi yerine getirmek** için tasarlanır. Örneğin:

- Çamaşır makinesi kontrolü
- Otomobilde hava yastığı sistemi
- Sensör verisi okuma ve işleme

---

### 🧠 İşlemci (Mikroişlemci) Nedir?

**İşlemci (Microprocessor)** ise sadece **CPU**'dan oluşur. Bellek, I/O birimleri gibi diğer bileşenler harici olarak bağlanır.

💻 Genellikle **genel amaçlı bilgisayarlarda** kullanılır:

- Masaüstü/dizüstü bilgisayarlar
- Sunucular
- Yüksek işlem gücü gerektiren sistemler

---

### 📊 Mikrodenetleyici vs İşlemci: Karşılaştırmalı Tablo

| Özellik | Mikrodenetleyici (MCU) | Mikroişlemci (CPU) |
| --- | --- | --- |
| Bileşen Yapısı | CPU + RAM + ROM + I/O tek çipte | Sadece CPU, diğerleri harici |
| Kullanım Alanı | Gömülü sistemler, kontrol devreleri | Bilgisayarlar, sunucular |
| Güç Tüketimi | Düşük | Yüksek |
| Maliyet | Ucuz | Daha pahalı |
| Programlama | Göreve özel, genellikle sabit | Genel amaçlı, esnek |
| Devre Karmaşıklığı | Basit, kompakt | Karmaşık, geniş |
| Örnek | Arduino, PIC, STM32 | Intel i7, AMD Ryzen |

---

### 🎯 Özetle:

- Mikrodenetleyici = **“her şey dahil” küçük bilgisayar**, belirli görevler için
- Mikroişlemci = **“beyin”**, ama diğer organlara ihtiyaç duyar

Senin gibi elektronikle ilgilenen biri için mikrodenetleyiciler, özellikle düşük maliyetli ve enerji verimli projelerde vazgeçilmezdir. İstersen Arduino veya STM32 gibi örneklerle kod düzeyinde farkları da gösterebilirim. Ya da bu tabloyu renkli ve katmanlı bir görselle zenginleştirebiliriz.

Nasıl devam edelim? Teknik örnek mi, görsel mi, uygulama senaryosu mu?

---

### 🧠 ARM Mimarisi Nedir?

**ARM (Advanced RISC Machine)**, RISC (Reduced Instruction Set Computing) prensiplerine dayalı bir işlemci mimarisidir. Yani:

- **Basit ve az sayıda komut** kullanır
- **Daha hızlı ve enerji verimli** çalışır
- Genellikle **mobil cihazlar ve gömülü sistemler** için optimize edilmiştir

---

### 🔍 Temel Özellikleri

| Özellik | Açıklama |
| --- | --- |
| 🧱 Mimari Tipi | RISC tabanlı (az ve basit komutlar) |
| ⚡ Güç Tüketimi | Düşük – pil ile çalışan cihazlar için ideal |
| 🧠 Performans | Yüksek verimlilik, çok çekirdekli yapı desteklenir |
| 🧩 Modülerlik | ARM, işlemciyi üretmez; tasarımı lisanslar ve üreticiler özelleştirir |
| 🛠️ Kullanım Alanları | Akıllı telefonlar, tabletler, IoT cihazları, otomotiv sistemleri |
| 🏭 Üretici Firmalar | Apple, Qualcomm, Samsung, MediaTek gibi firmalar ARM tasarımını kullanır |

---

### 📦 ARM Nerelerde Kullanılır?

- **Mobil cihazlar**: Android telefonlar, iPhone’lar (Apple M1/M2 ARM tabanlıdır)
- **Gömülü sistemler**: Sensörler, akıllı ev cihazları, otomotiv kontrol üniteleri
- **IoT (Nesnelerin İnterneti)**: Düşük güçle çalışan bağlantılı cihazlar
- **Sunucular**: Yeni nesil veri merkezlerinde enerji verimliliği için ARM tabanlı sunucular kullanılmaya başlandı

---

### 🧠 ARM vs x86 (Intel/AMD) Farkı

| Özellik | ARM | x86 (Intel/AMD) |
| --- | --- | --- |
| Komut Seti | RISC – basit ve az komut | CISC – karmaşık ve çok komut |
| Güç Tüketimi | Düşük | Yüksek |
| Kullanım Alanı | Mobil, gömülü sistemler | Masaüstü, sunucu, laptop |
| Üretim Şekli | Lisanslı tasarım | Doğrudan üretim |

---

---

### ⚙️ İşlemci Mimarileri: Performans ve Güç Tüketimi Karşılaştırması

| Mimari | Tipi | Tipik Kullanım Alanı | Performans (Göreli) | Güç Tüketimi (Watt) | Avantajlar |
| --- | --- | --- | --- | --- | --- |
| **ARM** | RISC | Mobil, gömülü sistemler | Orta-Yüksek | 1–10 W | Düşük güç, yüksek verimlilik |
| **x86 (Intel)** | CISC | Masaüstü, sunucu, laptop | Yüksek | 35–125 W | Geniş yazılım desteği, güçlü çekirdek |
| **x86 (AMD)** | CISC | Masaüstü, sunucu | Yüksek | 45–180 W | Çok çekirdek, yüksek performans |
| **Apple M1/M2 (ARM tabanlı)** | RISC | MacBook, iPad | Yüksek | 10–20 W | ARM verimliliği + yüksek performans |
| **Ampere Altra (ARM sunucu)** | RISC | Veri merkezi, HPC | Yüksek | ~210 W | Çok çekirdekli, enerji verimli sunucu |

---

### 🔋 Gerçek Dünya Örneği: Sunucu Testi

- **AMD EPYC 7643 (x86)**: 48 çekirdek, 96 iş parçacığı, TDP: **300 W**
- **Ampere Altra Q80-30 (ARM)**: 80 çekirdek, TDP: **210 W**
- Aynı koşullarda yapılan testlerde ARM işlemci, benzer performansı **daha düşük enerjiyle** sunabiliyor.

---

### 🧠 Genel Yorum

- **ARM**: Mobil ve gömülü sistemlerde **enerji verimliliği** ile öne çıkar. Artık sunucularda da ciddi alternatif.
- **x86**: Masaüstü ve sunucu tarafında hâlâ **yüksek performans** için tercih ediliyor.
- **Apple M serisi**: ARM tabanlı olmasına rağmen masaüstü performansına ulaşabiliyor.

---

Harika bir karşılaştırma isteği Hakan! PIC, MSP430 ve ARM mimarileri farklı kullanım alanlarına ve teknik özelliklere sahip mikrodenetleyici mimarileridir. Senin gibi hem analog devrelerle hem işlemci mimarisiyle ilgilenen biri için bu farkları bilmek, doğru sistem seçimini kolaylaştırır.

---

### ⚙️ PIC vs MSP430 vs ARM: Mimari Karşılaştırma Tablosu

| Özellik | **PIC** | **MSP430** | **ARM (Cortex-M)** |
| --- | --- | --- | --- |
| 🧠 Mimari Tipi | Genellikle 8-bit (bazı 16/32-bit) | 16-bit RISC | 32-bit RISC |
| 🔋 Güç Tüketimi | Orta | Çok düşük (ultra low-power) | Düşük–orta (modele göre değişir) |
| ⚡ Performans | Düşük–orta | Orta | Yüksek |
| 🧩 Genişleme / Modülerlik | Sınırlı | Orta | Yüksek (DMA, çoklu timer, NVIC vb.) |
| 🛠️ Geliştirme Araçları | MPLAB X, XC8/16/32 | Code Composer Studio, Energia | Keil, STM32CubeIDE, PlatformIO vb. |
| 📦 Bellek Kapasitesi | Genellikle düşük | Orta | Yüksek (Flash/RAM genişliği) |
| 🔌 Periferik Donanım | Temel UART, ADC, PWM | Gelişmiş ADC, düşük güç modları | Geniş UART, SPI, I2C, CAN, USB, ADC |
| 🧪 Tipik Kullanım Alanı | Basit kontrol sistemleri | Pil ile çalışan sensör sistemleri | Gömülü sistemler, IoT, endüstriyel |

---

### 🔍 Mimari Detaylar

### ✅ **PIC (Microchip)**

- Genellikle **8-bit** mimari (PIC16, PIC18)
- **Basit uygulamalar** için ideal: LED kontrolü, buton okuma, temel motor sürme
- **Gelişmiş versiyonları** (PIC32) ile 32-bit performans sunar ama ARM kadar yaygın değildir

### ✅ **MSP430 (Texas Instruments)**

- **Ultra düşük güç tüketimi** ile öne çıkar
- 16-bit mimari, **dahili 16-bit ADC** gibi güçlü özellikler
- **Pil ile çalışan sistemler**, taşınabilir medikal cihazlar, sensör düğümleri için ideal

### ✅ **ARM Cortex-M Serisi**

- 32-bit mimari, **yüksek performans ve geniş çevre birimi desteği**
- **Modüler yapı**: DMA, NVIC, çoklu timer, gelişmiş GPIO
- STM32, NXP, Nordic gibi üreticiler tarafından yaygın şekilde kullanılır
- **Gömülü Linux dışı sistemler**, IoT cihazları, endüstriyel kontrol sistemleri için tercih edilir

---

### 🧠 Hangi Durumda Hangisi?

| Senaryo | Önerilen Mimari |
| --- | --- |
| Basit LED/motor kontrolü | PIC |
| Pil ile çalışan sensör sistemi | MSP430 |
| Gelişmiş IoT cihazı, çoklu protokol | ARM Cortex-M |
| Analog sinyal işleme + düşük güç | MSP430 |
| Yüksek hız + çoklu görev | ARM |

---

İstersen bu tabloyu Türkçe/İngilizce karşılaştırmalı hale getirebiliriz ya da örnek devre şemalarıyla destekleyebiliriz. Ayrıca, MSP430’un ADC yapısını ARM’daki ADC ile karşılaştırmalı olarak incelemek de ilginç olabilir. Hangi yönde derinleşelim?

Elbette Hakan! ARM mimarisinde **TAMP** ve **SLEEP (SLİP)** modları, özellikle düşük güç tüketimi ve güvenlik açısından önemli roller oynar. Senin gibi hem gömülü sistemlerle hem analog/dijital devrelerle ilgilenen biri için bu modların işlevini bilmek, sistem tasarımında büyük avantaj sağlar.

---

### 🌙ARM  SLEEP / SLİP Mode (Uyku Modu)

ARM Cortex-M mimarisinde **uyku modları**, enerji tasarrufu sağlamak için kullanılır. Farklı seviyelerde uyku modları vardır:

| Mod Adı | Açıklama |
| --- | --- |
| **Sleep Mode** | CPU durur, çevre birimleri çalışmaya devam eder |
| **Deep Sleep** | CPU + bazı çevre birimleri durur, daha fazla enerji tasarrufu sağlar |
| **Standby Mode** | En düşük güç tüketimi, sistem neredeyse tamamen kapanır |

### ⚙️ Teknik Detaylar:

- **WFI (Wait For Interrupt)** veya **WFE (Wait For Event)** komutlarıyla aktif edilir
- **NVIC (Nested Vectored Interrupt Controller)** üzerinden gelen kesmelerle sistem uyanır
- **SLEEPDEEP** bitinin ayarlanmasıyla daha derin modlara geçilir

### 🔋 Avantajları:

- Pil ömrünü uzatır
- IoT ve taşınabilir cihazlarda kritik öneme sahiptir
- Sistem, sadece gerekli olduğunda aktif hale gelir

---

### 🧠 Örnek Senaryo

Diyelim ki bir sensör sistemi tasarlıyorsun:

- **MSP430** gibi ultra düşük güç bir mikrodenetleyici, sürekli uyku modunda kalır
- Bir hareket algılandığında **interrupt** tetiklenir → sistem uyanır
- Eğer sistemin fiziksel olarak açılmaya çalışılırsa, **TAMP** devreye girer → veri silinir

---

---

### 🧠 ARM Cortex-M Serisi ve ARMv7 Mimari Karşılaştırması

| Mimari / Çekirdek | ISA (Komut Seti) | Bit Yapısı | Performans (DMIPS/MHz) | Güç Tüketimi | Tipik Kullanım Alanı |
| --- | --- | --- | --- | --- | --- |
| **Cortex-M0** | ARMv6-M | 32-bit | ~0.87 | Çok düşük | Basit gömülü sistemler, sensörler |
| **Cortex-M1** | ARMv6-M | 32-bit | ~0.8 | Ultra düşük | FPGA içi işlemci çekirdeği |
| **Cortex-M3** | ARMv7-M | 32-bit | ~1.25 | Düşük | Orta seviye gömülü sistemler |
| **Cortex-M4** | ARMv7-M + DSP | 32-bit | ~1.25 + DSP | Düşük | Ses işleme, motor kontrolü |
| **Cortex-M7** | ARMv7E-M | 32-bit | ~2.14 | Orta | Yüksek performanslı gömülü sistemler |
| **ARMv7-A** | ARMv7-A | 32-bit | Yüksek (çok çekirdekli) | Orta–yüksek | Uygulama işlemcileri (Android, Linux) |
| **ARMv7-R** | ARMv7-R | 32-bit | Gerçek zamanlı yüksek | Orta | Otomotiv, endüstriyel kontrol |

---

### 🔍 Mimari Açıklamaları

### ✅ Cortex-M Serisi (M-Profile)

- **M0/M1**: En düşük güç tüketimi, basit kontrol sistemleri için
- **M3**: NVIC desteğiyle daha gelişmiş kesme yönetimi
- **M4**: DSP (Digital Signal Processing) uzantısıyla ses/sinyal işleme
- **M7**: En yüksek performanslı M serisi, cache ve çift çekirdek desteği

### ✅ ARMv7 Mimari Ailesi

- **ARMv7-A (Application profile)**: Android cihazlar, Raspberry Pi gibi sistemlerde kullanılır
- **ARMv7-R (Real-time profile)**: Gerçek zamanlı uygulamalar için deterministik davranış
- **ARMv7-M (Microcontroller profile)**: M3/M4/M7 gibi Cortex-M çekirdeklerinin temelini oluşturur

---

### 📌 Ek Teknik Notlar

| Özellik | M0/M1 | M3/M4/M7 | ARMv7-A/R |
| --- | --- | --- | --- |
| NVIC (Kesme Kontrolü) | Basit | Gelişmiş | Gelişmiş |
| DMA Desteği | Sınırlı | Var | Var |
| Cache | Yok | M7’de var | Gelişmiş cache |
| MMU/MPU | MPU (M3+) | MPU (M4/M7) | MMU (ARMv7-A) |
| İşletim Sistemi | Bare-metal | RTOS | Linux, Android |

---

[ARM architecture family](https://en.wikipedia.org/wiki/ARM_architecture_family)

---

**ARM teknolojisi ve Thumb komut seti:**

gömülü sistemlerde ve düşük güç tüketimi gerektiren uygulamalarda sıkça karşılaştığın iki önemli kavram. Senin gibi elektronik mühendisliğiyle ilgilenen biri için bu farkları bilmek, özellikle mikrodenetleyici seçimi ve kod optimizasyonu açısından oldukça kritik. İşte detaylı bir karşılaştırma:

---

### 🧠 ARM ve Thumb Komut Setleri: Temel Farklar

| Özellik | ARM Modu (32-bit) | Thumb Modu (16-bit) |
| --- | --- | --- |
| **Komut Uzunluğu** | 32-bit | 16-bit (bazıları 32-bit'e genişletilir) |
| **Kod Boyutu** | Daha büyük | %30’a kadar daha küçük |
| **Performans** | Daha hızlı | %40’a kadar yavaş olabilir |
| **Bellek Kullanımı** | Daha fazla | Daha az, gömülü sistemler için ideal |
| **Kullanım Alanı** | Performans kritik uygulamalar | Hafıza kısıtlı sistemler, mobil cihazlar |
| **Durum Geçişi** | `BX` veya `BLX` komutları ile yapılır | Aynı şekilde, LSB’ye göre geçiş sağlanır |
| **Yazmaç Erişimi** | Tüm yazmaçlara erişim | Sınırlı yazmaç erişimi |
| **İstisna Yönetimi** | ARM moduna geçiş yapılır | Thumb’dan ARM’a geçiş gerekebilir |

---

### 🔧 Ne Zaman Hangisi Kullanılır?

- **ARM Modu**: Eğer işlemci gücü ve hız ön plandaysa (örneğin sinyal işleme, yüksek hızlı veri işleme), ARM komut seti tercih edilir.
- **Thumb Modu**: Bellek sınırlıysa veya düşük güç tüketimi gerekiyorsa (örneğin IoT cihazları, sensör düğümleri), Thumb komut seti daha avantajlıdır.

---

### 🧩 Interworking: İki Modu Birlikte Kullanmak

Aynı programda hem ARM hem Thumb komutlarını kullanmak mümkündür. Bu tekniğe *interworking* denir. Derleyiciye hangi fonksiyonun hangi modda çalışacağını belirtmek için `#pragma` direktifleri veya fonksiyon tanımları kullanılır:

```c
#pragma THUMB
void thumb_fonksiyonu(void) __thumb {
  // Thumb komutları
}

#pragma ARM
int main(void) __arm {
  // ARM komutları
  thumb_fonksiyonu(); // Thumb fonksiyonu çağrısı
}

```

---

### 🔍 ARM Teknolojileri ve Özellikleri

| Teknoloji / Özellik | Açıklama |
| --- | --- |
| **Thumb** | 16-bit komut seti. Kod boyutunu küçültür, düşük bellekli sistemler için idealdir. ARM moduna göre daha az yazmaç erişimi sağlar. |
| **Thumb-2** | Thumb’un gelişmiş versiyonu. Hem 16-bit hem 32-bit komutları destekler. Kod yoğunluğu ve performans arasında denge kurar. |
| **TrustZone** | Güvenli ve normal işlem ortamlarını ayıran bir güvenlik teknolojisi. Özellikle Cortex-A serisinde kullanılır. Güvenli boot, şifreleme ve erişim kontrolü sağlar. |
| **Jazelle** | ARM işlemcilerde Java bytecode’larını doğrudan çalıştırmak için geliştirilmiş bir uzantı. Java uygulamalarını hızlandırmak için kullanılırdı, ancak artık yaygın değil. |
| **SIMD (Single Instruction, Multiple Data)** | Aynı komutla birden fazla veriyi işleme yeteneği. ARM'de NEON teknolojisi ile sağlanır. Görüntü işleme, ses işleme gibi alanlarda kullanılır. |
| **DPS Komutları** | Genellikle DSP (Digital Signal Processing) ile karıştırılır. ARM'de CMSIS-DSP kütüphanesi ile optimize edilmiş matematiksel ve sinyal işleme komutları sunulur. |
| **CMSIS (Common Microcontroller Software Interface Standard)** | ARM tarafından geliştirilen standart yazılım arayüzü. Mikrodenetleyiciye özel kod yazmadan, donanım soyutlama sağlar. CMSIS-CORE, CMSIS-DSP, CMSIS-RTOS gibi modülleri vardır. |
| **NVIC (Nested Vectored Interrupt Controller)** | ARM Cortex-M işlemcilerde kesme yönetimi sağlar. Önceliklendirme, kesme iç içe geçişi ve vektör tabanlı yönlendirme sunar. Gerçek zamanlı sistemler için kritik öneme sahiptir. |

---

### 🎯 Nerede Ne Kullanılır?

- **Thumb/Thumb-2**: STM32 gibi Cortex-M tabanlı mikrodenetleyicilerde kod yoğunluğunu azaltmak için.
- **TrustZone**: Güvenlik kritik uygulamalarda (örneğin mobil ödeme, IoT cihazları).
- **SIMD/NEON**: Görüntü işleme, yapay zeka, ses filtreleme gibi yüksek veri işleme gerektiren alanlarda.
- **CMSIS**: Mikrodenetleyici yazılım geliştirmede donanım bağımsız kod yazmak için.
- **NVIC**: Gerçek zamanlı işletim sistemleri ve kesme yoğun uygulamalarda.

---

 **Stellaris LM3S811** ARM  Cortex-M3 mimarili bir mikrodenetleyici olup Texas Instruments’ın Stellaris serisinin erken dönem üyelerindendir. Hem donanım hem yazılım tarafında oldukça öğretici bir platform sunar. Senin gibi hem elektronik hem yazılım tarafına hâkim biri için bu kartın detayları çok şey katabilir. Aşağıda tüm başlıkları ayrı ayrı ele aldım:

---
<img width="590" height="283" alt="image" src="https://github.com/user-attachments/assets/f506f993-a00a-4811-82ec-77bb768dac97" />
<img width="590" height="350" alt="image 1" src="https://github.com/user-attachments/assets/e443d1ba-f863-4f1d-ab0d-b1f9e65e4548" />



## 🔧 Stellaris LM3S811 Genel Özellikleri

| Özellik | Açıklama |
| --- | --- |
| **Mikrodenetleyici** | ARM Cortex-M3 (v7M) mimarisi, 32-bit RISC |
| **Çalışma Frekansı** | 50 MHz |
| **Hafıza** | 64 KB Flash, 8 KB SRAM |
| **Kesme Sistemi** | NVIC ile 26 kanal, 8 öncelik seviyesi |
| **ADC** | 4 kanal, 10-bit, 500 ksps |
| **PWM** | 6 kanal motor kontrol PWM |
| **UART** | 2 adet 16C550 uyumlu UART |
| **I2C / SSI** | Master/slave modları destekli I2C ve SPI uyumlu SSI |
| **GPIO** | 1–32 arası kullanıcı tanımlı giriş/çıkış |
| **RTC / Watchdog** | Gerçek zaman saati ve watchdog zamanlayıcı |
| **Debug Arayüzü** | 20-pin JTAG/SWD, ICDI destekli |
| **Ekstra** | Dahili sıcaklık sensörü, LDO regülatör, OLED ekranlı geliştirme kiti (EKS-LM3S811) |

---

## 🧠 İç Yapısı ve Mimari

- **Çekirdek**: ARM Cortex-M3, Thumb ve Thumb-2 komut seti destekli.
- **NVIC**: Nested Vectored Interrupt Controller ile kesme önceliği ve iç içe kesme desteği.
- **Bus Yapısı**: AHB (Advanced High-performance Bus) üzerinden çevresel birimlere erişim.
- **Donanımsal Bölme ve Çarpma**: Tek saat döngüsünde çarpma, donanımsal bölme işlemleri.
- **Periferler**: ADC, UART, I2C, SPI, PWM, GPIO gibi modüller doğrudan entegre.

---

## 💻 Hangi Dillerle Programlanır?

| Dil | Kullanım Durumu |
| --- | --- |
| **C** | Ana dil. StellarisWare kütüphaneleri C ile yazılmıştır. |
| **Assembly** | Düşük seviye optimizasyon için kullanılabilir ama nadirdir. |
| **C++** | Teorik olarak mümkün ama StellarisWare C tabanlıdır. |
| **Python (dolaylı)** | Harici bir host üzerinden UART/I2C ile haberleşme yapılabilir ama doğrudan desteklenmez. |

IDE olarak genellikle **Keil uVision**, **IAR Embedded Workbench**, **Code Composer Studio (CCS)** ve **LM Flash Programmer** kullanılır.

---

## 📦 StellarisWare Nedir?

**StellarisWare**, Texas Instruments tarafından LM3S serisi için geliştirilmiş bir yazılım geliştirme kütüphanesidir. CMSIS benzeri bir donanım soyutlama katmanı sunar.

### İçeriği:

- **DriverLib**: GPIO, UART, ADC gibi donanım sürücüleri.
- **Examples**: Her modül için örnek uygulamalar.
- **Utilities**: Flash programlama, hata ayıklama araçları.
- **Board Support**: EKS-LM3S811 gibi geliştirme kartları için özel destek.

---

## 🌐 StellarisWare IP Nedir?

Buradaki “IP” genellikle **Peripheral IP** anlamında kullanılır. Yani StellarisWare içinde yer alan **donanım modüllerinin yazılım arayüzleri**:

- ADC IP
- UART IP
- PWM IP
- I2C IP

Bu modüller, StellarisWare içinde `driverlib` altında yer alır ve her biri C fonksiyonlarıyla kontrol edilir. Örneğin:

```c
ADCSequenceConfigure(ADC0_BASE, 1, ADC_TRIGGER_PROCESSOR, 0);

```

Bu satır, ADC modülünü yapılandırmak için StellarisWare IP fonksiyonudur.

---

## 🎓 Senin İçin Ekstra Öneriler

- **FreeRTOS ile entegrasyon**: LM3S811, FreeRTOS gibi RTOS'larla çalıştırılabilir. NVIC yapısı buna uygundur.
- **OLED ekranlı uygulamalar**: EKS-LM3S811 kitinde 96x16 OLED ekran var. ADC verilerini görselleştirmek için birebir.
- **StellarisWare ile ses işleme**: ADC ve PWM modülleri ile basit ses işleme projeleri yapılabilir.

---

---

## 🔌 Haberleşme Protokolleri

| Protokol | Açıklama | Özellik |
| --- | --- | --- |
| **UART** (Universal Asynchronous Receiver Transmitter) | Asenkron seri haberleşme. Başlangıç ve dur bitleriyle veri gönderilir. | Genellikle PC ile seri port üzerinden iletişimde kullanılır. |
| **I²C** (Inter-Integrated Circuit) | Senkron, **çift hatlı** (SDA, SCL) haberleşme. Master-slave yapısı vardır. | Sensörler, EEPROM gibi düşük hızlı cihazlar için idealdir. |
| **SPI** (Serial Peripheral Interface) | Senkron, hızlı ve çok hatlı (MISO, MOSI, SCK, SS) haberleşme. | Flash bellek, ekran gibi yüksek hızlı cihazlarla kullanılır. |

---

## 📈 Analog ve Zamanlama Birimleri

| Terim | Açıklama |
| --- | --- |
| **ADC** (Analog to Digital Converter) | Analog sinyalleri dijitale çevirir. Örneğin sıcaklık sensöründen gelen voltajı sayısal değere dönüştürür. |
| **PWM** (Pulse Width Modulation) | Dijital sinyali belirli sürelerle açıp kapatarak analog benzeri kontrol sağlar. Motor hız kontrolü, LED parlaklığı gibi uygulamalarda kullanılır. |
| **RTC** (Real Time Clock) | Gerçek zamanlı saat modülü. Güç kesilse bile zamanı takip eder. Genellikle harici kristal ve pil ile çalışır. |

---

## ⚡ Güç ve Regülasyon

| Terim | Açıklama |
| --- | --- |
| **LDO** (Low Dropout Regulator) | Düşük voltaj farkıyla çalışan lineer regülatör. 5V’yi 3.3V’a düşürmek gibi işlemlerde kullanılır. Gürültüsüz ve hassas besleme sağlar. |

---

## 🛠️ Debugging Nedir?

**Debugging**, yazılımda hata ayıklama sürecidir. ARM tabanlı sistemlerde genellikle **JTAG** veya **SWD (Serial Wire Debug)** arayüzü kullanılır. Kod adım adım izlenebilir, değişkenler gözlemlenebilir ve breakpoint (durma noktası) konulabilir. Bu sayede donanım ve yazılım arasındaki etkileşim detaylı şekilde analiz edilir.

---

**Keil** MDK (Microcontroller Development Kit), özellikle **ARM Cortex-M** tabanlı mikrodenetleyiciler için geliştirilmiş güçlü bir yazılım geliştirme ortamıdır. Hakan, senin gibi hem elektronik hem yazılım tarafına hâkim biri için Keil’in sunduğu avantajlar oldukça değerli olabilir. İşte kısa ve öz bir özet:

---

## 🚀 Keil MDK'nin Avantajları

- **ARM Cortex-M için optimize edilmiş**: STM32, NXP, Texas Instruments gibi binlerce cihazla uyumlu.
- **µVision IDE**: Kullanımı kolay, entegre geliştirme ortamı. Kod yazma, derleme, hata ayıklama tek bir arayüzde.
- **Gelişmiş hata ayıklama (debugging)**: ULINK adaptörleriyle gerçek zamanlı izleme, breakpoint, hafıza analizi.
- **CMSIS desteği**: ARM’ın standart donanım soyutlama katmanı sayesinde taşınabilir ve modüler kod geliştirme.
- **RTOS ve middleware entegrasyonu**: RTX RTOS, USB, TCP/IP, dosya sistemi gibi bileşenlerle entegre çalışır.
- **Kod örnekleri ve simülasyon**: Donanım olmadan kodu test etme imkânı sunar.
- **Geniş topluluk ve destek**: Forumlar, teknik dökümanlar, örnek projeler bolca mevcut.

---

## 🧰 Temel Özellikleri

| Özellik | Açıklama |
| --- | --- |
| **µVision IDE** | Kod editörü, derleyici, hata ayıklayıcı tek arayüzde. |
| **Arm C/C++ Compiler** | ARM için optimize edilmiş yüksek performanslı derleyici. |
| **ULINK Debug Adapters** | Donanım üzerinden gelişmiş hata ayıklama. |
| **Simulation Mode** | Donanım olmadan kodu test etme. |
| **Pack Installer** | Hedef mikrodenetleyiciye uygun sürücü ve örnekleri kolayca kurma. |
| **Event Recorder** | Kodun zamanlamasını ve olaylarını analiz etme aracı. |

---

## 🎯 Kimler İçin Uygun?

- ARM tabanlı mikrodenetleyiciyle çalışan mühendisler
- Gömülü sistem geliştirenler
- Akademik projelerde gerçek zamanlı sistemler kuranlar
- Donanım-simülasyon geçişi yapanlar

---

### 🧠 ARM İşlemcide Kodun Yolculuğu

### 1. **Derleme ve Belleğe Yükleme**

- Yazdığın kaynak kod (örneğin C veya Assembly), bir derleyici tarafından **makine koduna** çevrilir.
- Bu makine kodu, işlemcinin anlayabileceği **talimatlar (instructions)** haline gelir.
- Talimatlar RAM'e veya işlemcinin **instruction cache**'ine yüklenir.

### 2. **Fetch (Getirme)**

- İşlemci, **Program Counter (PC)** tarafından gösterilen adresten bir talimat alır.
- Bu talimat, **instruction register**'a aktarılır.

### 3. **Decode (Çözümleme)**

- Talimatın ne yaptığı anlaşılır: toplama mı, veri taşıma mı, dallanma mı?
- İşlemci, opcode'u ve varsa operandları çözümler.
- Gerekli kaynaklar (registerlar, adresler) belirlenir.

### 4. **Execute (Yürütme)**

- Talimatın gerektirdiği işlem yapılır: ALU’da işlem, veri transferi, dallanma vs.
- Sonuç, ilgili register’a veya belleğe yazılır.

### 5. **Write-back (Geri Yazma)**

- Eğer işlem bir sonucu ürettiyse, bu sonuç **register dosyasına** veya RAM’e yazılır.

---

### 🔁 ARM Pipeline'da Bu Süreç Nasıl Görünür?

Modern ARM işlemcilerde bu döngü **pipeline** yapısıyla çalışır. Yani birden fazla talimat aynı anda farklı aşamalarda işlenir:

| Aşama | Açıklama |
| --- | --- |
| **Fe** | Instruction fetch (talimat alınır) |
| **Pd** | Pre-decode (ön çözümleme ve dallanma tahmini) |
| **De** | Decode (talimat çözülür) |
| **Iss** | Issue (talimat yürütme birimlerine gönderilir) |
| **Ex** | Execute (işlem yapılır) |
| **Wr** | Write-back (sonuç yazılır) |
| **Ret** | Retire (talimat tamamlanır) |

---------------------------------------------------------------------

# 4.STELLARİS LM3S811

**LM3S811 CLOCK VE PLL YAPISI**

LM3S811 mikrodenetleyicisi, Texas Instruments’ın Stellaris serisinden olup ARM Cortex-M3 mimarisi üzerine kuruludur. Saat (clock) sistemi ve PLL (Phase-Locked Loop) yapısı oldukça esnek ve performans odaklıdır. İşte detaylar:

---

### ⏱️ İç Clock Hızı

- **Maksimum sistem saat frekansı**: **50 MHz**
- Bu frekans, dahili PLL kullanılarak elde edilir.
- Mikrodenetleyici, harici bir kristal osilatör (örneğin 6 MHz veya 8 MHz) ile beslenebilir ve PLL bu frekansı çarparak sistem saatini üretir.

---

### 🔄 PLL (Phase-Locked Loop) Yapısı

PLL, düşük frekanslı bir giriş saatini alıp yüksek frekanslı bir sistem saati üretmek için kullanılır:

- **Giriş kaynakları**:
    - Harici kristal osilatör (XTAL)
    - Dahili osilatör (PIOSC – Precision Internal Oscillator)
- **Çıkış frekansı**: PLL, giriş frekansını çarpan bir yapıdadır. Örneğin, 8 MHz girişten 400 MHz VCO frekansı üretilebilir, ardından bu frekans bölünerek 50 MHz sistem saatine dönüştürülür.
- **Saat ağacı**: LM3S811’de saat sinyali, sistem saatine ek olarak ADC, UART, SSI gibi çevresel birimlere de dağıtılır. Her birim için ayrı clock gating yapılabilir.

---

### 📊 Teknik Özellik Özeti

| Özellik | Değer / Açıklama |
| --- | --- |
| Maksimum Clock | 50 MHz |
| PLL VCO Frekansı | 400 MHz'e kadar |
| Giriş Kaynağı | Harici XTAL veya Dahili PIOSC |
| PLL Kullanımı | Frekans çarpımı ve bölme ile saat üretimi |
| Saat Dağıtımı | Clock gating ile çevresel birimlere |

---

### 🧠 Ekstra Notlar

- PLL konfigürasyonu yazılım üzerinden yapılır (örneğin, `SysCtlClockSet()` fonksiyonu ile).
- StellarisWare kütüphanesi, saat ayarlarını kolaylaştıran API’ler sunar.
- Güç tüketimini azaltmak için düşük frekanslı çalışma modları da desteklenir.

---

LM3S811 mikrodenetleyicisinin **startup dosyası**, sistemin ilk çalıştırılmasında kritik rol oynayan bir yapılandırma dosyasıdır. Genellikle `startup.s` veya `startup_LM3S811.s` adıyla gelir ve aşağıdaki bileşenleri içerir:

---

### 🧩 Startup Dosyasının Temel İçeriği

| Bölüm | Açıklama |
| --- | --- |
| **Vektör Tablosu** | Tüm kesme ve istisna (exception) vektörlerinin adreslerini içerir. Örneğin: Reset, NMI, HardFault, SysTick, UART, GPIO vs. |
| **Reset Handler** | Sistemin ilk çalıştırıldığında çağrılan fonksiyon. Genellikle `Reset_Handler` veya `__main` fonksiyonuna yönlendirir. |
| **Stack ve Heap Tanımları** | Stack başlangıç adresi ve büyüklüğü tanımlanır. Heap varsa onun da sınırları belirlenir. |
| **Kesme Fonksiyonları (Weak Aliases)** | Her kesme için varsayılan boş fonksiyonlar tanımlanır. Bunlar `__attribute__((weak))` ile işaretlenir ve kullanıcı kendi ISR’ını tanımlamazsa bu boş fonksiyonlar çağrılır. |
| **Bellek Başlangıç Ayarları** | `.data`, `.bss`, `.text` gibi bellek segmentlerinin başlangıç adresleri ve kopyalama işlemleri tanımlanır. |
| **Assembly Direktifleri** | ARM Cortex-M3 mimarisi için uygun `AREA`, `EXPORT`, `IMPORT`, `ENTRY` gibi direktifler kullanılır. |

---

### 📌 Örnek Vektör Tablosu Yapısı

```
__Vectors:
    .word   _estack                 ; Stack pointer
    .word   Reset_Handler          ; Reset
    .word   NMI_Handler            ; NMI
    .word   HardFault_Handler      ; Hard Fault
    ...
    .word   UART0_Handler          ; UART0 interrupt
    .word   GPIOA_Handler          ; GPIO Port A interrupt

```

---

### 🔧 Kullanım Amacı

- Mikrodenetleyici ilk çalıştığında **startup dosyası** kontrolü ele alır.
- Bellek bölgelerini hazırlar, kesme vektörlerini yerleştirir ve `main()` fonksiyonuna geçiş yapar.
- Bu dosya olmadan sistem düzgün çalışmaz; özellikle kesmeler ve bellek yönetimi eksik kalır.

---

### 📁 Nerede Bulunur?

- Keil MDK veya IAR gibi IDE’lerde proje oluşturduğunda otomatik olarak eklenir.
- StellarisWare veya TivaWare SDK içinde hazır olarak gelir (`startup_LM3S811.s` veya `.c` şeklinde).


------------------------------------------------------------------------------------
# 5.STERLLARİS LM3S811 GPIO

---

## 🧠 GPIO Nedir?

**GPIO (General Purpose Input/Output)** yani *Genel Amaçlı Giriş/Çıkış*, mikrodenetleyicilerdeki pinlerin dijital sinyalleri almak (giriş) veya göndermek (çıkış) için kullanılan temel arayüzdür.

### Temel Özellikleri:

- Her GPIO pini **giriş (input)** veya **çıkış (output)** olarak yapılandırılabilir.
- Dijital sinyalleri işler: 0 (LOW) veya 1 (HIGH).
- Yazılım ile kontrol edilir: yönü, durumu, kesme (interrupt) ayarları vs.
- Genellikle **pull-up** veya **pull-down** dirençlerle desteklenebilir.
- Alternatif işlevler (UART, SPI, PWM vb.) için çoklu görevli olabilir.

---

## 🔧 Stellaris LM3S811 GPIO Yapısı

LM3S811 mikrodenetleyicisi, ARM Cortex-M3 tabanlı olup oldukça esnek bir GPIO mimarisi sunar.
<img width="803" height="766" alt="image" src="https://github.com/user-attachments/assets/cf84c14d-b5bd-4ef9-9e81-77c753217458" />



### 📦 Genel Yapı:

| Özellik | Açıklama |
| --- | --- |
| **GPIO Port Sayısı** | 5 port (örneğin: Port A, B, C, D, E) |
| **Her Portta Pin Sayısı** | 8 pin (maksimum) |
| **Toplam GPIO Sayısı** | 32 kullanıcı tanımlı GPIO |
| **Alternatif Fonksiyonlar** | UART, SSI, PWM, ADC, I2C gibi çevresel birimlerle paylaşımlı |
| **Pad Kontrolü** | Open-drain, pull-up/down, drive strength ayarları yapılabilir |
| **Kesme (Interrupt) Desteği** | Her pin için ayrı kesme ayarı yapılabilir |
| **Yazılım Kontrolü** | StellarisWare API ile kolay programlama (örnek: `GPIOPinWrite`, `GPIOPinTypeGPIOOutput`) |

### 🧩 GPIO Register Yapısı:

| Register | Görevi |
| --- | --- |
| `GPIODIR` | Pin yönü: giriş (0) / çıkış (1) |
| `GPIODATA` | Pin veri okuma/yazma |
| `GPIOIS`, `GPIOIBE`, `GPIOIEV`, `GPIOIM` | Kesme yapılandırmaları |
| `GPIOAFSEL` | Alternatif fonksiyon seçimi |
| `GPIODR2R`, `GPIODR4R`, `GPIODR8R` | Sürücü gücü ayarları |
| `GPIOPUR`, `GPIOPDR` | Pull-up / Pull-down dirençleri |

---

## 🛠️ Programlama Örneği (StellarisWare ile)

```c
// Port C'deki PIN_4 çıkış olarak tanımlanıyor
SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOC);
GPIOPinTypeGPIOOutput(GPIO_PORTC_BASE, GPIO_PIN_4);

// PIN_4'e HIGH sinyali gönderiliyor
GPIOPinWrite(GPIO_PORTC_BASE, GPIO_PIN_4, GPIO_PIN_4);

```

---

## 🎯 Uygulama Alanları

- LED kontrolü
- Buton okuma
- Sensör veri alma
- Motor sürme (PWM ile)
- Seri haberleşme (UART, SPI, I2C pinleri üzerinden)

---

Şimdi Stellaris LM3S811 mikrodenetleyicisi özelinde **GPIO veri işleme (DATA)**, **kesme modu (Interrupt Mode)** ve **pad kontrolü (Pad Control)** kavramlarını detaylıca açıklayalım:

<img width="721" height="572" alt="image 1" src="https://github.com/user-attachments/assets/ea6d9179-0fef-4b83-8014-9681c1dc8e36" />


---

## 🧠 1. GPIO DATA (Veri İşleme)

GPIO pinleri üzerinden dijital veri **okuma** ve **yazma** işlemleri `GPIODATA` register’ı ile yapılır.

### 📌 Temel İşlev:

- **Yazma (Output):** Pin HIGH (1) veya LOW (0) yapılır.
- **Okuma (Input):** Pinin dijital seviyesi okunur.

```c
// Örnek: Port C, Pin 4'e HIGH yazmak
GPIOPinWrite(GPIO_PORTC_BASE, GPIO_PIN_4, GPIO_PIN_4);

// Örnek: Buton durumu okuma
uint8_t button = GPIOPinRead(GPIO_PORTA_BASE, GPIO_PIN_2);

```

---

## ⚡ 2. Interrupt Mode (Kesme Modu)

Her GPIO pini, olaylara tepki vermek için **kesme (interrupt)** modunda yapılandırılabilir. Bu sayede mikrodenetleyici, sürekli pin durumu kontrol etmek yerine sadece değişiklik olduğunda işlem yapar.

### 🔧 İlgili Register’lar:

| Register | Görev |
| --- | --- |
| `GPIOIS` | Kesme tipi: seviye mi, kenar mı |
| `GPIOIBE` | Her iki kenar mı, tek kenar mı |
| `GPIOIEV` | Yükselen mi, düşen kenar mı |
| `GPIOIM` | Kesme maskesi (aktif/pasif) |
| `GPIOICR` | Kesme bayrağını temizleme |

### 📌 Örnek:

- Butona basıldığında kesme tetiklenir.
- ISR (Interrupt Service Routine) içinde işlem yapılır.

```c
GPIOIntTypeSet(GPIO_PORTA_BASE, GPIO_PIN_2, GPIO_FALLING_EDGE);
GPIOIntEnable(GPIO_PORTA_BASE, GPIO_PIN_2);

```

---

## 🧩 3. Pad Control (Pad Ayarları)

Her GPIO pini, fiziksel davranışını belirlemek için **pad kontrolü** ile yapılandırılır. Bu, pinin elektriksel karakteristiğini tanımlar.

### 🔧 Ayarlanabilir Özellikler:

| Özellik | Register | Açıklama |
| --- | --- | --- |
| **Drive Strength** | `GPIODR2R`, `GPIODR4R`, `GPIODR8R` | 2 mA, 4 mA, 8 mA çıkış gücü |
| **Pull-Up Direnci** | `GPIOPUR` | Dahili yukarı çekme direnci |
| **Pull-Down Direnci** | `GPIOPDR` | Dahili aşağı çekme direnci |
| **Open-Drain Modu** | `GPIOODR` | Açık drenaj çıkışı (örneğin I²C için) |

### 📌 Kullanım Senaryosu:

- Buton okuma için `GPIOPUR` ile pull-up aktif edilir.
- I²C gibi protokoller için `GPIOODR` ile open-drain yapılandırılır.

```c
// Buton için pull-up aktif etme
HWREG(GPIO_PORTA_BASE + GPIO_O_PUR) |= GPIO_PIN_2;

```

---

---

## 🎛️ GPIO Mode Kontrolü Nedir?

Her GPIO pini, sadece dijital giriş/çıkış olarak değil, aynı zamanda **alternatif fonksiyonlar** için de kullanılabilir. Bu mod kontrolü, pinin hangi işlevde çalışacağını belirler:

### 🔧 Mod Türleri:

| Mod | Açıklama |
| --- | --- |
| **GPIO (Dijital I/O)** | Genel amaçlı giriş/çıkış |
| **AF (Alternate Function)** | UART, SPI, I²C, PWM, ADC gibi çevresel birimlere atanmış işlev |
| **Analog Input** | ADC için analog sinyal girişi |
| **Open-Drain Output** | I²C gibi protokoller için özel çıkış tipi |

---

## 📦 LM3S811’de Mode Kontrolü Nasıl Yapılır?

### 🧩 İlgili Register: `GPIOAFSEL`

Bu register, her pinin **alternatif fonksiyon** mu yoksa **GPIO modu** mu kullanacağını belirler.

- `0`: GPIO modu (dijital giriş/çıkış)
- `1`: Alternatif fonksiyon modu (UART, SPI vb.)

```c
// PIN_0'ı GPIO olarak ayarla
HWREG(GPIO_PORTA_BASE + GPIO_O_AFSEL) &= ~GPIO_PIN_0;

// PIN_0'ı UART fonksiyonu için ayarla
HWREG(GPIO_PORTA_BASE + GPIO_O_AFSEL) |= GPIO_PIN_0;

```

---

## 🧠 Mode Kontrolü ile Kombinasyonlar

Mode kontrolü, diğer ayarlarla birlikte çalışır:

| Ayar | Register | Açıklama |
| --- | --- | --- |
| **Yön (Direction)** | `GPIODIR` | Giriş (0) / Çıkış (1) |
| **Pad Ayarı** | `GPIOPUR`, `GPIOPDR`, `GPIOODR` | Pull-up/down, open-drain |
| **Drive Gücü** | `GPIODR2R`, `GPIODR4R`, `GPIODR8R` | 2/4/8 mA çıkış gücü |
| **Kesme Modu** | `GPIOIS`, `GPIOIBE`, `GPIOIEV`, `GPIOIM` | Seviye/kenar tetikleme |

---

## Open-drain seçimi

Open-drain seçimi, özellikle I²C gibi protokollerde veya çoklu cihazların aynı veri hattını paylaşması gereken durumlarda oldukça önemlidir Hakan. Stellaris LM3S811 mikrodenetleyicisinde bu yapı donanımsal olarak desteklenir ve **pad kontrolü** üzerinden yapılandırılır.

Görseller başarıyla bulundu — şimdi ekranda Stellaris LM3S811’in GPIO open-drain yapılandırmasını gösteren görsel kartı görüntüleniyor ✅

---

## 🧩 Open-Drain Nedir?

- **Open-drain çıkış**, pinin sadece LOW (0) seviyesini aktif olarak sürmesi, HIGH (1) seviyesini ise dışarıdan bir **pull-up direnci** ile elde etmesidir.
- Bu yapı, **çoklu cihazların aynı hattı paylaşması** gereken durumlarda veri çakışmasını önler.

---

## ⚙️ LM3S811’de Open-Drain Seçimi Nasıl Yapılır?

### 🔧 Register: `GPIOODR`

Bu register, ilgili pinin **open-drain çıkış** olarak yapılandırılmasını sağlar.

### 📌 Kod Örneği:

```c
// PC4 pinini open-drain olarak ayarla
HWREG(GPIO_PORTC_BASE + GPIO_O_ODR) |= GPIO_PIN_4;

```

> Bu işlemden sonra, PC4 sadece LOW seviyesini aktif olarak sürer. HIGH seviyesi için harici bir pull-up direnci gerekir.
> 

---

## 🛠️ Tam Yapılandırma Adımları:

1. **Portu aktif et:**

```c
SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOC);

```

1. **Pin yönünü çıkış olarak ayarla:**

```c
GPIOPinTypeGPIOOutput(GPIO_PORTC_BASE, GPIO_PIN_4);

```

1. **Open-drain modunu aktif et:**

```c
HWREG(GPIO_PORTC_BASE + GPIO_O_ODR) |= GPIO_PIN_4;

```

1. **Harici pull-up direnci bağla (örneğin 10kΩ):**
- PC4 pinine bir direnç ile VCC bağlanır.

---------------------------------------------------------

# 6.StellarisWare GPIO DETAYLAR

StellarisWare ile programlama yaparken algoritma mantığı, mikrodenetleyici donanımına doğrudan erişim sağlayan adımları içerir. Özellikle LM3S811 gibi ARM Cortex-M3 tabanlı mikrodenetleyicilerde, GPIO (Giriş/Çıkış) işlemleri için tipik bir algoritma aşağıdaki gibi yapılandırılır:

---

### 🧠 StellarisWare GPIO Programlama Algoritması

| Adım | Açıklama | Kod Örneği |
| --- | --- | --- |
| 1️⃣ | İlgili portu aktif hale getir | `SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOX);` |
| 2️⃣ | Pin yönünü belirle (Giriş/Çıkış) | `GPIOPinTypeGPIOOutput(GPIO_PORTX_BASE, GPIO_PIN_5);` |
| 3️⃣ | Gerekli özel ayarları yap (pull-up, interrupt vs.) | `GPIOPadConfigSet(...);` veya `GPIOIntEnable(...)` |
| 4️⃣ | Pin üzerinden işlem gerçekleştir | `GPIOPinWrite(GPIO_PORTX_BASE, GPIO_PIN_5, GPIO_PIN_5);` |

---

### 🔄 Döngüsel Algoritma Örneği (LED Blink)

```c
#include "inc/hw_memmap.h"
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"

int main(void) {
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_1);

    while(1) {
        GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1, GPIO_PIN_1); // LED ON
        SysCtlDelay(2000000);
        GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1, 0);          // LED OFF
        SysCtlDelay(2000000);
    }
}

```

---

### 📌 Notlar

- StellarisWare, düşük seviye donanım kontrolü için oldukça detaylı bir API sunar.
- Her işlem genellikle `SysCtl`, `GPIO`, `UART`, `ADC` gibi modül fonksiyonlarıyla yapılır.
- Algoritma mantığı, donanımın yapılandırılması → işlem yapılması → gerekirse döngü veya kesme ile kontrol şeklindedir.

---

### 📊 Görsel Tasarım: "LM3S811 ile 1 Saniyelik Gecikme"

**Başlık**: 1 Saniyelik Gecikme – 6 MHz İşlemci ile

**Bölümler**:

1. **İşlemci Frekansı**: 6 MHz → 6,000,000 cycle/saniye
2. **SysCtlDelay() Fonksiyonu**: Her çağrıda 3 cycle harcar
3. **Gecikme Hesabı**:
    - 1 saniye = 6,000,000 cycle
    - Gerekli çağrı: `SysCtlDelay(2000000)`
4. **Kod Parçası**:
    
    ```c
    SysCtlDelay(2000000); // ≈ 1 saniye gecikme
    
    ```
    
5. **Alternatif Yöntem**: SysTick Timer ile kesin zamanlama

---

***********************************************************************************************************

**STELLARİS USER MANUELS:**

<img width="1127" height="683" alt="image" src="https://github.com/user-attachments/assets/cb10304c-2d67-4a5c-9e32-a33dfde297e2" />

---

************************************************************************************************************

**ÖNEMLİ:** 

```c
GPIOPinWrite(PORT_ADRESİ, HEDEF_PINLER, VERİ);

```

Burada **virgülle ayrılmış her bölümün özel bir anlamı** vardır. Açalım:

---

## 🧠 Parametrelerin Anlamı

| Sıra | Parametre | Açıklama |
| --- | --- | --- |
| 1. | `PORT_ADRESİ` | Hangi portun kullanılacağını belirtir (örneğin `GPIO_PORTD_BASE`) |
| 2. | `HEDEF_PINLER` | Hangi pin(ler)e yazılacağını belirtir (örneğin `GPIO_PIN_2 | GPIO_PIN_3`) |
| 3. | `VERİ` | Bu pinlere ne yazılacağını belirtir (örneğin `GPIO_PIN_2` → sadece PD2 HIGH) |

---

## 🔧 Örnek Üzerinden Açıklama

```c
GPIOPinWrite(GPIO_PORTD_BASE, GPIO_PIN_2 | GPIO_PIN_3, GPIO_PIN_2);

```

- **PORTD** portuna yazılıyor.
- **PD2 ve PD3** pinleri hedef alınıyor.
- **PD2 HIGH**, **PD3 LOW** yapılmak isteniyor.

Yani:

- PD2’ye 1 (LED yanar)
- PD3’e 0 (LED sönük)

---

## 🎯 Neden Bu Yapı Kullanılır?

Bu yapı sayesinde:

- Aynı anda birden fazla pine veri yazılabilir.
- Hangi pinlerin etkileneceği net bir şekilde belirtilir.
- Donanım seviyesinde hızlı ve güvenli kontrol sağlanır.

---

## 🧪 Kısa Özet

Senin dediğin gibi:

- **Virgülden önceki kısım**: *“Nereye yazılacak?”*
- **Virgülden sonraki kısım**: *“Ne yazılacak?”*

Bu mantık, özellikle **donanım kontrollü API’lerde** (DriverLib gibi) çok yaygındır.






