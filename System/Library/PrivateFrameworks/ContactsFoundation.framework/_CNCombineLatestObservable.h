/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>

@protocol CNScheduler;
@class NSMutableArray, NSMutableIndexSet, NSArray;

@interface _CNCombineLatestObservable : CNObservable {

	NSMutableArray* _observables;
	NSMutableArray* _results;
	NSMutableArray* _tokens;
	NSMutableIndexSet* _silentObservableIndexes;
	NSMutableIndexSet* _activeObservableIndexes;
	id<CNScheduler> _observerScheduler;

}

@property (nonatomic,readonly) NSArray * observables;                                    //@synthesize observables=_observables - In the implementation block
@property (nonatomic,readonly) NSMutableArray * results;                                 //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) NSMutableArray * tokens;                                  //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,readonly) NSMutableIndexSet * activeObservableIndexes;              //@synthesize activeObservableIndexes=_activeObservableIndexes - In the implementation block
@property (nonatomic,readonly) NSMutableIndexSet * silentObservableIndexes;              //@synthesize silentObservableIndexes=_silentObservableIndexes - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> observerScheduler;                        //@synthesize observerScheduler=_observerScheduler - In the implementation block
-(void)performWithResourceLock:(/*^block*/id)arg1 ;
-(id)initWithObservables:(id)arg1 schedulerProvider:(id)arg2 ;
-(NSArray *)observables;
-(void)observableAtIndex:(unsigned long long)arg1 didReceiveResult:(id)arg2 forObserver:(id)arg3 ;
-(void)observableAtIndexDidComplete:(unsigned long long)arg1 forObserver:(id)arg2 ;
-(void)observableAtIndex:(unsigned long long)arg1 didFailWithError:(id)arg2 forObserver:(id)arg3 ;
-(NSMutableIndexSet *)activeObservableIndexes;
-(NSMutableIndexSet *)silentObservableIndexes;
-(id<CNScheduler>)observerScheduler;
-(id)initWithObservables:(id)arg1 ;
-(NSMutableArray *)tokens;
-(NSMutableArray *)results;
-(id)subscribe:(id)arg1 ;
@end
