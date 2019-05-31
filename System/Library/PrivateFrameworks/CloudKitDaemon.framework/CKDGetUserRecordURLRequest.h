/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKRecord;

@interface CKDGetUserRecordURLRequest : CKDURLRequest {

	/*^block*/id _recordFetchedBlock;
	CKRecord* _userRecord;

}

@property (nonatomic,retain) CKRecord * userRecord;              //@synthesize userRecord=_userRecord - In the implementation block
@property (nonatomic,copy) id recordFetchedBlock;                //@synthesize recordFetchedBlock=_recordFetchedBlock - In the implementation block
-(void)setRecordFetchedBlock:(id)arg1 ;
-(CKRecord *)userRecord;
-(id)recordFetchedBlock;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(void)setUserRecord:(CKRecord *)arg1 ;
-(int)operationType;
@end
