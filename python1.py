from selenium import webdriver

url = 'https://sdindustrial.com.mx/blog/sensores/'
driver = webdriver.Chrome()  # Necesitarás el controlador del navegador correspondiente

driver.get(url)
title = driver.title
paragraphs = driver.find_elements_by_tag_name('p')

for paragraph in paragraphs:
    print(paragraph.text)

driver.quit()
