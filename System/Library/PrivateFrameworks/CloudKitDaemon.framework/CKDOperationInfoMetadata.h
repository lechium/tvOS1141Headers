/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKOperationInfo, NSDate, NSNumber;

@interface CKDOperationInfoMetadata : NSObject {

	CKOperationInfo* _operationInfo;
	NSDate* _lastAttemptDate;
	NSNumber* _retryNumber;

}

@property (nonatomic,retain) CKOperationInfo * operationInfo;              //@synthesize operationInfo=_operationInfo - In the implementation block
@property (nonatomic,retain) NSDate * lastAttemptDate;                     //@synthesize lastAttemptDate=_lastAttemptDate - In the implementation block
@property (nonatomic,retain) NSNumber * retryNumber;                       //@synthesize retryNumber=_retryNumber - In the implementation block
-(CKOperationInfo *)operationInfo;
-(NSNumber *)retryNumber;
-(NSDate *)lastAttemptDate;
-(void)setOperationInfo:(CKOperationInfo *)arg1 ;
-(void)setLastAttemptDate:(NSDate *)arg1 ;
-(void)setRetryNumber:(NSNumber *)arg1 ;
@end
