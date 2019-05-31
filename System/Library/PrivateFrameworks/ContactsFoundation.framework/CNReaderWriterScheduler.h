/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNReaderWriterScheduler.h>

@protocol CNReaderWriterScheduler <NSObject>
@required
-(id)performReaderBlock:(/*^block*/id)arg1;
-(id)performWriterBlock:(/*^block*/id)arg1;
-(void)performSynchronousReaderBlock:(/*^block*/id)arg1;
-(void)performSynchronousWriterBlock:(/*^block*/id)arg1;
-(void)suspend;
-(void)resume;

@end


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSString;

@interface CNReaderWriterScheduler : NSObject <CNReaderWriterScheduler> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _suspended;
	NSMutableArray* _activeReaders;
	NSMutableArray* _pendingReaders;
	NSMutableArray* _activeWriters;
	NSMutableArray* _pendingWriters;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,getter=isSuspended,nonatomic) BOOL suspended; 
@property (nonatomic,readonly) NSMutableArray * activeReaders;                  //@synthesize activeReaders=_activeReaders - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingReaders;                 //@synthesize pendingReaders=_pendingReaders - In the implementation block
@property (nonatomic,readonly) NSMutableArray * activeWriters;                  //@synthesize activeWriters=_activeWriters - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingWriters;                 //@synthesize pendingWriters=_pendingWriters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)appendDescriptionToBuilder:(id)arg1 ;
-(void)addReaderWithIdentifier:(id)arg1 ;
-(void)activateReader:(id)arg1 ;
-(void)removeReader:(id)arg1 ;
-(NSMutableArray *)activeWriters;
-(NSMutableArray *)pendingWriters;
-(NSMutableArray *)activeReaders;
-(NSMutableArray *)pendingReaders;
-(id)performReaderBlock:(/*^block*/id)arg1 ;
-(id)performWriterBlock:(/*^block*/id)arg1 ;
-(void)performSynchronousReaderBlock:(/*^block*/id)arg1 ;
-(void)performSynchronousWriterBlock:(/*^block*/id)arg1 ;
-(void)addWriterWithIdentifier:(id)arg1 ;
-(void)activateWriter:(id)arg1 ;
-(void)removeWriter:(id)arg1 ;
-(id)init;
-(BOOL)isSuspended;
-(NSString *)description;
-(void)suspend;
-(void)resume;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setSuspended:(BOOL)arg1 ;
@end

