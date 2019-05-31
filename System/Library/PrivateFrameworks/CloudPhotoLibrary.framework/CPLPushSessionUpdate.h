/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLChangeSessionUpdate.h>

@class CPLChangeBatch, NSDictionary, NSArray, NSSet;

@interface CPLPushSessionUpdate : CPLChangeSessionUpdate {

	CPLChangeBatch* _diffBatch;
	NSDictionary* _uploadIdentifiers;
	NSArray* _addedRecords;
	NSArray* _updatedRecords;
	NSArray* _deletedRecordIdentifiers;
	NSSet* _unquarantinedRecordIdentifiers;

}

@property (nonatomic,readonly) CPLChangeBatch * diffBatch;                          //@synthesize diffBatch=_diffBatch - In the implementation block
@property (nonatomic,readonly) NSDictionary * uploadIdentifiers;                    //@synthesize uploadIdentifiers=_uploadIdentifiers - In the implementation block
@property (nonatomic,readonly) NSArray * addedRecords;                              //@synthesize addedRecords=_addedRecords - In the implementation block
@property (nonatomic,readonly) NSArray * updatedRecords;                            //@synthesize updatedRecords=_updatedRecords - In the implementation block
@property (nonatomic,readonly) NSArray * deletedRecordIdentifiers;                  //@synthesize deletedRecordIdentifiers=_deletedRecordIdentifiers - In the implementation block
@property (nonatomic,readonly) NSSet * unquarantinedRecordIdentifiers;              //@synthesize unquarantinedRecordIdentifiers=_unquarantinedRecordIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)applyToStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)discardFromStore:(id)arg1 error:(id*)arg2 ;
-(id)storageForStatusInStore:(id)arg1 ;
-(NSArray *)addedRecords;
-(NSArray *)updatedRecords;
-(NSArray *)deletedRecordIdentifiers;
-(NSSet *)unquarantinedRecordIdentifiers;
-(id)initWithPushSessionTracker:(id)arg1 error:(id*)arg2 ;
-(CPLChangeBatch *)diffBatch;
-(NSDictionary *)uploadIdentifiers;
-(id)statusDescription;
@end
