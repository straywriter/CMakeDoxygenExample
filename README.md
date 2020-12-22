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





# doxygen 配置文件

```
ABBREVIATE_BRIEF                //简短摘要

ALIASES                                //别名

ALLEXTERNALS                      //所有外部文档

ALPHABETICAL_INDEX              //字母顺序索引

ALWAYS_DETAILED_SEC            //详细描述部分

BINARY_TOC                        //二进制操作

BRIEF_MEMBER_DESC              //简短的成员描述

CALL_GRAPH                       //调用到的图

CASE_SENSE_NAMES              //检测的范例的名字

CHM_FILE                          //CHM格式文件

CLASS_DIAGRAMS                 //类-表

CLASS_GRAPH                         //类-图

COLLABORATION_GRAPH          //相互调用关系图

COLS_IN_ALPHA_INDEX           //以列形式显示的字母顺序的索引

COMPACT_LATEX                  //压缩的LATEX文档

COMPACT_RTF                    //压缩的RTF文档

CREATE_SUBDIRS                //创建一个"子目录"

DETAILS_AT_TOP                 //文档的详细头部

DIRECTORY_GRAPH                  //目录图

DISABLE_INDEX                      //禁用INDEX

DISTRIBUTE_GROUP_DOC       //禁用文档成组显示

DOT_IMAGE_FORMAT            //点阵图形

DOT_MULTI_TARGETS           //多个DOT目标

DOT_PATH                            //DOT路径设置

DOT_TRANSPARENT                //DOT转换设置

DOTFILE_DIRS                      //DOTFILE 列表显示

ENABLE_PREPROCESSING      //允许"预处理"指令

ENUM_VALUES_PER_LINE      //每行的枚举值

ENABLED_SECTIONS           //允许分段显示

EXAMPLE_PATH                     //例子路径

EXAMPLE_PATTERNS            //例子用的文件格式（*.cpp, *.h , *.java等）

EXAMPLE_RECURSIVE             //例子递归

EXCLUDE                             //可执行文件

EXCLUDE_PATTERNS           //可执行文件格式（*.exe, *.dll等）

EXCLUDE_SYMLINKS              //可执行的SYMLINKS

EXPAND_AS_DEFINED             //规定的扩展

EXPAND_ONLY_PREDEF        //预定义扩展

EXTERNAL_GROUPS              //使用到的外部的文件

EXTRA_PACKAGES                //使用到的外部插件包

EXTRACT_ALL                      //提取所有

EXTRACT_LOCAL_CLASSES      //提取所有本地类

EXTRACT_LOCAL_METHODS   //提取所有本地方法

EXTRACT_PRIVATE                 //提取所有private

EXTRACT_STATIC                  //提取所有static

FILE_PATTERNS                     //文件路径

FILE_VERSION_FILTER            //文件版本控制

FILTER_PATTERNS                  //控制格式（主版本：第1次版本：第2次版本号）

FILTER_SOURCE_FILES           //原文件的版本控制

FULL_PATH_NAMES               //全路径名

GENERATE_AUTOGEN_DEF      //生成自动定义文件形式

GENERATE_BUGLIST              //生成BUG列表

GENERATE_CHI                     //生成"希腊字母"

GENERATE_DEPRECIATEDLIST //生成"评估"列表

GENERATE_HTML             //生成HTML

GENERATE_HTMLHELP            //生成HTMLHELP

GENERATE_LATEX                 //生成LATEX

GENERATE_LEGEND                //生成图例

GENERATE_MAN                    //生成MAN文件

GENERATE_PERLMOD        //生成Perl脚本

GENERATE_RTF                     //生成RTF

GENERATE_TAGFILE               //生成标志文件

GENERATE_TESTLIST       //生成TESTLIST

GENERATE_TODOLIST            //生成TODOLIST

GENERATE_TREEVIEW          //生成树状视图显示

GENERATE_XML                    //生成XML

GRAPHICAL_HIERARCHY          //继承图表

GROUP_GRAPHS                    //组-图

HAVE_DOT                          //隐藏DOT

HHC_LOCATION                    //隐藏位置

HIDE_FRIEND_COMPOUNDS  //隐藏"复合的"友员类型

HIDE_IN_BODY_DOCS            //隐藏文档的主体

HIDE_SCOPE_NAMES        //隐藏"作用域"名

HIDE_UNDOC_CLASSES          //隐藏"未归档"的所有CLASS

HIDE_UNDOC_MEMBERS         //隐藏"未归档"的所有的成员

HIDE_UNDOC_RELATIONS //隐藏"未归档"的关系

HTML_ALIGN_MEMBERS          //HTML文档中成员对齐方式

HTML_FOOTER                     //HTML脚注设置

HTML_HEADER                      //HTML头部设置

HTML_OUTPUT                     //HTML输出设置

HTML_STYLESHEET               //HTML样式设置

IGNORE_PREFIX                    //忽略哪些前缀

IMAGE_PATH                  //图片的路径设置

INCLUDE_GRAPH              //包含-图

INCLUDE_PATH                     //头文件包含的路径

INHERIT_DOCS                     //文档的继承关系

INLINE_INFO                  //内联信息

INLINE_INHERITED_MEMB   //通过"继承"得到的内联成员

INLINE_SOURCES                  //内联部分的源代码

INPUT                                 //输入设置

INPUT_FILTER                      //能够接受的输入文件的扩展名格式设置（重要）

INTERNAL_DOCS             //内部文档

JAVADOC_AUTOBRIEF            //JAVADOC工具生成的文档的"自动摘要"

LATEX_BATCHMODE               //LATEX匹配方式

LATEX_CMD_NAME                //LATEX 命令名

LATEX_HEADER                     //LATEX 头部

LATEX_HIDE_INDICES            //LATEX内部隐藏的包含

LATEX_OUTPUT                    //LATEX输出

MACRO_EXPANSION              //宏展开设置（重要）

MAKEINDEX_CMD_NAME         //MAKEINDEX命令索引

MAN_EXTENSION                  //MAN扩展

MAN_LINKS                          //MAN 链接设置

MAN_OUTPUT                      //MAN输出设置

MAX_DOT_GRAPH_DEPTH //DOT图的最大深度

MAX_DOT_GRAPH_HEIGHT      //DOT图的最大高度

MAX_DOT_GRAPH_WIDTH       //DOT图的最大宽度

MAX_INITIALIZER_LINES   //最大初始化行

MULTILINE_CPP_IS_BRIEF       //多 个CPP文件的简短描述

OPTIMIZE_OUTPUT_FOR_C     //对C采用的优化设置

OPTIMIZE_OUTPUT_JAVA //对JAVA采用的优化设置

OUTPUT_DIRECTORY        //输出路径设置（重要）

OUTPUT_LANGUAGE              //输出语言设置（重要）

PAPER_TYPE                        //纸张类型

PDF_HYPERLINKS                  //PDF格式超链接设置（重要）

PERL_PATH                          //perl路径设置

PERLMOD_LATEX             //perlmod LATEX

PERLMOD_PRETTY                 // perlmod PRETTY（漂亮/相当）

PERLMOD_MAKEVAR_PREFIX  //perlmod MAKE文件版本 PREFIX

PREDEFINED                    //预先定义（重要）

PROJECT_NAME                     //工程名（重要）

PROJECT_NUMBER                  //工程的组成成员（重要）

QUIET                                 //静态量设置（重要）

RECURSIVE                           //递归和循环

REFERENCED_BY_RELATION   //交叉参考（重要）

REFERENCES_RELATION           //交叉参考的关系

REPEAT_BRIEF                       //重新设置"简短说明"为打开状态

RTF_EXTENSIONS_FILE           //RTF展开文件

RTF_HYPERLINKS                   //RTF超链接

RTF_OUTPUT                        //RTF输出设置

RTF_STYLESHEET_FILE           //RTF样式文件

SEARCH_INCLUDES                 //搜索时需要包含什么（重要）

SEARCHENGINE                      //搜索引擎设定（重要）

SHORT_NAMES                      //使短文件名生效

SHOW_DIRECTORIES         //显示目录

SHOW_INCLUDE_FILES            //显示包含文件（一般NO，否则太大）

SHOW_USED_FILES                //显示被用到的文件（一般YES）

SKIP_FUNCTION_MACROS        //跳过函数中的宏（重要），菜鸟最好别跳

SORT_BRIEF_DOCS                //文档的简短摘要

SORT_MEMBER_DOCS             //成员的简短描述

SOURCE_BROWSER                 //原文件浏览路径

STRIP_CODE_COMMENTS  //排除哪些条码形式注释（重要）

STRIP_FROM_INC_PATH          //排除哪些头文件包含的注释（重要）

STRIP_FROM_PATH                //排除哪些条码路径设置

SUBGROUPING                       //子组设置（重要）

TAB_SIZE                             //TAB符SIZE设置（重要）

TAGFILES                             //标志文件

TEMPLATE_RELATIONS            //模板关系设置（重要）

TOC_EXPAND                        //TOC扩展

TREEVIEW_WIDTH                 //树状图显示的宽度设置（重要）

UML_LOOK                            //UML外观设置（重要）

USE_WINDOWS_ENCODING   //使用windows系统的编码形式（重要）

VERBATIM_HEADERS         //VERBATIM头部（头文件）

WARN_FORMAT                     //警告格式指定（重要）

WARN_IF_DOC_ERROR            //如果文档出错则显示警告

WARN_IF_UNDOCUMENTED   //如果是未归档文件则显示警告

WARN_LOGFILE                     //警告日志文件设置

WARN_NO_PARAMDOC            //无参数文档警告形式设定

WARNINGS                           //警告设置（重要）

XML_DTD                             //XML文件类型定义（重要）

XML_OUTPUT                        //XML输出设置（重要）

XML_PROGRAMLISTING           //XML程序列表（重要）

XML_SCHEMA                        //XML模式设置（重要）
```



