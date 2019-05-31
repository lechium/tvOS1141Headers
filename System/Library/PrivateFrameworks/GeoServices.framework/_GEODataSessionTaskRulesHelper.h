/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEODataSessionTaskRules.h>

@protocol GEODataSessionTask, OS_dispatch_queue;
@class NSHashTable, NSObject, NSString;

@interface _GEODataSessionTaskRulesHelper : NSObject <GEODataSessionTaskRules> {

	id<GEODataSessionTask> _xpcTask;
	id<GEODataSessionTask> _urlTask;
	id<GEODataSessionTask> _completedSubtask;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _isolation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)dataTask:(id)arg1 shouldCreateSubtaskOfType:(unsigned long long)arg2 forRequest:(id)arg3 ;
-(void)removeCompletedSubtaskObserver:(id)arg1 ;
-(void)addCompletedSubtaskObserver:(id)arg1 ;
-(void)dataTask:(id)arg1 didCompleteSubtask:(id)arg2 ;
-(id)completedSubtaskForDataTask:(id)arg1 ;
-(BOOL)dataTask:(id)arg1 shouldStartSubtask:(id)arg2 ofType:(unsigned long long)arg3 ;
-(id)initForType:(unsigned long long)arg1 ;
-(void)setSubtask:(id)arg1 ofType:(unsigned long long)arg2 ;
-(void)_notifyObserversOfCompletedSubtask;
-(id)init;
@end

