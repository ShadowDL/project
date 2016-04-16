#!/usr/bin/env python


import urllib
import time
import json

print("press q! to exit...")

while True:
	url = 'http://fanyi.youdao.com/translate?smartresult=dict&smartresult=rule&smartresult=ugc&sessionFrom=https://www.baidu.com/link'
	content = raw_input("input content:")
	if content == 'q!':
		break
	data = {}
	data['type'] = 'AUTO'
	data['i'] = content
	data['doctype'] = 'json'
	data['xmlVersion'] = '1.8'
	data['keyfrom'] = 'fanyi.web'
	data['ue'] = 'UTF-8'
	data['typoResult'] = 'true'

	data = urllib.urlencode(data).encode("utf-8")
	
	response = urllib.urlopen(url,data)
	html = response.read().decode('utf-8')
	target = json.loads(html)
	target = target['translateResult'][0][0]['tgt']
	print("translation result:%s" % target)
	
	time.sleep(1)
