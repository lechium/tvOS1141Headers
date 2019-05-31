/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString;

@interface NEAOVPN : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {

	BOOL _enabled;
	BOOL _toggleEnabled;
	BOOL _allowCaptiveWebSheet;
	BOOL _allowAllCaptiveNetworkPlugins;
	NSDictionary* _interfaceProtocolMapping;
	NSString* _activeInterfaceProtocolKey;
	NSDictionary* _serviceExceptions;
	NSDictionary* _allowedCaptiveNetworkPlugins;

}

@property (getter=isEnabled) BOOL enabled;                                                          //@synthesize enabled=_enabled - In the implementation block
@property (getter=isToggleEnabled) BOOL toggleEnabled;                                              //@synthesize toggleEnabled=_toggleEnabled - In the implementation block
@property (getter=isAllowCaptiveWebSheet) BOOL allowCaptiveWebSheet;                                //@synthesize allowCaptiveWebSheet=_allowCaptiveWebSheet - In the implementation block
@property (getter=isAllowAllCaptiveNetworkPlugins) BOOL allowAllCaptiveNetworkPlugins;              //@synthesize allowAllCaptiveNetworkPlugins=_allowAllCaptiveNetworkPlugins - In the implementation block
@property (copy) NSDictionary * interfaceProtocolMapping;                                           //@synthesize interfaceProtocolMapping=_interfaceProtocolMapping - In the implementation block
@property (copy) NSString * activeInterfaceProtocolKey;                                             //@synthesize activeInterfaceProtocolKey=_activeInterfaceProtocolKey - In the implementation block
@property (copy) NSDictionary * serviceExceptions;                                                  //@synthesize serviceExceptions=_serviceExceptions - In the implementation block
@property (copy) NSDictionary * allowedCaptiveNetworkPlugins;                                       //@synthesize allowedCaptiveNetworkPlugins=_allowedCaptiveNetworkPlugins - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(NSDictionary *)interfaceProtocolMapping;
-(void)setToggleEnabled:(BOOL)arg1 ;
-(void)setAllowCaptiveWebSheet:(BOOL)arg1 ;
-(void)setAllowAllCaptiveNetworkPlugins:(BOOL)arg1 ;
-(void)setServiceExceptions:(NSDictionary *)arg1 ;
-(void)setAllowedCaptiveNetworkPlugins:(NSDictionary *)arg1 ;
-(void)setInterfaceProtocolMapping:(NSDictionary *)arg1 ;
-(NSDictionary *)serviceExceptions;
-(NSDictionary *)allowedCaptiveNetworkPlugins;
-(BOOL)isToggleEnabled;
-(BOOL)isAllowCaptiveWebSheet;
-(BOOL)isAllowAllCaptiveNetworkPlugins;
-(NSString *)activeInterfaceProtocolKey;
-(void)setActiveInterfaceProtocolKey:(NSString *)arg1 ;
@end

