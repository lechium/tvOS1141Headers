/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNForkJoinResultReportingStrategy.h>

@class NSMutableArray, NSString;

@interface _CNForkJoinWhenCompleteResultObservationStrategy : NSObject <CNForkJoinResultReportingStrategy> {

	NSMutableArray* _results;
	unsigned long long _uncompletedObservableCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)receiveResult:(id)arg1 fromObservableAtIndex:(unsigned long long)arg2 observer:(id)arg3 ;
-(void)observableAtIndex:(unsigned long long)arg1 didCompleteForObserver:(id)arg2 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
@end

