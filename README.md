# cmake doxygen example



# 简介

使用doxygen为你的C, Objective-C, C#, PHP, Java, Python, IDL (Corba, Microsoft, and UNO/OpenOffice flavors), Fortran, VHDL，D 等语言项目自动化生成文档。



# 安装

## 依赖软件

- doxygen

  [官网](https://www.doxygen.nl/)

- graphviz 

  graphviz 是一个由AT&T实验室启动的开源工具包，用于绘制DOT语言脚本描述的图形。Doxygen 使用 graphviz 自动生成类之间和文件之间的调用关系图，如不需要此功能可不安装该工具包。

  [官网](https://graphviz.org/)

  ```
  doc -c
  ```

  

- latex

  

- windows 通过scoop安装

```
scoop install doxygen graphviz
```

## 使用

克隆本仓库到你的工程目录下，或者通过releace下载，解压到你的工程目录。

命令行下使用cmake 生成目标：

```


```



# 生成中文文档

修改doxygen.in 中的`OUTPUT_LANGUAGE` 为：

```
OUTPUT_LANGUAGE = Chinese
```



# PDF

在生成的`latex`目录下运行`make.bat`，前提是你安装latex

# PDF 中文支持

首先要更改语言属性`OUTPUT_LANGUAGE` 为`Chinese`

> 使用docxygen生成文档，注意选上 GENERATE_LATEX 、LATEX_OUTPUT、USE_PDFLATEX（最好还选上 PDF_HYPERLINKS）


用文本编辑器打开docxygen生成的latex目录中的refman.tex。找到`\begin{CJK}{UTF8}{min}` 这一行，将其修改为

```
\begin{CJK}{UTF8}{gbsn} 
```

 

# CHM

如果你希望你的Doxygen自动生成chm，那么请下载HTML Help Workshop，我们将要使用当中的hcc.exe文件以及相关dll。 下载地址： [site](http://msdn.microsoft.com/en-us/library/ms669985.aspx)









