/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class AVAudioUnitEQFilterParameters;

@interface AVAudioEnvironmentReverbParameters : NSObject {

	void* _impl;

}

@property (assign,nonatomic) BOOL enable; 
@property (assign,nonatomic) float level; 
@property (nonatomic,readonly) AVAudioUnitEQFilterParameters * filterParameters; 
-(void)loadFactoryReverbPreset:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setLevel:(float)arg1 ;
-(float)level;
-(id)initWithEnvironment:(AVAudioEnvironmentNodeImpl*)arg1 ;
-(BOOL)enable;
-(void)setEnable:(BOOL)arg1 ;
-(AVAudioUnitEQFilterParameters *)filterParameters;
@end

