/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class Protocol, NSHashTable;

@interface MNObserverHashTable : NSObject {

	Protocol* _protocol;
	NSHashTable* _observers;

}

@property (readonly) BOOL hasObservers; 
-(id)description;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithProtocol:(id)arg1 ;
-(BOOL)hasObservers;
@end

