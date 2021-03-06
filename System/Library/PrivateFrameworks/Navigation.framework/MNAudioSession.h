/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNAudioSession <NSObject>
@property (assign,nonatomic,__weak) id delegate; 
@property (assign,nonatomic) unsigned long long voiceGuidanceLevel; 
@required
-(id)delegate;
-(void)setDelegate:(id)arg1;
-(void)stop;
-(void)endSession;
-(void)beginSession;
-(void)prepareToAnnounce;
-(void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2 ignorePromptStyle:(BOOL)arg3 completionBlock:(/*^block*/id)arg4;
-(void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2 ignorePromptStyle:(BOOL)arg3 minimumRequiredLevel:(unsigned long long)arg4 completionBlock:(/*^block*/id)arg5;
-(BOOL)vibrateForPrompt:(unsigned long long)arg1;
-(void)clearAllAnnouncements;
-(unsigned long long)voiceGuidanceLevel;
-(void)setVoiceGuidanceLevel:(unsigned long long)arg1;

@end

