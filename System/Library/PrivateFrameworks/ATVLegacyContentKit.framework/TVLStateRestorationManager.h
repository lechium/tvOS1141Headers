/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface TVLStateRestorationManager : NSObject {

	NSMutableDictionary* _savedStateMap;

}

@property (nonatomic,retain) NSMutableDictionary * savedStateMap;              //@synthesize savedStateMap=_savedStateMap - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(void)saveStateForViewController:(id)arg1 ;
-(void)restoreStateForViewController:(id)arg1 ;
-(id)restorationPathForController:(id)arg1 ;
-(void)clearStateForIdentifier:(id)arg1 ;
-(void)_dumpStateRestoration;
-(NSMutableDictionary *)savedStateMap;
-(void)setSavedStateMap:(NSMutableDictionary *)arg1 ;
@end

