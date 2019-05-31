/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <TVMLKit/TVJSUbiquitousKeyValueStore.h>

@protocol TVJSUbiquitousKeyValueStore <JSExport>
@property (readonly) long long SERVER_CHANGED_REASON; 
@property (readonly) long long INITIAL_SYNC_REASON; 
@property (readonly) long long QUOTA_VIOLATION_REASON; 
@property (readonly) long long ACCOUNT_CHANGED_REASON; 
@required
-(id)getItem:(id)arg1;
-(BOOL)synchronize;
-(void)removeItem:(id)arg1;
-(void)setItem:(id)arg1 :(id)arg2;
-(long long)SERVER_CHANGED_REASON;
-(long long)INITIAL_SYNC_REASON;
-(long long)QUOTA_VIOLATION_REASON;
-(long long)ACCOUNT_CHANGED_REASON;

@end


@class NSUbiquitousKeyValueStore;

@interface TVJSUbiquitousKeyValueStore : IKJSObject <TVJSUbiquitousKeyValueStore> {

	NSUbiquitousKeyValueStore* _kvs;
	id _observer;

}

@property (readonly) long long SERVER_CHANGED_REASON; 
@property (readonly) long long INITIAL_SYNC_REASON; 
@property (readonly) long long QUOTA_VIOLATION_REASON; 
@property (readonly) long long ACCOUNT_CHANGED_REASON; 
-(id)getItem:(id)arg1 ;
-(BOOL)synchronize;
-(void)dealloc;
-(void)removeItem:(id)arg1 ;
-(id)initWithAppContext:(id)arg1 ;
-(void)setItem:(id)arg1 :(id)arg2 ;
-(long long)SERVER_CHANGED_REASON;
-(long long)INITIAL_SYNC_REASON;
-(long long)QUOTA_VIOLATION_REASON;
-(long long)ACCOUNT_CHANGED_REASON;
@end

