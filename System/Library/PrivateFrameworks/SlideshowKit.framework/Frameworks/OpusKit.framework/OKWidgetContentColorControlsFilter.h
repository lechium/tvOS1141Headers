/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKWidgetBasicFilter.h>
#import <libobjc.A.dylib/JSOKWidgetContentColorControlsFilter.h>

@class NSNumber;

@interface OKWidgetContentColorControlsFilter : OKWidgetBasicFilter <JSOKWidgetContentColorControlsFilter> {

	NSNumber* _inputSaturation;
	NSNumber* _inputBrightness;
	NSNumber* _inputContrast;

}

@property (nonatomic,retain) NSNumber * inputSaturation;              //@synthesize inputSaturation=_inputSaturation - In the implementation block
@property (nonatomic,retain) NSNumber * inputBrightness;              //@synthesize inputBrightness=_inputBrightness - In the implementation block
@property (nonatomic,retain) NSNumber * inputContrast;                //@synthesize inputContrast=_inputContrast - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)filterWithInputSaturation:(id)arg1 inputBrightness:(id)arg2 inputContrast:(id)arg3 ;
-(id)inputKeys;
-(void)dealloc;
-(id)outputImage;
-(void)setInputSaturation:(NSNumber *)arg1 ;
-(void)setInputBrightness:(NSNumber *)arg1 ;
-(void)setInputContrast:(NSNumber *)arg1 ;
-(id)settingInputSaturation;
-(void)setSettingInputSaturation:(id)arg1 ;
-(id)setttingInputBrightness;
-(void)setSettingInputBrightness:(id)arg1 ;
-(id)settingInputContrast;
-(void)setSettingInputContrast:(id)arg1 ;
-(NSNumber *)inputSaturation;
-(NSNumber *)inputBrightness;
-(NSNumber *)inputContrast;
@end

