/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CKContainerID, NSError;

@interface CKAutoBugCaptureMetadata : NSObject {

	NSString* _procName;
	CKContainerID* _containerID;
	NSError* _errorPayload;
	long long _reason;

}

@property (nonatomic,copy) NSString * procName;                      //@synthesize procName=_procName - In the implementation block
@property (nonatomic,copy) CKContainerID * containerID;              //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,copy) NSError * errorPayload;                   //@synthesize errorPayload=_errorPayload - In the implementation block
@property (assign,nonatomic) long long reason;                       //@synthesize reason=_reason - In the implementation block
-(void)setProcName:(NSString *)arg1 ;
-(NSString *)procName;
-(long long)reason;
-(NSError *)errorPayload;
-(CKContainerID *)containerID;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(void)setErrorPayload:(NSError *)arg1 ;
-(void)setReason:(long long)arg1 ;
@end

