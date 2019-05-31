/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface TVCKStoreBumperConfig : NSObject {

	NSURL* _videoURL;
	NSString* _warningTextFormatString;
	NSString* _appleIDFormatString;
	NSString* _logoURLTemplateString;
	double _textDwellTime;

}

@property (nonatomic,retain) NSURL * videoURL;                                //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,retain) NSString * warningTextFormatString;              //@synthesize warningTextFormatString=_warningTextFormatString - In the implementation block
@property (nonatomic,retain) NSString * appleIDFormatString;                  //@synthesize appleIDFormatString=_appleIDFormatString - In the implementation block
@property (nonatomic,retain) NSString * logoURLTemplateString;                //@synthesize logoURLTemplateString=_logoURLTemplateString - In the implementation block
@property (assign,nonatomic) double textDwellTime;                            //@synthesize textDwellTime=_textDwellTime - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(void)setVideoURL:(NSURL *)arg1 ;
-(NSURL *)videoURL;
-(NSString *)warningTextFormatString;
-(NSString *)appleIDFormatString;
-(void)setWarningTextFormatString:(NSString *)arg1 ;
-(void)setAppleIDFormatString:(NSString *)arg1 ;
-(NSString *)logoURLTemplateString;
-(void)setLogoURLTemplateString:(NSString *)arg1 ;
-(double)textDwellTime;
-(void)setTextDwellTime:(double)arg1 ;
@end

