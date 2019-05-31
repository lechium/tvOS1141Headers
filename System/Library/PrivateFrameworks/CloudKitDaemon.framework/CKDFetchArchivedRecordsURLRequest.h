/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>
#import <libobjc.A.dylib/CKDURLRequestPipelining.h>

@class NSArray, NSDictionary, NSSet, NSMutableDictionary, NSString;

@interface CKDFetchArchivedRecordsURLRequest : CKDURLRequest <CKDURLRequestPipelining> {

	BOOL _shouldFetchAssetContent;
	NSArray* _recordZoneIDs;
	NSDictionary* _optionsByRecordZoneID;
	NSSet* _desiredAssetKeys;
	/*^block*/id _recordFetchedBlock;
	NSMutableDictionary* _zoneIDsByRequestOperationUUID;
	NSMutableDictionary* _requestResultsByRecordZoneID;
	NSMutableDictionary* _nodeErrorsByZoneID;

}

@property (nonatomic,copy) NSArray * recordZoneIDs;                                            //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * optionsByRecordZoneID;                             //@synthesize optionsByRecordZoneID=_optionsByRecordZoneID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * zoneIDsByRequestOperationUUID;              //@synthesize zoneIDsByRequestOperationUUID=_zoneIDsByRequestOperationUUID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * requestResultsByRecordZoneID;               //@synthesize requestResultsByRecordZoneID=_requestResultsByRecordZoneID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * nodeErrorsByZoneID;                         //@synthesize nodeErrorsByZoneID=_nodeErrorsByZoneID - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;                                     //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (nonatomic,retain) NSSet * desiredAssetKeys;                                         //@synthesize desiredAssetKeys=_desiredAssetKeys - In the implementation block
@property (nonatomic,copy) id recordFetchedBlock;                                              //@synthesize recordFetchedBlock=_recordFetchedBlock - In the implementation block
@property (nonatomic,readonly) NSDictionary * resultsByRecordZoneID; 
@property (nonatomic,readonly) NSDictionary * zoneErrorsByZoneID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRecordFetchedBlock:(id)arg1 ;
-(NSArray *)recordZoneIDs;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(void)setOptionsByRecordZoneID:(NSDictionary *)arg1 ;
-(BOOL)shouldFetchAssetContent;
-(id)recordFetchedBlock;
-(void)setDesiredAssetKeys:(NSSet *)arg1 ;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(id)zoneIDsToLock;
-(NSSet *)desiredAssetKeys;
-(NSMutableDictionary *)nodeErrorsByZoneID;
-(NSMutableDictionary *)requestResultsByRecordZoneID;
-(NSDictionary *)optionsByRecordZoneID;
-(NSMutableDictionary *)zoneIDsByRequestOperationUUID;
-(id)_handleRecords:(id)arg1 ;
-(NSDictionary *)zoneErrorsByZoneID;
-(NSDictionary *)resultsByRecordZoneID;
-(void)setZoneIDsByRequestOperationUUID:(NSMutableDictionary *)arg1 ;
-(void)setRequestResultsByRecordZoneID:(NSMutableDictionary *)arg1 ;
-(void)setNodeErrorsByZoneID:(NSMutableDictionary *)arg1 ;
-(id)initWithRecordZoneIDs:(id)arg1 optionsByRecordZoneID:(id)arg2 ;
-(int)operationType;
@end
