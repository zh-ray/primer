-- MySQL dump 10.13  Distrib 5.6.43, for Linux (x86_64)
--
-- Host: localhost    Database: table_lib
-- ------------------------------------------------------
-- Server version	5.6.43

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `AdjustTokenPrivileges`
--

DROP TABLE IF EXISTS `AdjustTokenPrivileges`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `AdjustTokenPrivileges` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `AnalyzeStart`
--

DROP TABLE IF EXISTS `AnalyzeStart`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `AnalyzeStart` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=1127 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `AnalyzeStop`
--

DROP TABLE IF EXISTS `AnalyzeStop`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `AnalyzeStop` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=1126 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `CopyFileExW`
--

DROP TABLE IF EXISTS `CopyFileExW`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `CopyFileExW` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=836 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `CreateProcessInternalW`
--

DROP TABLE IF EXISTS `CreateProcessInternalW`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `CreateProcessInternalW` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=1880 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `CreateServiceW`
--

DROP TABLE IF EXISTS `CreateServiceW`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `CreateServiceW` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=13 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `CryptExportKey`
--

DROP TABLE IF EXISTS `CryptExportKey`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `CryptExportKey` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=70 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `CryptGenKey`
--

DROP TABLE IF EXISTS `CryptGenKey`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `CryptGenKey` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=8 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `DeleteFileW`
--

DROP TABLE IF EXISTS `DeleteFileW`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `DeleteFileW` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=3270 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `DeleteService`
--

DROP TABLE IF EXISTS `DeleteService`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `DeleteService` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `EnumServicesStatusA`
--

DROP TABLE IF EXISTS `EnumServicesStatusA`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `EnumServicesStatusA` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=367 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `EnumServicesStatusExW`
--

DROP TABLE IF EXISTS `EnumServicesStatusExW`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `EnumServicesStatusExW` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=28 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `EnumServicesStatusW`
--

DROP TABLE IF EXISTS `EnumServicesStatusW`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `EnumServicesStatusW` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=3 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `Fake_BeCreatedEx`
--

DROP TABLE IF EXISTS `Fake_BeCreatedEx`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `Fake_BeCreatedEx` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=3976 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `Fake_DetectDebugger`
--

DROP TABLE IF EXISTS `Fake_DetectDebugger`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `Fake_DetectDebugger` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=68289 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `Fake_TerminateRemoteProcess`
--

DROP TABLE IF EXISTS `Fake_TerminateRemoteProcess`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `Fake_TerminateRemoteProcess` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=150 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `FindFirstFileExW`
--

DROP TABLE IF EXISTS `FindFirstFileExW`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `FindFirstFileExW` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=6846 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `GetAdaptersAddresses`
--

DROP TABLE IF EXISTS `GetAdaptersAddresses`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `GetAdaptersAddresses` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=205 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `GetComputerNameW`
--

DROP TABLE IF EXISTS `GetComputerNameW`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `GetComputerNameW` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=3757 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `GetForegroundWindow`
--

DROP TABLE IF EXISTS `GetForegroundWindow`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `GetForegroundWindow` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=11770 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `GetProcessAffinityMask`
--

DROP TABLE IF EXISTS `GetProcessAffinityMask`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `GetProcessAffinityMask` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=258 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `HttpOpenRequestA`
--

DROP TABLE IF EXISTS `HttpOpenRequestA`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `HttpOpenRequestA` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=3907 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `InternetCrackUrlA`
--

DROP TABLE IF EXISTS `InternetCrackUrlA`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `InternetCrackUrlA` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=4497 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `InternetCrackUrlW`
--

DROP TABLE IF EXISTS `InternetCrackUrlW`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `InternetCrackUrlW` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=990 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `InternetReadFile`
--

DROP TABLE IF EXISTS `InternetReadFile`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `InternetReadFile` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=7573 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `KeBugCheck2`
--

DROP TABLE IF EXISTS `KeBugCheck2`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `KeBugCheck2` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `LoadLibraryExW`
--

DROP TABLE IF EXISTS `LoadLibraryExW`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `LoadLibraryExW` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY MAX_ROWS=100000000 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `Login`
--

DROP TABLE IF EXISTS `Login`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `Login` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=2 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `Module32FirstW`
--

DROP TABLE IF EXISTS `Module32FirstW`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `Module32FirstW` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=387 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `MoveFileWithProgressW`
--

DROP TABLE IF EXISTS `MoveFileWithProgressW`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `MoveFileWithProgressW` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=2203 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `NtCreateFile`
--

DROP TABLE IF EXISTS `NtCreateFile`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `NtCreateFile` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=11036 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `NtCreateThread`
--

DROP TABLE IF EXISTS `NtCreateThread`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `NtCreateThread` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=245 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `NtCreateThreadEx`
--

DROP TABLE IF EXISTS `NtCreateThreadEx`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `NtCreateThreadEx` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `NtDeleteFile`
--

DROP TABLE IF EXISTS `NtDeleteFile`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `NtDeleteFile` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `NtDeleteKey`
--

DROP TABLE IF EXISTS `NtDeleteKey`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `NtDeleteKey` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=1011 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `NtDeleteValueKey`
--

DROP TABLE IF EXISTS `NtDeleteValueKey`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `NtDeleteValueKey` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=1389 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `NtLoadDriver`
--

DROP TABLE IF EXISTS `NtLoadDriver`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `NtLoadDriver` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `NtQueryAttributesFile`
--

DROP TABLE IF EXISTS `NtQueryAttributesFile`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `NtQueryAttributesFile` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=51929 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `NtQueryDirectoryFile`
--

DROP TABLE IF EXISTS `NtQueryDirectoryFile`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `NtQueryDirectoryFile` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=8386 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `NtQueryFullAttributesFile`
--

DROP TABLE IF EXISTS `NtQueryFullAttributesFile`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `NtQueryFullAttributesFile` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=990 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `NtReadFile`
--

DROP TABLE IF EXISTS `NtReadFile`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `NtReadFile` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=61045 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `NtReadVirtualMemory`
--

DROP TABLE IF EXISTS `NtReadVirtualMemory`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `NtReadVirtualMemory` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=18655 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `NtSetContextThread`
--

DROP TABLE IF EXISTS `NtSetContextThread`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `NtSetContextThread` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=397 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `NtSetSystemInformation`
--

DROP TABLE IF EXISTS `NtSetSystemInformation`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `NtSetSystemInformation` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `NtSetSystemTime`
--

DROP TABLE IF EXISTS `NtSetSystemTime`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `NtSetSystemTime` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `NtSetValueKey`
--

DROP TABLE IF EXISTS `NtSetValueKey`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `NtSetValueKey` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=18887 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `NtShutdownSystem`
--

DROP TABLE IF EXISTS `NtShutdownSystem`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `NtShutdownSystem` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `NtSuspendThread`
--

DROP TABLE IF EXISTS `NtSuspendThread`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `NtSuspendThread` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=727 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `NtTerminateProcess`
--

DROP TABLE IF EXISTS `NtTerminateProcess`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `NtTerminateProcess` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=4069 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `NtTerminateThread`
--

DROP TABLE IF EXISTS `NtTerminateThread`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `NtTerminateThread` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `NtUnloadDriver`
--

DROP TABLE IF EXISTS `NtUnloadDriver`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `NtUnloadDriver` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `NtWriteVirtualMemory`
--

DROP TABLE IF EXISTS `NtWriteVirtualMemory`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `NtWriteVirtualMemory` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=397 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `OpenSCManagerW`
--

DROP TABLE IF EXISTS `OpenSCManagerW`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `OpenSCManagerW` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=7169 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `OpenServiceW`
--

DROP TABLE IF EXISTS `OpenServiceW`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `OpenServiceW` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=7680 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `Process32FirstW`
--

DROP TABLE IF EXISTS `Process32FirstW`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `Process32FirstW` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=256 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `SendARP`
--

DROP TABLE IF EXISTS `SendARP`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `SendARP` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `SetWindowsHookExW`
--

DROP TABLE IF EXISTS `SetWindowsHookExW`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `SetWindowsHookExW` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=9 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `StartServiceW`
--

DROP TABLE IF EXISTS `StartServiceW`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `StartServiceW` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=156 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `Thread32First`
--

DROP TABLE IF EXISTS `Thread32First`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `Thread32First` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=230 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `URLDownloadToFileW`
--

DROP TABLE IF EXISTS `URLDownloadToFileW`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `URLDownloadToFileW` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=49 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `WSAConnect`
--

DROP TABLE IF EXISTS `WSAConnect`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `WSAConnect` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `WSARecv`
--

DROP TABLE IF EXISTS `WSARecv`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `WSARecv` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=13672 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `WSARecvFrom`
--

DROP TABLE IF EXISTS `WSARecvFrom`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `WSARecvFrom` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `WSASend`
--

DROP TABLE IF EXISTS `WSASend`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `WSASend` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=969 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `WSASendTo`
--

DROP TABLE IF EXISTS `WSASendTo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `WSASendTo` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `WSASocketW`
--

DROP TABLE IF EXISTS `WSASocketW`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `WSASocketW` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=1301 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `connect`
--

DROP TABLE IF EXISTS `connect`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `connect` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=4570 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `gethostbyname`
--

DROP TABLE IF EXISTS `gethostbyname`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `gethostbyname` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=328 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `listen`
--

DROP TABLE IF EXISTS `listen`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `listen` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=137 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `recv`
--

DROP TABLE IF EXISTS `recv`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `recv` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=4622 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `recvfrom`
--

DROP TABLE IF EXISTS `recvfrom`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `recvfrom` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=508 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `send`
--

DROP TABLE IF EXISTS `send`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `send` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=6945 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `sendto`
--

DROP TABLE IF EXISTS `sendto`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `sendto` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `tag` int(11) DEFAULT NULL,
  `flag` int(11) DEFAULT NULL,
  `arg0` varchar(10) DEFAULT NULL,
  `arg1` varchar(10) DEFAULT NULL,
  `arg2` varchar(10) DEFAULT NULL,
  `arg3` varchar(10) DEFAULT NULL,
  `arg4` varchar(10) DEFAULT NULL,
  `arg5` varchar(10) DEFAULT NULL,
  `arg6` varchar(10) DEFAULT NULL,
  `arg7` varchar(10) DEFAULT NULL,
  `arg8` varchar(10) DEFAULT NULL,
  `arg9` varchar(10) DEFAULT NULL,
  `arg10` varchar(10) DEFAULT NULL,
  `arg11` varchar(10) DEFAULT NULL,
  `arg12` varchar(10) DEFAULT NULL,
  `arg13` varchar(10) DEFAULT NULL,
  `arg14` varchar(10) DEFAULT NULL,
  `arg15` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MEMORY AUTO_INCREMENT=853 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2019-04-19  8:19:40
