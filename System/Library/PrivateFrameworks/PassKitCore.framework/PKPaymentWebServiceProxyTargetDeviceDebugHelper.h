/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class PKPaymentWebService, NSXPCListener, PKPaymentWebServiceLocalProxyTargetDevice, PKPaymentWebServiceRemoteProxyTargetDevice, NSString;

@interface PKPaymentWebServiceProxyTargetDeviceDebugHelper : NSObject <NSXPCListenerDelegate> {

	PKPaymentWebService* _webService;
	NSXPCListener* _remoteListener;
	PKPaymentWebServiceLocalProxyTargetDevice* _localTarget;
	PKPaymentWebServiceRemoteProxyTargetDevice* _remoteTarget;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)webServiceWithProxiedTargetDevice:(id)arg1 ;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithWebService:(id)arg1 ;
-(id)localProxyTargetDevice;
@end

