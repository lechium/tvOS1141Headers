/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SYDJournal : NSObject {

	NSMutableDictionary* store;
	NSMutableDictionary* journal;
	BOOL readonly;

}
-(id)initWithStore:(id)arg1 ;
-(id)init;
-(id)description;
-(id)changesSinceChangeCount:(long long)arg1 ;
-(long long)maximumChangeCount;
-(id)initWithMutableStore:(id)arg1 ;
-(void)addChange:(int)arg1 forKey:(id)arg2 changeCount:(long long)arg3 ;
-(int)changeSinceChangeCount:(long long)arg1 forKey:(id)arg2 ;
-(BOOL)removeChangesUntilChangeCount:(long long)arg1 ;
@end

