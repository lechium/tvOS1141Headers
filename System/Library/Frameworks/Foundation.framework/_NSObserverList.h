/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface _NSObserverList : NSObject {

	id _owner;
	id _observers;
	BOOL _hasZeroOrOneObserver;
	opaque_pthread_mutex_t _observersLock;

}
+(id)_copyObserversOfObject:(id)arg1 ;
-(void)_receiveBox:(id)arg1 ;
-(void)_directAddObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 observation:(id)arg2 ;
-(id)addObserver:(id)arg1 toObservableObject:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(void)finishObserving;
-(void)removeObservation:(id)arg1 ;
@end

