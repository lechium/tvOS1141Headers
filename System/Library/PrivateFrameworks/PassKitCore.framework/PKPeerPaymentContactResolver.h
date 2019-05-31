/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CNContactStore, NSArray, NSCache, NSHashTable;

@interface PKPeerPaymentContactResolver : NSObject {

	NSObject*<OS_dispatch_queue> _contactLookupQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	CNContactStore* _contactStore;
	NSArray* _keysToFetch;
	NSCache* _handleToContactCache;
	NSHashTable* _delegates;

}

@property (nonatomic,retain) NSCache * handleToContactCache;              //@synthesize handleToContactCache=_handleToContactCache - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;               //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSHashTable * delegates;                     //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,readonly) NSArray * keysToFetch;                     //@synthesize keysToFetch=_keysToFetch - In the implementation block
-(id)initWithContactStore:(id)arg1 keysToFetch:(id)arg2 ;
-(id)contactForHandle:(id)arg1 ;
-(NSArray *)keysToFetch;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)_handleContactStoreDidChangeNotification:(id)arg1 ;
-(id)_predicateForHandle:(id)arg1 ;
-(BOOL)haveCachedResultForHandle:(id)arg1 ;
-(void)contactForHandle:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSCache *)handleToContactCache;
-(void)setHandleToContactCache:(NSCache *)arg1 ;
-(void)invalidateCache;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(NSHashTable *)delegates;
-(void)setDelegates:(NSHashTable *)arg1 ;
@end

