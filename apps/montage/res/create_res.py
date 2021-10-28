
for host in range(1, 33, 1):
    with open("res_"+str(host), 'w') as f:
        msg = "RS 0: { host: " + str(host) + " , cpu: 0 , mem: 0-8151 }\n"
        f.write(msg)
