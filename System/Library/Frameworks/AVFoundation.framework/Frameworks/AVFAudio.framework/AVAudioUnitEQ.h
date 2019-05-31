/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVAudioUnitEffect.h>

@class NSArray;

@interface AVAudioUnitEQ : AVAudioUnitEffect

@property (nonatomic,readonly) NSArray * bands; 
@property (assign,nonatomic) float globalGain; 
-(id)initWithNumberOfBands:(unsigned long long)arg1 ;
-(NSArray *)bands;
-(float)globalGain;
-(void)setGlobalGain:(float)arg1 ;
-(id)init;
@end

