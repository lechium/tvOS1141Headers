/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSStorageTip.h>

@protocol PSStorageOptionTipDelegate;
@class NSObject, NSString;

@interface PSStorageOptionTip : PSStorageTip {

	BOOL _mayCauseDataLoss;
	NSObject*<PSStorageOptionTipDelegate> _delegate;
	NSString* _confirmationText;
	NSString* _confirmationButtonTitle;

}

@property (__weak) NSObject*<PSStorageOptionTipDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSString * enableButtonTitle; 
@property (assign,nonatomic) float activationPercent; 
@property (nonatomic,retain) NSString * activatingString; 
@property (assign,nonatomic) long long immediateGain; 
@property (assign,nonatomic) long long eventualGain; 
@property (assign) BOOL mayCauseDataLoss;                                       //@synthesize mayCauseDataLoss=_mayCauseDataLoss - In the implementation block
@property (retain) NSString * confirmationText;                                 //@synthesize confirmationText=_confirmationText - In the implementation block
@property (retain) NSString * confirmationButtonTitle;                          //@synthesize confirmationButtonTitle=_confirmationButtonTitle - In the implementation block
-(id)init;
-(NSObject*<PSStorageOptionTipDelegate>)delegate;
-(void)setDelegate:(NSObject*<PSStorageOptionTipDelegate>)arg1 ;
-(id)getValue:(id)arg1 ;
-(void)setValue:(id)arg1 specifier:(id)arg2 ;
-(NSString *)confirmationText;
-(NSString *)confirmationButtonTitle;
-(BOOL)mayCauseDataLoss;
-(void)enableOption;
-(float)activationPercent;
-(void)setEnableButtonTitle:(NSString *)arg1 ;
-(NSString *)enableButtonTitle;
-(void)setActivationPercent:(float)arg1 ;
-(void)setActivatingString:(NSString *)arg1 ;
-(NSString *)activatingString;
-(long long)immediateGain;
-(void)setImmediateGain:(long long)arg1 ;
-(long long)eventualGain;
-(void)setEventualGain:(long long)arg1 ;
-(void)setMayCauseDataLoss:(BOOL)arg1 ;
-(void)setConfirmationText:(NSString *)arg1 ;
-(void)setConfirmationButtonTitle:(NSString *)arg1 ;
@end

