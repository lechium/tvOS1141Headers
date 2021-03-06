/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/GEOMapDataPlugin.h>

@protocol GEOMapDataPluginContextDelegate;
@class NSString;

@interface GEOMapDataPluginContext : NSExtensionContext <GEOMapDataPlugin> {

	id<GEOMapDataPluginContextDelegate> _pluginContextDelegate;

}

@property (assign,nonatomic,__weak) id<GEOMapDataPluginContextDelegate> pluginContextDelegate;              //@synthesize pluginContextDelegate=_pluginContextDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)remoteIsReadyNotification;
-(void)receiveEndpointRequest:(/*^block*/id)arg1 ;
-(void)sendIsReadyNotification;
-(void)sendEndpointRequest:(/*^block*/id)arg1 ;
-(id<GEOMapDataPluginContextDelegate>)pluginContextDelegate;
-(void)setPluginContextDelegate:(id<GEOMapDataPluginContextDelegate>)arg1 ;
@end

