/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMetricsMutableEvent.h>

@class NSString;

@interface SSMetricsAppInstallEvent : SSMetricsMutableEvent

@property (nonatomic,retain) NSString * buildVersion; 
@property (nonatomic,retain) NSString * bundleID; 
@property (nonatomic,retain) NSString * hardwareType; 
@property (nonatomic,retain) NSString * installError; 
@property (assign,nonatomic) unsigned long long installStatus; 
@property (assign,nonatomic) unsigned long long installType; 
@property (assign,nonatomic) long long jobID; 
+(unsigned long long)_installStatusForString:(id)arg1 ;
+(unsigned long long)_installTypeForString:(id)arg1 ;
+(id)_stringForInstallStatus:(unsigned long long)arg1 ;
+(id)_stringForInstallType:(unsigned long long)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(id)init;
-(id)description;
-(NSString *)buildVersion;
-(NSString *)bundleID;
-(void)setBuildVersion:(NSString *)arg1 ;
-(void)setInstallType:(unsigned long long)arg1 ;
-(unsigned long long)installType;
-(BOOL)requiresDiagnosticSendingPermission;
-(NSString *)hardwareType;
-(NSString *)installError;
-(unsigned long long)installStatus;
-(long long)jobID;
-(void)setHardwareType:(NSString *)arg1 ;
-(void)setInstallError:(NSString *)arg1 ;
-(void)setInstallStatus:(unsigned long long)arg1 ;
-(void)setJobID:(long long)arg1 ;
@end

