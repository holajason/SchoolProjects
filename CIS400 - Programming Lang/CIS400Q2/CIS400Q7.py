import urllib.request
import urllib.parse
import re
from bs4 import BeautifulSoup

"""
def striphtml(data):
    p = re.compile(r'<.*?>')
    print( p.sub('', data))
"""
page_list = []
page_list2 = []
href = []
link_list = []

inputURL = input('Enter a URL: \n')
req = urllib.request.Request(inputURL)

try:
    local_filename, headers = urllib.request.urlretrieve(inputURL)
except:
     print("Unable to open URL")


html = open(local_filename, encoding="utf-8")
for line in html:
    page_list.append(line)

for k in range(len(page_list)):
    if '<a href' in page_list[k]:
        link_line = k
        href_start = page_list[link_line].find('<')
        href_end = page_list[link_line].find('" >')
        link_list.append(page_list[link_line][href_start+ 9 : href_end])

for i in range(len(link_list)):
    if 'http' in link_list[i]:
        LTitle_start = link_list[i].find('http')
        LTitle_end = link_list[i].find('>')
        href.append(link_list[i][LTitle_start:LTitle_end - 1])
 
def Title(list2):
    for k in range(len(list2)):
        if '<title' in list2[k]:
            title_start = list2[k].find('<title')
            title_end = list2[k].find('</title>')
            print("Title:", (list2[k][title_start + 7:title_end]))
"""
for j in range(len(href)):
    try:
        print(link_list[j])
        local_filename, headers = urllib.request.urlretrieve(href[j])
        html2 = open(local_filename, encoding="utf-8")
        list2 = []

        for line in html2:
            list2.append(line)
        Title(list2)

    except:
        continue

for script in soup(["script", "style"]):
    script.extract()
txt = soup.get_text()

lines = (line.strip()
for line in txt.splitlines())

# break multi-headlines into a line each
chunks = (phrase.strip()
for line in lines for phrase in line.split("  "))
# drop blank lines
txt = '\n'.join(chunk for chunk in chunks if chunk)
list.append(txt)

"""
for i in link_list:
    x = i.split()
    print(x)




#http://www.somesite.com/details.pl?urn=2344
