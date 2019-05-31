/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVOutputDeviceConfigurationModification.h>

@class NSString;

@interface AVFigRoutingContextCommandOutputDeviceConfigurationModification : NSObject <AVOutputDeviceConfigurationModification> {

	CFDictionaryRef _payload;

}

@property (nonatomic,readonly) CFDictionaryRef routingContextCommandPayload;              //@synthesize payload=_payload - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(CFDictionaryRef)routingContextCommandPayload;
-(void)setDevicePassword:(id)arg1 ;
-(void)startAutomaticallyAllowingConnectionsFromPeersInHomeGroupAndRejectOtherConnections:(BOOL)arg1 ;
-(void)stopAutomaticallyAllowingConnectionsFromPeersInHomeGroup;
-(void)addPeerToHomeGroup:(id)arg1 ;
-(void)removePeerWithIDFromHomeGroup:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDeviceName:(id)arg1 ;
@end
