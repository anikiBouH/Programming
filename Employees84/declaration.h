void TomInitialize();
void MaryInitialize();
void JohnInitialize();
float employeeFunction(struct employee* emp, int idDataType);
float countWage(float income, float premium, float rise,
		float hours, float bonus, float overTime);
float countRegularHours(float quarter, float month, float day);
float countBonusPay(float hours, float bonus, float wage);
float countOverTimePay(float overTime, float wage);
float countOverTime(float regularHours, float actualHours);
float countRisePay(float rise, float quarter);
float countTax(float salaryRegular, float extraPayments);
int generateTeudatZehut(int firstDigit);
int countKey(int num);
void printInfo(struct employee* emp);
void printFunction(int id, int idDataType);
int scanFunction(int maxId, int maxIdDataType);
void printHelpIDDataType();
