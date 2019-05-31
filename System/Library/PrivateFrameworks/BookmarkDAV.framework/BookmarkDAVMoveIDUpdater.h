/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BookmarkDAVMoveIDUpdater : NSObject {

	void* _database;

}
+(void)rewriteOrderedPayloadsFromProvider:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithDatabase:(void*)arg1 ;
-(void)recursivelyRewriteServerIDsInMap:(id)arg1 ;
-(void)_recursivelyRewriteServerIDsForItemWithServerID:(id)arg1 newParentID:(id)arg2 mutableMap:(id)arg3 ;
-(void)_recursivelyRewriteServerIDsInMutableMap:(id)arg1 sortingHint:(id)arg2 ;
-(void)recursivelyRewriteServerIDsForItemWithServerID:(id)arg1 newParentID:(id)arg2 ;
@end

