CREATE TABLE Tbl_Department_YourLastName(
Department_ID_YourLastName INT identity(1,1) NOT NULL,
Department_Name_YourLastName VARCHAR(30) NOT NULL,			
Phone_Number_YourLastName  BIGINT NOT NULL,					
CONSTRAINT PK_DID PRIMARY KEY (Department_Name_YourLastName) );