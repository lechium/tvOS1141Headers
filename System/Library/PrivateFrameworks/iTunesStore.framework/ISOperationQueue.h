/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue;

@interface ISOperationQueue : NSObject {

	NSOperationQueue* _queue;

}

@property (assign) BOOL adjustsMaxConcurrentOperationCount; 
+(id)mainQueue;
-(id)init;
-(void)dealloc;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setMaxConcurrentOperationCount:(long long)arg1 ;
-(void)cancelAllOperations;
-(id)operations;
-(long long)operationCount;
-(void)addOperation:(id)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)adjustsMaxConcurrentOperationCount;
-(void)setAdjustsMaxConcurrentOperationCount:(BOOL)arg1 ;
-(long long)maxConcurrentOperationCount;
-(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
@end
