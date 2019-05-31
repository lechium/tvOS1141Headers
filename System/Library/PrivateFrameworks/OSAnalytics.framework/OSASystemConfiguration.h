/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OSAnalytics/OSAProxyConfiguration.h>

@class NSString, NSDictionary, NSSet;

@interface OSASystemConfiguration : OSAProxyConfiguration {

	BOOL _appleInternal;
	BOOL _multiUserMode;
	NSString* _pairedWatchOS;
	NSDictionary* _logConfig;
	NSSet* _logBlacklist;

}

@property (readonly) BOOL appleInternal; 
@property (readonly) BOOL multiUserMode; 
+(id)sharedInstance;
-(BOOL)appleInternal;
-(id)systemId;
-(BOOL)isProxy;
-(id)identifier;
-(id)buildVersion;
-(id)productVersion;
-(id)modelCode;
-(id)automatedDeviceGroup;
-(id)serialNumber;
-(void)saveToPath:(id)arg1 ;
-(id)crashReporterKey;
-(id)uiCountryCode;
-(id)releaseType;
-(id)automatedContextURL;
-(id)seedGroup;
-(id)experimentGroup;
-(id)internalKey;
-(id)productNameVersionBuildString;
-(id)osTrain;
-(id)targetAudience;
-(id)awdReporterKey;
-(id)currentTaskingIDByRouting;
-(id)assembleMetadataAt:(double)arg1 withOptions:(unsigned)arg2 ;
-(id)pairedWatchOS;
-(BOOL)multiUserMode;
-(void)sysVersionData;
-(void)onceConfig;
-(id)productBuildString;
-(id)productReleaseString;
-(BOOL)isFile:(id)arg1 validForSubmission:(id)arg2 reasonableSize:(long long)arg3 to:(id)arg4 internalTypes:(id)arg5 result:(const char**)arg6 ;
@end
