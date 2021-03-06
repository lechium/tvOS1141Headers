/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKWidgetBasicFilter.h>
#import <libobjc.A.dylib/JSOKWidgetContentSepiaFilter.h>

@class NSNumber;

@interface OKWidgetContentSepiaFilter : OKWidgetBasicFilter <JSOKWidgetContentSepiaFilter> {

	NSNumber* _inputIntensity;

}

@property (nonatomic,retain) NSNumber * inputIntensity;              //@synthesize inputIntensity=_inputIntensity - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)filterWithIntensity:(id)arg1 ;
-(id)inputKeys;
-(void)dealloc;
-(id)outputImage;
-(void)setInputIntensity:(NSNumber *)arg1 ;
-(void)setSettingInputIntensity:(id)arg1 ;
-(id)settingInputIntensity;
-(NSNumber *)inputIntensity;
@end

