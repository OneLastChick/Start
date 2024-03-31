from time import sleep
from selenium import webdriver

driverfile_path = r'D:\Python311\Scripts\msedgedriver.exe'
one_driver = webdriver.Edge()

one_driver.get(r'https://www.bilibili.com/')
one_driver.implicitly_wait(10)

search_box = one_driver.find_element_by_xpath("//input[@type='text'][@autocomplete='off']")
search_box.send_keys('日本核废水')

search_button = one_driver.find_element_by_css_selector("[type='button']")
search_button.click()

sleep(5)
one_driver.quit()
