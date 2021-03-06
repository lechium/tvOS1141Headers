/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface DiagCollectionClient : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _invalidationHandler;
	/*^block*/id _interruptionHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (copy) id invalidationHandler;                                      //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (copy) id interruptionHandler;                                      //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(id)interruptionHandler;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)collectDEPayloadsForIdentifier:(id)arg1 diagnosticExtensionsWithParameters:(id)arg2 queue:(id)arg3 reply:(/*^block*/id)arg4 ;
-(BOOL)purgeDEPayloadsForIdentifiers:(id)arg1 queue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)purgeAllPayloadsWithQueue:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setupXPCInterface;
-(BOOL)collectDEPayloadsForIdentifier:(id)arg1 diagnosticExtensions:(id)arg2 queue:(id)arg3 reply:(/*^block*/id)arg4 ;
@end

