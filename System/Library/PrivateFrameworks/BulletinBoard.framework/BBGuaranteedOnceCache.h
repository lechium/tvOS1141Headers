/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface BBGuaranteedOnceCache : NSObject {

	NSMapTable* _guaranteedCache;
	NSMapTable* _bestEffortCache;

}
-(id)init;
-(void)removeObjectUsingKey:(id)arg1 ;
-(BOOL)attemptToGuaranteeObjectUsingKey:(id)arg1 ;
-(id)objectUsingKeyRemovingGuarantee:(id)arg1 ;
-(void)cacheObject:(id)arg1 usingKey:(id)arg2 ;
@end

