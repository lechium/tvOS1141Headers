/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSUUID, NSArray;

@interface PBSExternalControlIRLearningConfiguration : NSObject {

	BOOL _allowsNavigation;
	int _deviceType;
	NSString* _name;
	NSUUID* _deviceUUID;
	NSArray* _actions;
	NSArray* _requiredActions;

}

@property (nonatomic,copy) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSUUID * deviceUUID;                  //@synthesize deviceUUID=_deviceUUID - In the implementation block
@property (assign,nonatomic) int deviceType;                       //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,copy) NSArray * actions;                      //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy) NSArray * requiredActions;              //@synthesize requiredActions=_requiredActions - In the implementation block
@property (assign,nonatomic) BOOL allowsNavigation;                //@synthesize allowsNavigation=_allowsNavigation - In the implementation block
+(id)basicConfigurationForDeviceWithUUID:(id)arg1 ;
+(id)playbackConfigurationForDeviceWithUUID:(id)arg1 ;
+(id)volumeConfigurationForDeviceWithUUID:(id)arg1 ;
-(void)setActions:(NSArray *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSArray *)actions;
-(void)setDeviceType:(int)arg1 ;
-(int)deviceType;
-(void)setDeviceUUID:(NSUUID *)arg1 ;
-(NSUUID *)deviceUUID;
-(int)actionAtIndex:(unsigned long long)arg1 ;
-(int)firstAction;
-(NSArray *)requiredActions;
-(int)previousActionBeforeAction:(int)arg1 ;
-(int)nextActionAfterAction:(int)arg1 ;
-(BOOL)isRequiredAction:(int)arg1 ;
-(unsigned long long)indexOfAction:(int)arg1 ;
-(BOOL)allowsNavigation;
-(void)setRequiredActions:(NSArray *)arg1 ;
-(void)setAllowsNavigation:(BOOL)arg1 ;
-(int)lastAction;
@end

