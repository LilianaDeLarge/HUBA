id_veb={}
def check_id():
    user_id=1
    while user_id!=0:
        user_id=int(input("Id:"))
        qwest=int(input("Page:"))
        
        if (user_id in id_veb):
            print("Here")
        else:
            id_veb[user_id]=qwest
        print(id_veb)
    f()

def f():
    print("оk")
