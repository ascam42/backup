#!/bin/bash
## auto_network.bash for auto_net in /home/ungaro_l/myscripts
## 
## Made by Luca Ungaro
## Login   <ungaro_l@epitech.net>
## 
## Started on  Tue Dec  8 15:44:51 2015 Luca Ungaro
## Last update Tue Dec  8 16:57:15 2015 Luca Ungaro
##
## Auto-network connector.
## Run as sudo (i.e. put in root's crontab)
## about every 1-10 mins
##

WPA_SUP="/etc/wpa_supplicant/wpa_supplicant.conf"
INTERFACE=$(iw dev | grep Interface | tr ' ' '.' | cut -d'.' -f2)

if [ $# -ge 1] && [ -f $1 ] && [ -r $1 ]
then
    SSIDs=$(cat $1)
else
##
## Put here SSIDs you want to connect to,
## unless they're specified in a file passed as parameter.
## then corresponding type, key & username if required
##
SSIDs="iit-wifi:WPA2_ENTERPRISE:pZ?oxo+x:luca.ungaro@epitech.eu \
livebox-c3f8:WPA_2:lucalivisaeric"
fi

##
## Checks if wireless network interface exists
##
if [ $(echo "$INTERFACE" | wc -c) -eq 0]
then
    >&2 echo "No interface device found"
else
    ##
    ## Wakes interface up
    ##
    if [ $(ip link show $INTERFACE | grep "UP" | wc -l) -eq 0 ]
    then
	ip link set $INTERFACE up
    fi
    ##
    ## If ssids not configured for wpa_supplicant, then does
    ##
    for CUR in SSIDs
    do
	CUR_SSID=$(echo $CUR | cut -d':' -f1)
	FOUND=$(cat $WPA_SUP | grep $CUR_SSID | wc -l)
	if [ FOUND -eq 0 ]
	then
	    CUR_TYPE=$(echo $CUR | cur -d':' -f2)
	    if [[ $CUR_TYPE = "WPA2_ENTREPRISE"]]
	    then
		CUR_UNAME=$(echo $CUR | cut -d':' -f3)
		CUR_PSK=$(echo $CUR | cut -d':' -f4)
		cat >> $WPA_SUP <<EOF
network={
  ssid="$CUR_SSID"
  scan_ssid=1
  key_mgmt=WPA-EAP
  identity="$CUR_NUAME"
  password="$CUR_PSK"
  eap=PEAP
  phase1="peaplabel=0"
  phase2="auth=MSCHAPV2"
}
EOF
	    else
		CUR_PSK=$(echo $CUR | cut -d':' -f3)
		cat >> $WPA_SUP <<EOF
network={
  ssid="$CUR_SSID"
  psk="$CUR_PSK"
  key_mgmt=WPA-PSK
  proto=RSN
  pairwise=CCMP
}
EOF
	    fi			# !SSID_TYPE
	fi			# !ssid not found in wpa_suppliciant.conf
    done			# !wpa_suppliciant.conf

    ##
    ## Only this is the connection thing.
    ##
    while [ $(iw $INTERFACE link | grep "Connected" | wc -l) -eq 0 ]
    do
	wpa_supplicant -i $INTERFACE -c $WPA_SUP -Dwext
	dhclient $INTERFACE
	sleep 5
    done

fi				# !if interface found
