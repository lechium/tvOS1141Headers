/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate, NSTimeZone, NSUUID, OSLogEventDecomposedMessage;


@protocol OSLogEventProvider
@property (nonatomic,readonly) NSString * composedMessage; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long logType; 
@property (nonatomic,readonly) unsigned long long size; 
@property (nonatomic,readonly) unsigned long long timeToLive; 
@property (nonatomic,readonly) unsigned long long traceIdentifier; 
@property (nonatomic,readonly) unsigned long long threadIdentifier; 
@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (nonatomic,readonly) timeval* unixDate; 
@property (nonatomic,readonly) timezone* unixTimeZone; 
@property (nonatomic,readonly) int processIdentifier; 
@property (nonatomic,readonly) unsigned long long activityIdentifier; 
@property (nonatomic,readonly) unsigned long long parentActivityIdentifier; 
@property (nonatomic,readonly) unsigned long long transitionActivityIdentifier; 
@property (nonatomic,readonly) NSUUID * bootUUID; 
@property (nonatomic,readonly) unsigned long long continuousNanosecondsSinceBoot; 
@property (nonatomic,readonly) unsigned long long machContinuousTimestamp; 
@property (nonatomic,readonly) NSUUID * processImageUUID; 
@property (nonatomic,readonly) const char* processImageUUIDBytes; 
@property (nonatomic,readonly) NSString * processImagePath; 
@property (nonatomic,readonly) NSString * process; 
@property (nonatomic,readonly) NSUUID * senderImageUUID; 
@property (nonatomic,readonly) const char* senderImageUUIDBytes; 
@property (nonatomic,readonly) NSString * senderImagePath; 
@property (nonatomic,readonly) NSString * sender; 
@property (nonatomic,readonly) unsigned long long senderImageOffset; 
@property (nonatomic,readonly) NSString * subsystem; 
@property (nonatomic,readonly) NSString * category; 
@property (nonatomic,readonly) NSString * formatString; 
@property (nonatomic,readonly) OSLogEventDecomposedMessage * decomposedMessage; 
@property (nonatomic,readonly) unsigned long long signpostIdentifier; 
@property (nonatomic,readonly) unsigned long long signpostType; 
@property (nonatomic,readonly) unsigned long long signpostScope; 
@property (nonatomic,readonly) unsigned long long creatorActivityIdentifier; 
@property (nonatomic,readonly) unsigned long long creatorProcessUniqueIdentifier; 
@required
-(NSString *)process;
-(unsigned long long)signpostType;
-(unsigned long long)size;
-(NSString *)category;
-(unsigned long long)type;
-(NSDate *)date;
-(NSString *)sender;
-(NSTimeZone *)timeZone;
-(unsigned long long)threadIdentifier;
-(int)processIdentifier;
-(NSString *)formatString;
-(unsigned long long)timeToLive;
-(NSString *)composedMessage;
-(unsigned long long)logType;
-(unsigned long long)traceIdentifier;
-(timeval*)unixDate;
-(timezone*)unixTimeZone;
-(unsigned long long)parentActivityIdentifier;
-(unsigned long long)transitionActivityIdentifier;
-(NSUUID *)bootUUID;
-(unsigned long long)continuousNanosecondsSinceBoot;
-(unsigned long long)machContinuousTimestamp;
-(NSUUID *)processImageUUID;
-(const char*)processImageUUIDBytes;
-(NSUUID *)senderImageUUID;
-(const char*)senderImageUUIDBytes;
-(unsigned long long)senderImageOffset;
-(OSLogEventDecomposedMessage *)decomposedMessage;
-(unsigned long long)signpostIdentifier;
-(unsigned long long)signpostScope;
-(unsigned long long)creatorActivityIdentifier;
-(unsigned long long)creatorProcessUniqueIdentifier;
-(unsigned long long)activityIdentifier;
-(NSString *)processImagePath;
-(NSString *)senderImagePath;
-(NSString *)subsystem;

@end

