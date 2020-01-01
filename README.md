# Dataconverter

# Introduce

[![My Blog](https://csdnimg.cn/cdn/content-toolbar/csdn-logo_.png?v=20190924.1)](https://blog.csdn.net/yinggegege/article/details/87895893)

[My CSDN Blog] 

[![Build Status](https://github.com/yinggegit/DataConverter/)](https://github.com/yinggegit/DataConverter/blob/master/DataConverter.exe)


![Dataconverter](https://img-blog.csdnimg.cn/20191231204130243.BMP?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3lpbmdnZWdlZ2U=,size_16,color_FFFFFF,t_70 "Dataconverter")

**Dataconverter  是一款强大的数据处理和算法工具**

  - 满足C、Java ，Python程序员的编程中常见的数据处理需求，有效提升Coding效率。
  - 基于可靠算法套件，支持金融，网络安全，信息安全等常见密码学算法，特别支持中国国密算法SM2，SM3，SM4.
  - 精心调整过界面布局，支持多种主题和字体，支持多种分辨率显示，视觉体验佳。
-----
Dataconverter is a powerful data processing and algorithmic tool 
  - Meet the common data processing needs of C, Java and python programmers in daily programming, and effectively improve work efficiency.
  - Based on reliable algorithm suite, support common cryptography algorithms such as finance, network security and information security, especially support China's national security algorithms SM2, SM3 and SM4.
  - The layout of the interface has been carefully adjusted to support more than ten themes and fonts, support a variety of resolutions, and have a good visual experience.

# Features
## 1.DATA Format  数据格式化
  - 支持 English/ 中文 / 符号极简 3种语言界面。
  - 换行对齐支持自定义字节数。
  - 增加/去除空格，增加/去除0x
  - 格式化成\x数据串
  - 空格转‘，’
  - 计算数据串的累计和异或，异或分单字节异或分段异或，分段异或支持8B和16B。
  - 字符串 转 Hex 支持（ANSI， UTF8， UTF16 字符串转 HEX）
  - Hex 转 字符串，（ HEX 转 ANSI， UTF8， UTF16字符串）
  - Bin 文件转 Hex
  - 大小写转换
  - 十六进制 转 二进制
  - 十六进制 转 十进制
  - 十进制  转 十六进制
  - URL编码/解码  （UTF8）
  - CRC32 计算  （Hex ， String ANSI， UTF8， UTF16）（支持 CRC32 MPEG2 格式）
  - CRC16 计算  （支持 Hex ， String ANSI， UTF8， UTF16）  （支持 CITT Kermit:/     CITT FFFF:/CITT 1D0F:/ X25:/Modbus:/IBM: /MAXIM: /USB:/DNP:多种格式）
  - SHA1, SHA256,SHA384,SHA512,MD5,RIPEMD160 计算 （支持 Hex ， String ANSI， UTF8， UTF16）
  - Base64编码, 解码（尝试TLV 数据解析，尝试导出公私钥）
  - x.509证书解析， 输出证书的 拥有者 签发者 有效期等信息 和 公私钥 Module  Expone数据。
  - Pub/Prv 解析（PEM  DER 公钥 e m 数据, 私钥 d，e，m，p，q，dp，dq，inv 等数据）
  - 大小端转换（以  字节/ 双字节/四字节/八字节 为单位进行数据转）
  - 支持 转换后的数据保存 txt 文件。
  - 支持 转换后的数据保存 bin 文件。
  - 支持 拖入 扩展名为 txt  bin 数据文件，pem der cert 的x.509格式文件自动识别。
-------
  - English / Chinese / symbol minimalism interfaces are supported.
  - Data Custom byte wrap alignment.
  - Add / remove spaces, add / remove 0x
  - Format as \ x data string
  - Space to ','
  - Calculate the cumulative sum XOR of data string, XOR is divided into single byte XOR and segment XOR, segment XOR supports 8b and 16b.
  - String to hex support (ANSI, utf8, utf16 string to hex)
  - Hex to string, (hex to ANSI, utf8, utf16 string)
  - Bin file to String
  - Hexadecimal to binary
  - Hexadecimal to decimal
  - Decimal to hexadecimal
  - URL encoding / decoding (utf8)
  - CRC32 calculation (Hex, String ANSI, UTF8, UTF16) (support CRC32 MPEG2 format)
  - CRC16 calculation (support Hex, String ANSI, UTF8, UTF16) (support CITT Kermit: / CITT FFFF: / CITT 1d0f: / X25: / MODBUS: / IBM: / Maximum: / USB: / DNP: multiple formats)
  - SHA1, SHA256, SHA384, SHA512, MD5, Bitcoin Ripemd160 calculation (support hex, string ANSI, utf8, utf16)
  - Base64 encoding, decoding (try TLV data parsing, try to export public and private keys)
  - x.509 certificate resolution, output the owner, issuer, validity and other information of the certificate and the public-private key module expone data.
  - Public/Private Key File, Format PEM/DER get N, E, D, M, P, Q, DP, DQ, inv and other data
  - Endian Conversion in bytes/double bytes/four bytes/octet.
  - Support converted data save to a .txt file.
  - Support converted data save to a .bin file.
  - Support dragging data file with extension of .txt or .bin, and automatic recognition of x.509 file from .pem .der .cert.

## 2.Algorithm 算法
  - AES 支持AES128，AES192，AES256 运算，支持ECB，CBC，CFB，OFB，KCV等模式
  - DES 支持DES、TDES128bits, TDES192bits运算，支持ECB，CBC，KCV等模式
  - SM4 支持 ECB、CBC、KCV模式
  - MAC支持 DESMAC、CMAC、HMAC、AES MAC、 SM3-4MAC等
  - 其中 DESMAC 支持 X9.9、X9.19、 EMV、 CUP、 XOR等多种模式
  - CMAC 支持  TDES2Key， TDES3Key， AES128， AES192， AES256等
  - HMAC 支持  SHA1， SHA256， SHA384， SHA512， MD5等
  - AES MAC 支持 ECB 和CUP
  - SM3-4 支持 SM4ECB 和 SM3HAMC
  - RSA (512-8192bits) PKCSV2， PKCSV1， Nopadding填充加解密， 可生成RSAKey， 签名和验签支持多种Hash算法。
  - ECDSA 支持SECP192-512，BP256-512，包括Bitcoin使用的SECP256K1,等数十种主流曲线，主流Hash算法的签名和验签
  - SM2  中国国家密码指定的ECC曲线，标准 加密、解密、签名、验签工具， 加解密同时 C1|C2|C3 和 C1|C3|C2 两种格式。
  - Padding 支持PKCS7，PKCSV1 ，ISO7816-4, X.923, 右边补零，左边补零等填充方式，生成指定字节的填充值
  - Big Number，支持 Add、Dec、Sum、Mul、Div、Mod、Xor、Exp、RSA、Hex->Dec、Dec->Hex等
  -------
  - AES supports AES128, AES192, AES256 bits operation, ECB, CBC, CFB, OFB, KCV etc.
  - Des supports DES, TDES128, 192bits, ECB, CBC, KCV etc.
  - SM4 supports ECB, CBC and KCV modes
  - Mac supports DES MAC, CMAC, HMAC, AES MAC, SM3-4 MAC, etc.
  - Desmac supports X9.9, X9.19, EMV, CUP, XOR etc.
  - CMAC supports TDES2key, TDES3key, AES128, AES192, AES256, etc.
  - HMAC supports SHA1, SHA256, SHA384, SHA512, MD5, etc.
  - AES MAC supports ECB and CUP.
  - SM3-4 supports SM4 ECB MAC and SM3 HAMC.
  - RSA (512-8192bits) PKCSv2, PKCSv1, padding and no-padding encryption and decryption can generate rsa key. Signature and verification support a variety of hash algorithms.
  - ECDSA supports more than ten of common curves include BitCoin used SECP256K1, signature and verification of common used hash algorithm.
  - SM2 is an ECC curve specified by China's National Code Authority use to  encryption, decryption, signature, signature verification tools, encryption and decryption at the same time, C1|C2|C3 and C1|C3|C2 formats.
  - Padding supports filling methods such as PKCS7, PKCSv1, ISO7816-4, X.923 etc.
  - Big number, support add, Dec, sum, Mul, div, mod, XOR, exp, RSA, hex->Dec, Dec->hex, etc.

![Dataconverter](https://img-blog.csdnimg.cn/20191231204211657.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3lpbmdnZWdlZ2U=,size_16,color_FFFFFF,t_70 "Dataconverter")

## 3.Configuration 配置
  - 支持多种主题，总有一款适合你
  - 可选择输入框和按钮的字体
  - 可选择是否输出辅助信息
  - 可选择是否在软件启动时自动获取剪贴板数据
  - 可选择是否调用其他软件是发送数据
  - 可选择是否开启文件扩展名识别对应的操作
  - 可选择是否保存当前使用的密钥数据
  - 可选择是否自动将左侧数据输入框复制到算法输入框
--------
  - There is always one for you to support multiple themes. 
  - Select fonts for input boxes and buttons. 
  - Output auxiliary information. 
  - Automatically get the Clipboard data when the software starts. 
  - Call other software to send data. 
  - Open the file extension to identify the corresponding operation. 
  - Save the currently used key data.
  - Automatically copy the left data input box to the algorithm input box. 

As [John Gruber] writes on the [Markdown site][df1]

This text you see here is *actually* written in Markdown! To get a feel for Markdown's syntax, type some text into the left window and watch the results in the right.

### Plugins Executable Program

DataConverter can use below tools to work properly:

* [HashCalc.exe] - Compute digests, checksums and HMACs for files or Hex string
* [CrytographyLab.exe] - All Algorithm Tools

### Installation

    单文件执行程序，在Win7及以上操作系统下，下载后无需安装即可运行。
    
    Single file execution program, under the operating system above Win7, can run without installation after downloading. 

### Plugins Open Source

| OpenSource | README |
| ------ | ------ |
| Mbedtls | [https://github.com/ARMmbed/mbedtls][PlDb] |
| Mbedtls | [https://github.com/ARMmbed/mbedtls][PlDb] |


### Development

***C++ Builder CX 10***

First:
```sh
$ build app
```

License
----

MIT

**Free Software, Hell Yeah!**

# Donation
## Purpose:
> 开发此程序的目的是为了提升程序员的开发效率，在过去十几年从业生涯里，我迫切需要这样一个开发工具来帮助我提示Coding的效率，在现有工具不满足需求的情况下，不得不开发出DataConverter。某人说过，最了解程序员的可能是另外一个位程序员吧，我爱你们，希望我的付出能给你带来不错的使用体验，同时感谢github提供了一个共享平台和众多优秀的开源软件。
> 如果你愿意支持作者完善此软件，请扫码捐助，并留言。
> 使用愉快，多谢！

> This program is used to improve the development efficiency of programmers, and in the past decade or so of my career, I urgently need such a development tool to help me prompt the efficiency of Coding, and I had to develop the DataConverter when the existing tools did not meet the requirements. I'm afraid the one who understands the programmer best is another programmer, like me. My programmer I love you, hope my efforts will give you a good experience, thanks again to github for a shared platform and many excellent open source software. 
> If you are willing to provide financial assistance to support the author in improving the software, please scan QR code to donation and please leave message!
> Thanks and enjoy it.

## Donation Access：

[![Donation](https://img-blog.csdnimg.cn/20190223201040843.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3lpbmdnZWdlZ2U=,size_16,color_FFFFFF,t_70)](https://blog.csdn.net/yinggegege/article/details/87895893)

[//]: # (These are reference links used in the body of this note and get stripped out when the markdown processor does its job. There is no need to format nicely because it shouldn't be seen. Thanks SO - http://stackoverflow.com/questions/4823468/store-comments-in-markdown-syntax)

   [HashCalc.exe]: <http://www.slavasoft.com/hashcalc/>
   [CrytographyLab.exe]: <http://www.zhangluduo.com/article/d0fe0bbc/>
   [My CSDN Blog]: <https://blog.csdn.net/yinggegege/article/details/8789589>
   [PlDb]: <https://github.com/ARMmbed/mbedtls>
   [PlGh]: <https://github.com/zhangke5959/gmalg>
