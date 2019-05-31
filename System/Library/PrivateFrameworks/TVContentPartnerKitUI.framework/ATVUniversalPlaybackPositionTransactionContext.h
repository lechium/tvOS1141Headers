/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBKUniversalPlaybackPositionTransactionContext.h>

@class NSString, ATVUPPClientState, NSDictionary;

@interface ATVUniversalPlaybackPositionTransactionContext : NSObject <SBKUniversalPlaybackPositionTransactionContext> {

	NSString* _capturedDomainVersion;
	ATVUPPClientState* _clientState;
	NSDictionary* _changes;

}

@property (nonatomic,readonly) ATVUPPClientState * clientState;              //@synthesize clientState=_clientState - In the implementation block
@property (nonatomic,readonly) NSDictionary * changes;                       //@synthesize changes=_changes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)changes;
-(ATVUPPClientState *)clientState;
-(id)initWithClientState:(id)arg1 changes:(id)arg2 ;
-(id)lastSyncedDomainVersion;
@end
