/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, GEONavigationServer, NSString;

@interface GEONavdServer : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _pushNavigationStateListener;
	NSXPCListener* _getNavigationStateListener;
	NSXPCListener* _monitorDestinationListener;
	GEONavigationServer* _navigationServer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

