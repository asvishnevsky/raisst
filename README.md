Abstract

This study investigates the potential of engaging visually impaired individuals in Information Security field by examining the accessibility of existing information security tools. Here are published materials and source code of tools used in paper "Enhancing Information Security Tool Accessibility for Visually Impaired Users through Auditory Interfaces". 

Requirements

1. NVDA screen reader
2. Python 3.10+ installed. 
3. PostgreSQL
4. Clang or GCC compiler
5. Git
6. (For local usage) Windows Command line or Linux Terminal  
7. (For remote usage) Web server to upload JavaScript files

The solution was tested on VDS with Ubuntu 22.04.

Dependencies 

1. Radare2 disassembler from Github: https://github.com/radareorg/radare2
2. NodeJsScan tool from Github: https://github.com/ajinabraham/nodejsscan.git
3. Dataset malicious_phish.csv for ML task from Kaggle: https://www.kaggle.com/code/hamzamanssor/detection-malicious-url-using-ml-models
4. Python packages: scikit-learn pandas seaborn colorama tld


Guidelines

Follow steps listed in task descriptions in each of tasks subfolder. 

Demo

Open link in any web-browser with JavaScript support: https://sonified.vision/disasm.htm 
or upload files from web_demo to your web server 
then try commands listed in task1 description in web interface.