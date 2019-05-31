/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface LogDumpUtility : NSObject
+(id)getCachesDirectoryPath;
+(BOOL)createDirectory:(id)arg1 ;
+(id)logFilename:(int)arg1 dumpID:(unsigned)arg2 logNameType:(int)arg3 prefix:(id)arg4 suffix:(id)arg5 ;
+(id)getDefaultLogDumpPath;
+(void)removeOldFilesInDefaultLogDumpPath;
+(id)filesSortedByTimestamp:(id)arg1 ;
+(void)removeFilesInDirectory:(id)arg1 olderThan:(id)arg2 ;
@end

