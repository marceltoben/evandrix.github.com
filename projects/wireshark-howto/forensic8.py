#!/opt/local/bin/python2.5
# Steeve Barbeau (@steevebarbeau)
# http://steeve-barbeau.blogspot.com

from scapy.all import *
import os, base64

dot11 = {"Dot11":Dot11,
    "Dot11ATIM":Dot11ATIM,
    "Dot11AssoReq":Dot11AssoReq,
    "Dot11AssoResp":Dot11AssoResp,
    "Dot11Auth":Dot11Auth,
    "Dot11Beacon":Dot11Beacon,
    "Dot11Deauth":Dot11Deauth,
    "Dot11Disas":Dot11Disas,
    "Dot11Elt":Dot11Elt,
    "Dot11ProbeReq":Dot11ProbeReq,
    "Dot11ProbeResp":Dot11ProbeResp,
    "Dot11QoS":Dot11QoS,
    "Dot11ReassoReq":Dot11ReassoReq,
    "Dot11ReassoResp":Dot11ReassoResp,
    "Dot11WEP":Dot11WEP}

if not os.path.exists('./Dot11'):
    print "Extractions from evidence08.pcap file"
    pcapFile=rdpcap("./evidence08.pcap")
    os.mkdir("./Dot11")
    def extractDot11(pcap, t, s):
        filteredFile=pcapFile.filter(lambda(r): t in r)
        a="./Dot11/"+s+".pcap"
        if len(filteredFile):
            wrpcap(a,filteredFile)
        print s + " " + str(len(filteredFile))

    for s,t in dot11.items(): 
        extractDot11(pcapFile,t,s)

def question1():
    print "Question 1"
    file=rdpcap("./Dot11/Dot11Beacon.pcap")
    print "a. The SSID of his access point? ", file[0].info
    print "b. The BSSID of his access point?", file[0].addr2
    
def question2():
    print "Question 2"
    print "2) How long is the packet capture, from beginning to end (in SECONDS - please round to the nearest full second)?", round(413.576954) , " Wireshark used to answer"

def bin(s):
    return str(s) if s<=1 else bin(s>>1) + str(s&1)
       
def question3():
    print "Question 3"
    i=0
    file=rdpcap("./Dot11/Dot11WEP.pcap")
    for p in file:
        if bin(p.FCfield)[-7] == '1':
            i+=1
        else:
            print  bin(p.FCfield)[-7] 

    print "3) How many WEP-encrypted data frames are there total in the packet capture?", i

def question4():
    print "Question 4"
    ivsList=[]
    file=rdpcap("./Dot11/Dot11WEP.pcap")
    for packet in file:
        if (packet.iv not in ivsList) and packet.addr2 == '00:23:69:61:00:d0': #addr2==bssid
            ivsList.append(packet.iv)
    print "4) How many *unique* WEP initialization vectors (IVs) are there TOTAL in the packet capture relating to Joe's access point?", len(ivsList)

def question5():
    print "Question 5"
    print "5) What was the MAC address of the station executing the Layer 2 attacks? de:ad:be:ef:13:37" 

def question6a():
    print "Question 6"
    print "6) How many *unique* IVs were generated (relating to Joe's access point):"
    ivsList=[]
    file=rdpcap("./Dot11/Dot11WEP.pcap")
    for packet in file:
        if (packet.iv not in ivsList) and packet.addr2 == '00:23:69:61:00:d0' and packet.addr3 == 'de:ad:be:ef:13:37' :
            ivsList.append(packet.iv)
    print "a. By the attacker station?", len(ivsList)

def question6b():
    ivsList={}
    addr=[]
    file=rdpcap("./Dot11/Dot11WEP.pcap")
    for packet in file:
        if (packet.iv not in ivsList) and packet.addr2 == '00:23:69:61:00:d0' and packet.addr3 != 'de:ad:be:ef:13:37' :
            ivsList[packet.iv] = packet.addr3
    print "b. By all *other* stations combined?", len(ivsList)
    for a in ivsList.values():
        if a not in addr:
            addr.append(a)
    print "Other stations are : ", addr

def question7():
    print "Question 7"
    print "7) What was the WEP key of Joe's WAP?"
    print "Solution :"  
    print "ivstools --convert evidence08.pcap extract.ivs" 
    print "aircrack-ng extract.iv"
    print "We obtain the WEP key : D0:E5:9E:B9:04"

def question8and9():
    print "Question 8"
    file=rdpcap("./Dot11/Dot11WEP.pcap")
    conf.wepkey="\xD0\xE5\x9E\xB9\x04"
    decipher = Dot11PacketList(file).toEthernet()
    b=filter(lambda r: (TCP in r) and (Raw in r), decipher)
    for p in b:
        if p.dport == 80 and p[IP].src == '192.168.1.109' and str(p.show).find('POST')>=0:
            print p.show
    print "8) What were the administrative username and password of the targeted wireless access point?"
    print "The previous found packet show an interesting thing : Authorization: Basic YWRtaW46YWRtaW4=. When decoded, we have : ", base64.b64decode("YWRtaW46YWRtaW4=")
    print "Username : admin & Password : admin"
    print "Question 9"
    print "9) What was the WAP administrative passphrase changed to?"
    print "In the same packet, we can find this : PassPhrase=hahp0wnedJ00"

if __name__ == "__main__":
    question1()
    question2()
    question3()
    question4()
    question5()
    question6a()
    question6b()
    question7()
    question8and9()
