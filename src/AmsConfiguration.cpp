#include "AmsConfiguration.h"

char* AmsConfiguration::getWifiSsid() {
	return config.wifiSsid;
}

void AmsConfiguration::setWifiSsid(const char* wifiSsid) {
	wifiChanged |= strcmp(config.wifiSsid, wifiSsid) != 0;
	strcpy(config.wifiSsid, wifiSsid);
}

char* AmsConfiguration::getWifiPassword() {
	return config.wifiPassword;
}

void AmsConfiguration::setWifiPassword(const char* wifiPassword) {
	wifiChanged |= strcmp(config.wifiPassword, wifiPassword) != 0;
	strcpy(config.wifiPassword, wifiPassword);
}

char* AmsConfiguration::getWifiIp() {
	return config.wifiIp;
}

void AmsConfiguration::setWifiIp(const char* wifiIp) {
	wifiChanged |= strcmp(config.wifiIp, wifiIp) != 0;
	strcpy(config.wifiIp, wifiIp);
}

char* AmsConfiguration::getWifiGw() {
	return config.wifiGw;
}

void AmsConfiguration::setWifiGw(const char* wifiGw) {
	wifiChanged |= strcmp(config.wifiGw, wifiGw) != 0;
	strcpy(config.wifiGw, wifiGw);
}

char* AmsConfiguration::getWifiSubnet() {
	return config.wifiSubnet;
}

void AmsConfiguration::setWifiSubnet(const char* wifiSubnet) {
	wifiChanged |= strcmp(config.wifiSubnet, wifiSubnet) != 0;
	strcpy(config.wifiSubnet, wifiSubnet);
}

char* AmsConfiguration::getWifiDns1() {
	return config.wifiDns1;
}

void AmsConfiguration::setWifiDns1(const char* wifiDns1) {
	wifiChanged |= strcmp(config.wifiDns1, wifiDns1) != 0;
	strcpy(config.wifiDns1, wifiDns1);
}

char* AmsConfiguration::getWifiDns2() {
	return config.wifiDns2;
}

void AmsConfiguration::setWifiDns2(const char* wifiDns2) {
	wifiChanged |= strcmp(config.wifiDns2, wifiDns2) != 0;
	strcpy(config.wifiDns2, wifiDns2);
}

char* AmsConfiguration::getWifiHostname() {
	return config.wifiHostname;
}

void AmsConfiguration::setWifiHostname(const char* wifiHostname) {
	wifiChanged |= strcmp(config.wifiHostname, wifiHostname) != 0;
	strcpy(config.wifiHostname, wifiHostname);
}

void AmsConfiguration::clearWifiIp() {
	setWifiIp("");
	setWifiGw("");
	setWifiSubnet("");
	setWifiDns1("");
	setWifiDns2("");
}

bool AmsConfiguration::isWifiChanged() {
	return wifiChanged;
}

void AmsConfiguration::ackWifiChange() {
	wifiChanged = false;
}


char* AmsConfiguration::getMqttHost() {
	return config.mqttHost;
}

void AmsConfiguration::setMqttHost(const char* mqttHost) {
	mqttChanged |= strcmp(config.mqttHost, mqttHost) != 0;
	strcpy(config.mqttHost, mqttHost);
}

uint16_t AmsConfiguration::getMqttPort() {
	return config.mqttPort;
}

void AmsConfiguration::setMqttPort(uint16_t mqttPort) {
	mqttChanged |= config.mqttPort != mqttPort;
	config.mqttPort = mqttPort;
}

char* AmsConfiguration::getMqttClientId() {
	return config.mqttClientId;
}

void AmsConfiguration::setMqttClientId(const char* mqttClientId) {
	mqttChanged |= strcmp(config.mqttClientId, mqttClientId) != 0;
	strcpy(config.mqttClientId, mqttClientId);
}

char* AmsConfiguration::getMqttPublishTopic() {
	return config.mqttPublishTopic;
}

void AmsConfiguration::setMqttPublishTopic(const char* mqttPublishTopic) {
	mqttChanged |= strcmp(config.mqttPublishTopic, mqttPublishTopic) != 0;
	strcpy(config.mqttPublishTopic, mqttPublishTopic);
}

char* AmsConfiguration::getMqttSubscribeTopic() {
	return config.mqttSubscribeTopic;
}

void AmsConfiguration::setMqttSubscribeTopic(const char* mqttSubscribeTopic) {
	mqttChanged |= strcmp(config.mqttSubscribeTopic, mqttSubscribeTopic) != 0;
	strcpy(config.mqttSubscribeTopic, mqttSubscribeTopic);
}

char* AmsConfiguration::getMqttUser() {
	return config.mqttUser;
}

void AmsConfiguration::setMqttUser(const char* mqttUser) {
	mqttChanged |= strcmp(config.mqttUser, mqttUser) != 0;
	strcpy(config.mqttUser, mqttUser);
}

char* AmsConfiguration::getMqttPassword() {
	return config.mqttPassword;
}

void AmsConfiguration::setMqttPassword(const char* mqttPassword) {
	mqttChanged |= strcmp(config.mqttPassword, mqttPassword) != 0;
	strcpy(config.mqttPassword, mqttPassword);
}

uint8_t AmsConfiguration::getMqttPayloadFormat() {
	return config.mqttPayloadFormat;
}

void AmsConfiguration::setMqttPayloadFormat(uint8_t mqttPayloadFormat) {
	config.mqttPayloadFormat = mqttPayloadFormat;
}

bool AmsConfiguration::isMqttSsl() {
	return config.mqttSsl;
}

void AmsConfiguration::setMqttSsl(bool mqttSsl) {
	mqttChanged |= config.mqttSsl != mqttSsl;
	config.mqttSsl = mqttSsl;
}

void AmsConfiguration::clearMqtt() {
	setMqttHost("");
	setMqttPort(1883);
	setMqttClientId("");
	setMqttPublishTopic("");
	setMqttSubscribeTopic("");
	setMqttUser("");
	setMqttPassword("");
	setMqttSsl(false);
}

void AmsConfiguration::setMqttChanged() {
	mqttChanged = true;
}

bool AmsConfiguration::isMqttChanged() {
	return mqttChanged;
}

void AmsConfiguration::ackMqttChange() {
	mqttChanged = false;
}

byte AmsConfiguration::getAuthSecurity() {
	return config.authSecurity;
}

void AmsConfiguration::setAuthSecurity(byte authSecurity) {
	config.authSecurity = authSecurity;
}

char* AmsConfiguration::getAuthUser() {
	return config.authUser;
}

void AmsConfiguration::setAuthUser(const char* authUser) {
	strcpy(config.authUser, authUser);
}

char* AmsConfiguration::getAuthPassword() {
	return config.authPassword;
}

void AmsConfiguration::setAuthPassword(const char* authPassword) {
	strcpy(config.authPassword, authPassword);
}

void AmsConfiguration::clearAuth() {
	setAuthSecurity(0);
	setAuthUser("");
	setAuthPassword("");
}

uint8_t AmsConfiguration::getMeterType() {
	return config.meterType;
}

void AmsConfiguration::setMeterType(uint8_t meterType) {
	config.meterType = meterType;
}

uint8_t AmsConfiguration::getDistributionSystem() {
	return config.distributionSystem;
}

void AmsConfiguration::setDistributionSystem(uint8_t distributionSystem) {
	config.distributionSystem = distributionSystem;
}

uint8_t AmsConfiguration::getMainFuse() {
	return config.mainFuse;
}

void AmsConfiguration::setMainFuse(uint8_t mainFuse) {
	config.mainFuse = mainFuse;
}

uint8_t AmsConfiguration::getProductionCapacity() {
	return config.productionCapacity;
}

void AmsConfiguration::setProductionCapacity(uint8_t productionCapacity) {
	config.productionCapacity = productionCapacity;
}

bool AmsConfiguration::isSubstituteMissing() {
	return config.substituteMissing;
}

void AmsConfiguration::setSubstituteMissing(bool substituteMissing) {
	config.substituteMissing = substituteMissing;
}

bool AmsConfiguration::isDebugTelnet() {
	return config.debugTelnet;
}

void AmsConfiguration::setDebugTelnet(bool debugTelnet) {
	config.debugTelnet = debugTelnet;
}

bool AmsConfiguration::isDebugSerial() {
	return config.debugSerial;
}

void AmsConfiguration::setDebugSerial(bool debugSerial) {
	config.debugSerial = debugSerial;
}

uint8_t AmsConfiguration::getDebugLevel() {
	return config.debugLevel;
}

void AmsConfiguration::setDebugLevel(uint8_t debugLevel) {
	config.debugLevel = debugLevel;
}

uint16_t AmsConfiguration::getDomoELIDX() {
	return config.domoELIDX;
}
uint16_t AmsConfiguration::getDomoVL1IDX() {
	return config.domoVL1IDX;
}
uint16_t AmsConfiguration::getDomoVL2IDX() {
	return config.domoVL2IDX;
}
uint16_t AmsConfiguration::getDomoVL3IDX() {
	return config.domoVL3IDX;
}
uint16_t AmsConfiguration::getDomoCL1IDX() {
	return config.domoCL1IDX;
}

void AmsConfiguration::setDomoELIDX(uint16_t domoELIDX) {
	domoChanged |= config.domoELIDX != domoELIDX;
	config.domoELIDX = domoELIDX;
}

void AmsConfiguration::setDomoVL1IDX(uint16_t domoVL1IDX) {
	domoChanged |= config.domoVL1IDX != domoVL1IDX;
	config.domoVL1IDX = domoVL1IDX;
}

void AmsConfiguration::setDomoVL2IDX(uint16_t domoVL2IDX) {
	domoChanged |= config.domoVL2IDX != domoVL2IDX;
	config.domoVL2IDX = domoVL2IDX;
}

void AmsConfiguration::setDomoVL3IDX(uint16_t domoVL3IDX) {
	domoChanged |= config.domoVL3IDX != domoVL3IDX;
	config.domoVL3IDX = domoVL3IDX;
}

void AmsConfiguration::setDomoCL1IDX(uint16_t domoCL1IDX) {
	domoChanged |= config.domoCL1IDX != domoCL1IDX;
	config.domoCL1IDX = domoCL1IDX;
}

void AmsConfiguration::clearDomo() {
	setDomoELIDX(0);
	setDomoVL1IDX(0);	
	setDomoVL2IDX(0);	
	setDomoVL3IDX(0);
	setDomoCL1IDX(0);
}

bool AmsConfiguration::pinUsed(uint8_t pin) {
	if(pin == 0xFF)
		return false;
	return 
		pin == config.hanPin ||
		pin == config.apPin ||
		pin == config.ledPinRed ||
		pin == config.ledPinGreen ||
		pin == config.ledPinBlue ||
		pin == config.tempSensorPin ||
		pin == config.vccPin
	;
}

uint8_t AmsConfiguration::getHanPin() {
	return config.hanPin;
}

void AmsConfiguration::setHanPin(uint8_t hanPin) {
	if(!pinUsed(hanPin)) {
		config.hanPin = hanPin;
	}
}

uint8_t AmsConfiguration::getApPin() {
	return config.apPin;
}

void AmsConfiguration::setApPin(uint8_t apPin) {
	if(!pinUsed(apPin)) {
		config.apPin = apPin;
		if(apPin >= 0)
			pinMode(apPin, INPUT_PULLUP);
	}
}

uint8_t AmsConfiguration::getLedPin() {
	return config.ledPin;
}

void AmsConfiguration::setLedPin(uint8_t ledPin) {
	if(!pinUsed(ledPin)) {
		config.ledPin = ledPin;
	}
}

bool AmsConfiguration::isLedInverted() {
	return config.ledInverted;
}

void AmsConfiguration::setLedInverted(bool ledInverted) {
	config.ledInverted = ledInverted;
}


uint8_t AmsConfiguration::getLedPinRed() {
	return config.ledPinRed;
}

void AmsConfiguration::setLedPinRed(uint8_t ledPinRed) {
	if(!pinUsed(ledPinRed)) {
		config.ledPinRed = ledPinRed;
	}
}

uint8_t AmsConfiguration::getLedPinGreen() {
	return config.ledPinGreen;
}

void AmsConfiguration::setLedPinGreen(uint8_t ledPinGreen) {
	if(!pinUsed(ledPinGreen)) {
		config.ledPinGreen = ledPinGreen;
	}
}

uint8_t AmsConfiguration::getLedPinBlue() {
	return config.ledPinBlue;
}

void AmsConfiguration::setLedPinBlue(uint8_t ledPinBlue) {
	if(!pinUsed(ledPinBlue)) {
		config.ledPinBlue = ledPinBlue;
	}
}

bool AmsConfiguration::isLedRgbInverted() {
	return config.ledRgbInverted;
}

void AmsConfiguration::setLedRgbInverted(bool ledRgbInverted) {
	config.ledRgbInverted = ledRgbInverted;
}


uint8_t AmsConfiguration::getTempSensorPin() {
	return config.tempSensorPin;
}

void AmsConfiguration::setTempSensorPin(uint8_t tempSensorPin) {
	if(!pinUsed(tempSensorPin)) {
		config.tempSensorPin = tempSensorPin;
	}
}

uint8_t AmsConfiguration::getVccPin() {
	return config.vccPin;
}

void AmsConfiguration::setVccPin(uint8_t vccPin) {
	if(!pinUsed(vccPin)) {
		config.vccPin = vccPin;
	}
}

double AmsConfiguration::getVccMultiplier() {
	return config.vccMultiplier / 1000.0;
}

void AmsConfiguration::setVccMultiplier(double vccMultiplier) {
	config.vccMultiplier = max(1, min((int) (vccMultiplier * 1000), 65535));
}

double AmsConfiguration::getVccBootLimit() {
	return config.vccBootLimit / 10.0;
}

void AmsConfiguration::setVccBootLimit(double vccBootLimit) {
	if(vccBootLimit == 0.0)
		config.vccBootLimit = 0;
	else
		config.vccBootLimit = max(25, min((int)(vccBootLimit * 10), 35));
}
bool AmsConfiguration::isDomoChanged() {
	return domoChanged;
}

void AmsConfiguration::ackDomoChange() {
	domoChanged = false;
}

bool AmsConfiguration::hasConfig() {
	if(configVersion == 0) {
		EEPROM.begin(EEPROM_SIZE);
		configVersion = EEPROM.read(EEPROM_CONFIG_ADDRESS);
		EEPROM.end();
	}
	switch(configVersion) {
		case 71:
		case 72:
		case 75:
		case 80:
		case 81:
		case 82:
			return true;
		default:
			configVersion = 0;
			return false;
	}
}

int AmsConfiguration::getConfigVersion() {
	return configVersion;
}

bool AmsConfiguration::load() {
	int address = EEPROM_CONFIG_ADDRESS;
	bool success = false;

	EEPROM.begin(EEPROM_SIZE);
	int cs = EEPROM.read(address);
	address++;
	switch(cs) {
		case 80: // v1.1
			success = loadConfig80(address);
			break;
		case 81: // v1.2
			success = loadConfig81(address);
			break;
		case 82: // v1.3
			EEPROM.get(address, config);
			success = true;
			break;
	}
	EEPROM.end();

	if(config.apPin >= 0)
		pinMode(config.apPin, INPUT_PULLUP);

	return success;
}

bool AmsConfiguration::loadConfig80(int address) {
	char* temp;

	address += readString(address, &temp);
	setWifiSsid(temp);
	address += readString(address, &temp);
	setWifiPassword(temp);
	address += readString(address, &temp);
	setWifiIp(temp);
	address += readString(address, &temp);
	setWifiGw(temp);
	address += readString(address, &temp);
	setWifiSubnet(temp);

	bool mqtt = false;
	address += readBool(address, &mqtt);
	if(mqtt) {
		address += readString(address, &temp);
		setMqttHost(temp);
		int port;
		address += readInt(address, &port);
		setMqttPort(port);
		address += readString(address, &temp);
		setMqttClientId(temp);
		address += readString(address, &temp);
		setMqttPublishTopic(temp);
		address += readString(address, &temp);
		setMqttSubscribeTopic(temp);

		bool secure = false;
		address += readBool(address, &secure);
		if (secure)
		{
			address += readString(address, &temp);
			setMqttUser(temp);
			address += readString(address, &temp);
			setMqttPassword(temp);
		} else {
			setMqttUser("");
			setMqttPassword("");
		}
	} else {
		clearMqtt();
	}
	setMqttPayloadFormat(0);

	byte b;
	address += readByte(address, &b);
	setAuthSecurity(b);
	if (b > 0) {
		address += readString(address, &temp);
		setAuthUser(temp);
		address += readString(address, &temp);
		setAuthPassword(temp);
	} else {
		clearAuth();
	}

	int i;
	address += readInt(address, &i);
	setMeterType(i);
	address += readInt(address, &i);
	setDistributionSystem(i);
	address += readInt(address, &i);
	setMainFuse(i);
	address += readInt(address, &i);
	setProductionCapacity(i);

	ackWifiChange();

	setDebugLevel(3); // 3=Info
	setDebugTelnet(false);
	setDebugSerial(false);

	return true;
}

bool AmsConfiguration::loadConfig81(int address) {
	char* temp;

	address += readString(address, &temp);
	setWifiSsid(temp);
	address += readString(address, &temp);
	setWifiPassword(temp);

	bool staticIp = false;
	address += readBool(address, &staticIp);
	if(staticIp) {
		address += readString(address, &temp);
		setWifiIp(temp);
		address += readString(address, &temp);
		setWifiGw(temp);
		address += readString(address, &temp);
		setWifiSubnet(temp);
		address += readString(address, &temp);
		setWifiDns1(temp);
		address += readString(address, &temp);
		setWifiDns2(temp);
	}
	address += readString(address, &temp);
	setWifiHostname(temp);
	bool mqtt = false;
	address += readBool(address, &mqtt);
	if(mqtt) {
		address += readString(address, &temp);
		setMqttHost(temp);
		int port;
		address += readInt(address, &port);
		setMqttPort(port);
		address += readString(address, &temp);
		setMqttClientId(temp);
		address += readString(address, &temp);
		setMqttPublishTopic(temp);
		address += readString(address, &temp);
		setMqttSubscribeTopic(temp);

		bool secure = false;
		address += readBool(address, &secure);
		if (secure)
		{
			address += readString(address, &temp);
			setMqttUser(temp);
			address += readString(address, &temp);
			setMqttPassword(temp);
		} else {
			setMqttUser("");
			setMqttPassword("");
		}
		int payloadFormat;
		address += readInt(address, &payloadFormat);
		setMqttPayloadFormat(payloadFormat);
	} else {
		clearMqtt();
	}

	byte b;
	address += readByte(address, &b);
	setAuthSecurity(b);
	if (b > 0) {
		address += readString(address, &temp);
		setAuthUser(temp);
		address += readString(address, &temp);
		setAuthPassword(temp);
	} else {
		clearAuth();
	}

	int i;
	address += readInt(address, &i);
	setMeterType(i);
	address += readInt(address, &i);
	setDistributionSystem(i);
	address += readInt(address, &i);
	setMainFuse(i);
	address += readInt(address, &i);
	setProductionCapacity(i);

	bool debugTelnet = false;
	address += readBool(address, &debugTelnet);
	setDebugTelnet(debugTelnet);
	bool debugSerial = false;
	address += readBool(address, &debugSerial);
	setDebugSerial(debugSerial);
	address += readInt(address, &i);
	setDebugLevel(i);

	bool domo = false;
	address += readBool(address, &domo);
	if(domo) {
		int domoELIDX;
		address += readInt(address, &domoELIDX);
		setDomoELIDX(domoELIDX);
		int domoVL1IDX;
		address += readInt(address, &domoVL1IDX);
		setDomoVL1IDX(domoVL1IDX);
		int domoVL2IDX;
		address += readInt(address, &domoVL2IDX);
		setDomoVL2IDX(domoVL2IDX);
		int domoVL3IDX;
		address += readInt(address, &domoVL3IDX);
		setDomoVL3IDX(domoVL3IDX);
		int domoCL1IDX;
		address += readInt(address, &domoCL1IDX);
		setDomoCL1IDX(domoCL1IDX);
		
	} else {
		clearDomo();
	}
	
	ackWifiChange();

	return true;
}

bool AmsConfiguration::save() {
	int address = EEPROM_CONFIG_ADDRESS;

	EEPROM.begin(EEPROM_SIZE);
	EEPROM.put(address, EEPROM_CHECK_SUM);
	address++;
	EEPROM.put(address, config);
	bool success = EEPROM.commit();
	EEPROM.end();

	configVersion = EEPROM_CHECK_SUM;
	return success;
}

int AmsConfiguration::readString(int pAddress, char* pString[]) {
	int address = 0;
	byte length = EEPROM.read(pAddress + address);
	address++;

	char* buffer = new char[length];
	for (int i = 0; i<length; i++)
	{
		buffer[i] = EEPROM.read(pAddress + address++);
	}
	*pString = buffer;
	return address;
}

int AmsConfiguration::readInt(int address, int *value) {
	int lower = EEPROM.read(address);
	int higher = EEPROM.read(address + 1);
	*value = lower + (higher << 8);
	return 2;
}

int AmsConfiguration::readBool(int address, bool *value) {
	byte y = EEPROM.read(address);
	*value = (bool)y;
	return 1;
}

int AmsConfiguration::readByte(int address, byte *value) {
	*value = EEPROM.read(address);
	return 1;
}

void AmsConfiguration::print(Print* debugger)
{
	debugger->println("Configuration:");
	debugger->println("-----------------------------------------------");
	debugger->printf("WiFi SSID:            '%s'\r\n", this->getWifiSsid());
	debugger->printf("WiFi Psk:             '%s'\r\n", this->getWifiPassword());
	
	if(strlen(getWifiIp()) > 0) {
		debugger->printf("IP:                   '%s'\r\n", this->getWifiIp());
		debugger->printf("Gateway:              '%s'\r\n", this->getWifiGw());
		debugger->printf("Subnet:               '%s'\r\n", this->getWifiSubnet());
		debugger->printf("Primary DNS:          '%s'\r\n", this->getWifiDns1());
		debugger->printf("Secondary DNS:        '%s'\r\n", this->getWifiDns2());
	}
	
	debugger->printf("WiFi Host:            '%s'\r\n", this->getWifiHostname());

	if(strlen(getMqttHost()) > 0) {
		debugger->printf("mqttHost:             '%s'\r\n", this->getMqttHost());
		debugger->printf("mqttPort:             %i\r\n", this->getMqttPort());
		debugger->printf("mqttClientID:         '%s'\r\n", this->getMqttClientId());
		debugger->printf("mqttPublishTopic:     '%s'\r\n", this->getMqttPublishTopic());
		debugger->printf("mqttSubscribeTopic:   '%s'\r\n", this->getMqttSubscribeTopic());
		if (this->getMqttUser()) {
			debugger->printf("SECURE MQTT CONNECTION:\r\n");
			debugger->printf("mqttUser:             '%s'\r\n", this->getMqttUser());
			debugger->printf("mqttPass:             '%s'\r\n", this->getMqttPassword());
		}
		debugger->printf("payload format:       %i\r\n", this->getMqttPayloadFormat());
	}

	if (this->getAuthSecurity()) {
		debugger->printf("WEB AUTH:\r\n");
		debugger->printf("authSecurity:         %i\r\n", this->getAuthSecurity());
		debugger->printf("authUser:             '%s'\r\n", this->getAuthUser());
		debugger->printf("authPass:             '%s'\r\n", this->getAuthPassword());
	}

	debugger->printf("meterType:            %i\r\n", this->getMeterType());
	debugger->printf("distSys:              %i\r\n", this->getDistributionSystem());
	debugger->printf("fuseSize:             %i\r\n", this->getMainFuse());
	debugger->printf("productionCapacity:   %i\r\n", this->getProductionCapacity());
	debugger->printf("Substitute missing:   %s\r\n", this->isSubstituteMissing() ? "Yes" : "No");

	debugger->printf("HAN pin:              %i\r\n", this->getHanPin());
	debugger->printf("LED pin:              %i\r\n", this->getLedPin());
	debugger->printf("LED inverted:         %s\r\n", this->isLedInverted() ? "Yes" : "No");
	debugger->printf("LED red pin:          %i\r\n", this->getLedPinRed());
	debugger->printf("LED green pin:        %i\r\n", this->getLedPinGreen());
	debugger->printf("LED blue pin:         %i\r\n", this->getLedPinBlue());
	debugger->printf("LED inverted:         %s\r\n", this->isLedRgbInverted() ? "Yes" : "No");
	debugger->printf("AP pin:               %i\r\n", this->getApPin());
	debugger->printf("Temperature pin:      %i\r\n", this->getTempSensorPin());

	debugger->printf("Vcc pin:              %i\r\n", this->getVccPin());
	debugger->printf("Vcc multiplier:       %f\r\n", this->getVccMultiplier());
	debugger->printf("Vcc boot limit:       %f\r\n", this->getVccBootLimit());

	if(this->getDomoELIDX() > 0) {
		debugger->printf("Domoticz ELIDX:       %i\r\n", this->getDomoELIDX());
		debugger->printf("Domoticz VL1IDX:      %i\r\n", this->getDomoVL1IDX());
		debugger->printf("Domoticz VL2IDX:      %i\r\n", this->getDomoVL2IDX());
		debugger->printf("Domoticz VL3IDX:      %i\r\n", this->getDomoVL3IDX());
		debugger->printf("Domoticz CL1IDX:      %i\r\n", this->getDomoCL1IDX());
	}

	debugger->println("-----------------------------------------------");
}
