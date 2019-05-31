/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLRootElement.h>

@class NSString;

@interface TVLTrickPlayConfigElement : TVLRootElement {

	BOOL _oneBasedNamingScheme;
	int _trickPlayCount;
	double _frameTimeDifferenceInSeconds;
	NSString* _trickPlayURL;
	NSString* _thumbnailNameFormat;

}

@property (assign,nonatomic) double frameTimeDifferenceInSeconds;              //@synthesize frameTimeDifferenceInSeconds=_frameTimeDifferenceInSeconds - In the implementation block
@property (assign,nonatomic) int trickPlayCount;                               //@synthesize trickPlayCount=_trickPlayCount - In the implementation block
@property (nonatomic,copy) NSString * trickPlayURL;                            //@synthesize trickPlayURL=_trickPlayURL - In the implementation block
@property (assign,nonatomic) BOOL oneBasedNamingScheme;                        //@synthesize oneBasedNamingScheme=_oneBasedNamingScheme - In the implementation block
@property (nonatomic,copy) NSString * thumbnailNameFormat;                     //@synthesize thumbnailNameFormat=_thumbnailNameFormat - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2 ;
-(NSString *)trickPlayURL;
-(double)frameTimeDifferenceInSeconds;
-(int)trickPlayCount;
-(BOOL)oneBasedNamingScheme;
-(NSString *)thumbnailNameFormat;
-(void)setFrameTimeDifferenceInSeconds:(double)arg1 ;
-(void)setTrickPlayCount:(int)arg1 ;
-(void)setTrickPlayURL:(NSString *)arg1 ;
-(void)setOneBasedNamingScheme:(BOOL)arg1 ;
-(void)setThumbnailNameFormat:(NSString *)arg1 ;
@end

