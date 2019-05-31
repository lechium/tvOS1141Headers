/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LSApplicationWorkspace;

@interface GKApplicationWorkspace : NSObject {

	LSApplicationWorkspace* _lsWorkspace;

}

@property (nonatomic,retain) LSApplicationWorkspace * lsWorkspace;              //@synthesize lsWorkspace=_lsWorkspace - In the implementation block
+(id)defaultWorkspace;
-(void)dealloc;
-(void)openURL:(id)arg1 ;
-(void)openGameCenterSettings;
-(void)openSettings;
-(void)openICloudSettings;
-(BOOL)applicationIsInstalled:(id)arg1 ;
-(void)setLsWorkspace:(LSApplicationWorkspace *)arg1 ;
-(id)gameDescriptorsWithInstalledBundleVersionsForBundleIDs:(id)arg1 ;
-(id)gameDescriptorsWithInstalledBundleVersionsForGameDescriptors:(id)arg1 ;
-(LSApplicationWorkspace *)lsWorkspace;
-(id)applicationProxyForBundleID:(id)arg1 ;
-(id)initWithWorkspace:(id)arg1 ;
@end

