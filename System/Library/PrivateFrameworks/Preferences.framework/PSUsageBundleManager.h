/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray, NSMutableArray;

@interface PSUsageBundleManager : NSObject {

	NSDictionary* _bundleMap;
	NSArray* _usageBundleApps;
	NSMutableArray* _storageReporters;

}
-(void)_loadUsageBundlesWithHandler:(/*^block*/id)arg1 ;
-(id)allUsageBundleApps;
-(void)vendUsageBundleAppsWithHandler:(/*^block*/id)arg1 ;
@end

