/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSString, NSDictionary, NSArray, CKPCSDiagnosticInformation;

@interface CKDFetchRecordZonePCSDiagnosticsOperation : CKDDatabaseOperation {

	NSString* _identityStatus;
	NSDictionary* _invalidPCSByZoneID;
	NSDictionary* _validPCSByZoneID;
	NSArray* _recordZoneIDs;
	CKPCSDiagnosticInformation* _pcsDiagnosticInfo;

}

@property (nonatomic,retain) NSString * identityStatus;                                   //@synthesize identityStatus=_identityStatus - In the implementation block
@property (nonatomic,retain) NSDictionary * invalidPCSByZoneID;                           //@synthesize invalidPCSByZoneID=_invalidPCSByZoneID - In the implementation block
@property (nonatomic,retain) NSDictionary * validPCSByZoneID;                             //@synthesize validPCSByZoneID=_validPCSByZoneID - In the implementation block
@property (nonatomic,retain) NSArray * recordZoneIDs;                                     //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (nonatomic,retain) CKPCSDiagnosticInformation * pcsDiagnosticInfo;              //@synthesize pcsDiagnosticInfo=_pcsDiagnosticInfo - In the implementation block
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(CKPCSDiagnosticInformation *)pcsDiagnosticInfo;
-(id)activityCreate;
-(NSArray *)recordZoneIDs;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(void)_handleRecordZoneFetch:(id)arg1 zoneID:(id)arg2 responseCode:(id)arg3 ;
-(NSString *)identityStatus;
-(void)setIdentityStatus:(NSString *)arg1 ;
-(NSDictionary *)invalidPCSByZoneID;
-(void)setInvalidPCSByZoneID:(NSDictionary *)arg1 ;
-(NSDictionary *)validPCSByZoneID;
-(void)setValidPCSByZoneID:(NSDictionary *)arg1 ;
-(void)setPcsDiagnosticInfo:(CKPCSDiagnosticInformation *)arg1 ;
@end

