/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOPlatform : NSObject
+(id)sharedPlatform;
+(void)setIsRunningInGeod:(BOOL)arg1 ;
-(BOOL)isInternalInstall;
-(id)osVersion;
-(id)clientCapabilities;
-(BOOL)supportsNavigation;
-(BOOL)deviceSupports4K;
-(BOOL)supportsNewiOS9Features;
-(double)deviceScreenScale;
-(id)hardwareModel;
-(id)productName;
-(BOOL)_deviceSupportsNavigation;
-(BOOL)mapsFeatureFreedomEnabled;
-(BOOL)supportsRealisticTiles;
-(BOOL)supportsForceTouch;
-(long long)deviceScreenWidthInPixels;
-(long long)deviceScreenHeightInPixels;
-(id)buildVersion;
-(id)hardwareIdentifier;
@end

