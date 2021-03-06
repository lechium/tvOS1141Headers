/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class XBLaunchInterface, NSArray, NSString;

@interface XBApplicationLaunchCompatibilityInfo : NSObject <BSXPCCoding, NSSecureCoding> {

	XBLaunchInterface* _defaultInterface;
	BOOL _launchesOpaque;
	NSArray* _launchInterfaces;
	NSString* _bundleIdentifier;
	NSString* _bundlePath;
	NSString* _sandboxPath;
	NSString* _bundleContainerPath;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundlePath;                                            //@synthesize bundlePath=_bundlePath - In the implementation block
@property (nonatomic,copy) NSString * sandboxPath;                                           //@synthesize sandboxPath=_sandboxPath - In the implementation block
@property (nonatomic,copy) NSString * bundleContainerPath;                                   //@synthesize bundleContainerPath=_bundleContainerPath - In the implementation block
@property (assign,nonatomic) BOOL launchesOpaque;                                            //@synthesize launchesOpaque=_launchesOpaque - In the implementation block
@property (nonatomic,copy,readonly) XBLaunchInterface * defaultLaunchInterface; 
@property (nonatomic,copy,readonly) NSArray * launchInterfaces;                              //@synthesize launchInterfaces=_launchInterfaces - In the implementation block
@property (nonatomic,readonly) BOOL allowsSavingLaunchImages; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)compatibilityInfoForAppInfo:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSString *)bundleIdentifier;
-(NSString *)bundlePath;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithBundle:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)setBundlePath:(NSString *)arg1 ;
-(void)setSandboxPath:(NSString *)arg1 ;
-(void)setBundleContainerPath:(NSString *)arg1 ;
-(id)launchInterfaceWithIdentifier:(id)arg1 ;
-(XBLaunchInterface *)defaultLaunchInterface;
-(void)set_launchInterfaces:(id)arg1 ;
-(BOOL)allowsSavingLaunchImages;
-(id)launchInterfaceIdentifierForRequest:(id)arg1 ;
-(NSArray *)launchInterfaces;
-(NSString *)sandboxPath;
-(BOOL)launchesOpaque;
-(void)setLaunchesOpaque:(BOOL)arg1 ;
-(NSString *)bundleContainerPath;
@end

