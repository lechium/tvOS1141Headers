/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSCKDatabaseOperation.h>

@class NSArray;

@interface IDSCKModifyRecordZonesOperation : IDSCKDatabaseOperation {

	NSArray* _recordZonesToSave;
	NSArray* _recordZoneIDsToDelete;
	/*^block*/id _modifyRecordZonesCompletionBlock;

}

@property (nonatomic,copy) NSArray * recordZonesToSave;                      //@synthesize recordZonesToSave=_recordZonesToSave - In the implementation block
@property (nonatomic,copy) NSArray * recordZoneIDsToDelete;                  //@synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete - In the implementation block
@property (nonatomic,copy) id modifyRecordZonesCompletionBlock;              //@synthesize modifyRecordZonesCompletionBlock=_modifyRecordZonesCompletionBlock - In the implementation block
+(id)alloc;
+(Class)__class;
-(id)modifyRecordZonesCompletionBlock;
-(void)setRecordZonesToSave:(NSArray *)arg1 ;
-(NSArray *)recordZonesToSave;
-(NSArray *)recordZoneIDsToDelete;
-(void)setRecordZoneIDsToDelete:(NSArray *)arg1 ;
-(void)setModifyRecordZonesCompletionBlock:(id)arg1 ;
@end

