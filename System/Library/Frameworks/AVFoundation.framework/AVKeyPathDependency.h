/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AVCallbackCancellation;
@class NSObject, AVKVODispatcher, AVWeakReference, NSString, AVTwoPartKeyPath;

@interface AVKeyPathDependency : NSObject {

	NSObject*<OS_dispatch_queue> _subObjectRegistrationQueue;
	AVKVODispatcher* _KVODispatcher;
	AVWeakReference* _weakReferenceToObject;
	NSString* _dependentKey;
	AVTwoPartKeyPath* _dependencyKeyPath;
	id<AVCallbackCancellation> _leafPropertyChangeNotifier;

}
+(void)initialize;
-(void)finalize;
-(void)initializationIsCompleteForObject:(id)arg1 ;
-(id)initWithObject:(id)arg1 thatHasPropertyWithKey:(id)arg2 whoseValueDependsOnValueAtKeyPath:(id)arg3 ;
-(void)_reactToTopLevelPropertyChange:(id)arg1 ;
-(void)_startObservingSecondLevelPropertyOnNewCurrentValueForTopLevelDependencyProperty:(id)arg1 ;
-(void)_reactToSecondLevelPropertyChange:(id)arg1 ;
-(void)dealloc;
-(id)description;
@end
