/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>

@protocol CNScheduler;
@class CNCancelationToken;

@interface _CNGeneratorObservable : CNObservable {

	id _state;
	/*^block*/id _condition;
	/*^block*/id _nextState;
	/*^block*/id _resultSelector;
	/*^block*/id _delay;
	id<CNScheduler> _scheduler;
	CNCancelationToken* _cancelable;

}
-(void)updateState;
-(id)initWithInitialState:(id)arg1 condition:(/*^block*/id)arg2 nextState:(/*^block*/id)arg3 resultSelector:(/*^block*/id)arg4 delay:(/*^block*/id)arg5 scheduler:(id)arg6 ;
-(void)sendResultsToObserver:(id)arg1 ;
-(void)scheduleNextResultForObserver:(id)arg1 ;
-(void)sendCurrentStateToObserver:(id)arg1 ;
-(BOOL)isFinished;
-(id)subscribe:(id)arg1 ;
@end
