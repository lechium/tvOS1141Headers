/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IDS/IDS-Structs.h>
@class NSMutableSet;

@interface IDSQuickSwitchAcknowledgementTracker : NSObject {

	NSMutableSet* _delegateIdentifiers;
	opaque_pthread_mutex_t _delegateIdentifiersMutex;

}

@property (nonatomic,readonly) BOOL isAwaitingAcknowledgement; 
-(id)init;
-(void)dealloc;
-(void)_accessDelegateIdentifiersInCriticalSectionWithBlock:(/*^block*/id)arg1 ;
-(id)identifierForServiceDelegate:(id)arg1 ;
-(BOOL)isAwaitingAcknowledgement;
-(id)awaitAcknowledgementFromServiceDelegate:(id)arg1 ;
-(void)stopAwaitingAcknowledgementFromServiceDelegateWithIdentifier:(id)arg1 ;
-(void)stopAwaitingAcknowledgementFromAllServiceDelegates;
@end

