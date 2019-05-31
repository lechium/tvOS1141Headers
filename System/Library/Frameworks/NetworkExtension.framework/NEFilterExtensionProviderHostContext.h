/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEExtensionProviderHostContext.h>
#import <libobjc.A.dylib/NEFilterExtensionProviderProtocol.h>
#import <libobjc.A.dylib/NEFilterExtensionProviderHostProtocol.h>

@protocol NEFilterExtensionProviderProtocol;
@class NSString;

@interface NEFilterExtensionProviderHostContext : NEExtensionProviderHostContext <NEFilterExtensionProviderProtocol, NEFilterExtensionProviderHostProtocol> {

	id<NEFilterExtensionProviderProtocol> _vendorContext;

}

@property (readonly) id<NEFilterExtensionProviderProtocol> vendorContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NEFilterExtensionProviderProtocol>)vendorContext;
-(void)setExtensionIdentifier:(id)arg1 deviceIdentifier:(id)arg2 ;
-(void)startFilterWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateConfiguration:(id)arg1 ;
@end

