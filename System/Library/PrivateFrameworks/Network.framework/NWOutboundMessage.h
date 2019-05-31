/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:42 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/NWMessage.h>

@protocol OS_nw_outbound_message;
@class NSObject;

@interface NWOutboundMessage : NWMessage {

	NSObject*<OS_nw_outbound_message> _internalMessage;

}

@property (retain) NSObject*<OS_nw_outbound_message> internalMessage;              //@synthesize internalMessage=_internalMessage - In the implementation block
@property (assign,nonatomic) unsigned relativePriority; 
@property (assign,nonatomic) unsigned long long deadlineMilliseconds; 
-(id)initWithInternalMessage:(id)arg1 ;
-(void)setNumber:(unsigned long long)arg1 forDomain:(id)arg2 key:(id)arg3 ;
-(unsigned long long)deadlineMilliseconds;
-(void)setDeadlineMilliseconds:(unsigned long long)arg1 ;
-(unsigned)relativePriority;
-(void)setRelativePriority:(unsigned)arg1 ;
-(void)addAntecedent:(id)arg1 ;
-(NSObject*<OS_nw_outbound_message>)internalMessage;
-(void)setInternalMessage:(NSObject*<OS_nw_outbound_message>)arg1 ;
-(id)initWithContent:(id)arg1 ;
@end
