#pragma once

#include "tinyxml.h"
#include "tinystr.h"
#include "AccountInfo.h"

class CConfigXml
{
public:
	CConfigXml(void);
	~CConfigXml(void);

public:
	TiXmlDocument doc;

public:
	void Init(void);
	void SaveFile(void);
	void SetAccount(CAccountInfo& accountInfo);
	void GetAccount(CAccountInfo& accountInfo);
	void SetActiveAccount(int val);
	int GetActiveAccount(void);
	void SetAutoConnect(int val);
	int GetAutoConnect(void);
	void SetDisBtnStatus(int val);
	int GetDisBtnStatus(void);
};