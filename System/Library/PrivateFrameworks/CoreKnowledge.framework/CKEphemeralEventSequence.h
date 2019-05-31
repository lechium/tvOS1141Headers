/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKEphemeralReadableEventSequence.h>
#import <libobjc.A.dylib/CKEphemeralWritableEventSequence.h>

@class OS_dispatch_queue, CKEntity;

@interface CKEphemeralEventSequence : NSObject <CKEphemeralReadableEventSequence, CKEphemeralWritableEventSequence> {

	 queue;

}

@property (readonly,nonatomic) OS_dispatch_queue * queue; 
@property (readonly,nonatomic) CKEntity * historyStartEvent; 
+(id)JOINER;
+(id)identifierDateFormat;
-(id)init;
-(OS_dispatch_queue *)queue;
-(id)first;
-(id)findEntityPreceding:(id)arg1 error:(id*)arg2 ;
-(id)eventsBetween:(id)arg1 and:(id)arg2 ;
-(id)eventsWithIdentifier:(id)arg1 ;
-(void)loadFromKnowledgeStreamNamed:(id)arg1 between:(id)arg2 and:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)removeAllEventsSavedInKnowledgeStreamNamed:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)appendEvent:(id)arg1 ;
-(void)writeEventsToKnowledgeStreamNamed:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CKEntity *)historyStartEvent;
-(id)last;
@end
