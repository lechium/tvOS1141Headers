/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBSceneMonitorBehaviors : NSObject <NSCopying> {

	BOOL _monitorsSettings;
	BOOL _monitorsPairingStatus;
	BOOL _monitorsClientSettings;
	BOOL _monitorsEffectiveSettings;

}

@property (assign,nonatomic) BOOL monitorsClientSettings;                 //@synthesize monitorsClientSettings=_monitorsClientSettings - In the implementation block
@property (assign,nonatomic) BOOL monitorsSettings;                       //@synthesize monitorsSettings=_monitorsSettings - In the implementation block
@property (assign,nonatomic) BOOL monitorsEffectiveSettings;              //@synthesize monitorsEffectiveSettings=_monitorsEffectiveSettings - In the implementation block
@property (assign,nonatomic) BOOL monitorsPairingStatus;                  //@synthesize monitorsPairingStatus=_monitorsPairingStatus - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMonitorsSettings:(BOOL)arg1 ;
-(void)setMonitorsEffectiveSettings:(BOOL)arg1 ;
-(void)setMonitorsPairingStatus:(BOOL)arg1 ;
-(void)setMonitorsClientSettings:(BOOL)arg1 ;
-(BOOL)monitorsPairingStatus;
-(BOOL)monitorsEffectiveSettings;
-(BOOL)monitorsSettings;
-(BOOL)monitorsClientSettings;
@end
