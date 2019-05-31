/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface IMServiceAgent : NSObject {

	NSDictionary* _currentAVChatInfo;

}

@property (nonatomic,retain) NSArray * myAvailableMessages; 
@property (nonatomic,retain) NSArray * myAwayMessages; 
@property (nonatomic,readonly) unsigned long long vcCapabilities; 
@property (nonatomic,__weak,readonly) NSDictionary * currentAVChatInfo; 
@property (nonatomic,readonly) unsigned long long requestAudioReflectorStart; 
@property (nonatomic,readonly) unsigned long long requestAudioReflectorStop; 
+(void)forgetStatusImageAppearance;
+(id)imageNameForStatus:(unsigned long long)arg1 ;
+(id)imageURLForStatus:(unsigned long long)arg1 ;
+(id)notificationCenter;
+(id)sharedAgent;
+(void)setServiceAgentCapabilities:(long long)arg1 ;
+(long long)serviceAgentCapabilities;
-(id)serviceWithName:(id)arg1 ;
-(id)notificationCenter;
-(id)myPictureData;
-(unsigned long long)vcCapabilities;
-(void)setMyStatus:(unsigned long long)arg1 message:(id)arg2 ;
-(void)launchIfNecessary;
-(NSArray *)myAvailableMessages;
-(NSArray *)myAwayMessages;
-(void)setMyAvailableMessages:(NSArray *)arg1 ;
-(void)setMyAwayMessages:(NSArray *)arg1 ;
-(id)serviceWithNameNonBlocking:(id)arg1 ;
-(NSDictionary *)currentAVChatInfo;
-(unsigned long long)requestAudioReflectorStart;
-(unsigned long long)requestAudioReflectorStop;
-(unsigned long long)requestVideoStillForPerson:(id)arg1 ;
@end

