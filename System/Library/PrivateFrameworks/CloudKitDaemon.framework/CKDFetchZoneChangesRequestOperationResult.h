/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface CKDFetchZoneChangesRequestOperationResult : NSObject {

	BOOL _hasPendingArchivedRecords;
	NSData* _resultServerChangeTokenData;
	NSData* _resultClientChangeTokenData;
	long long _status;

}

@property (nonatomic,retain) NSData * resultServerChangeTokenData;              //@synthesize resultServerChangeTokenData=_resultServerChangeTokenData - In the implementation block
@property (nonatomic,retain) NSData * resultClientChangeTokenData;              //@synthesize resultClientChangeTokenData=_resultClientChangeTokenData - In the implementation block
@property (assign,nonatomic) long long status;                                  //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasPendingArchivedRecords;                    //@synthesize hasPendingArchivedRecords=_hasPendingArchivedRecords - In the implementation block
-(void)setStatus:(long long)arg1 ;
-(id)init;
-(long long)status;
-(NSData *)resultServerChangeTokenData;
-(void)setHasPendingArchivedRecords:(BOOL)arg1 ;
-(BOOL)hasPendingArchivedRecords;
-(void)setResultServerChangeTokenData:(NSData *)arg1 ;
-(NSData *)resultClientChangeTokenData;
-(void)setResultClientChangeTokenData:(NSData *)arg1 ;
@end

