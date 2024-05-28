import json

def main():
    folder = "/home/matt/바탕화면/kuIotBigdataclass/python/chap15/json_example.json"
    with open(folder+"json_example.json", "r", encoding="utf8") as f:
        contents = f.read()
        json_data = json.loads(contents)
    print(json_data)
    
    for i in json_data['emplayee']:
        print(i['firstName'], end=" ")
        print(i['LastName'])

        

if __name__ == '__main__':
    main()