/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface UNSDataStoreReceipt : NSObject {

	NSArray* _addedObjects;
	NSArray* _replacedObjects;
	NSArray* _replacementObjects;
	NSArray* _removedObjects;

}

@property (nonatomic,readonly) NSArray * addedObjects;                    //@synthesize addedObjects=_addedObjects - In the implementation block
@property (nonatomic,readonly) NSArray * replacedObjects;                 //@synthesize replacedObjects=_replacedObjects - In the implementation block
@property (nonatomic,readonly) NSArray * replacementObjects;              //@synthesize replacementObjects=_replacementObjects - In the implementation block
@property (nonatomic,readonly) NSArray * removedObjects;                  //@synthesize removedObjects=_removedObjects - In the implementation block
+(id)receiptWithAddedObjects:(id)arg1 replacedObjects:(id)arg2 replacementObjects:(id)arg3 removedObjects:(id)arg4 ;
-(NSArray *)addedObjects;
-(NSArray *)removedObjects;
-(BOOL)hasChanges;
-(NSArray *)replacedObjects;
-(NSArray *)replacementObjects;
-(id)initWithAddedObjects:(id)arg1 replacedObjects:(id)arg2 replacementObjects:(id)arg3 removedObjects:(id)arg4 ;
@end
