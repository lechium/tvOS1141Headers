/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface OBCapabilities : NSObject {

	BOOL _preventURLDataDetection;
	BOOL _preventOpeningSafari;

}

@property (assign,nonatomic) BOOL preventURLDataDetection;              //@synthesize preventURLDataDetection=_preventURLDataDetection - In the implementation block
@property (assign,nonatomic) BOOL preventOpeningSafari;                 //@synthesize preventOpeningSafari=_preventOpeningSafari - In the implementation block
+(id)sharedCapabilities;
+(void)_setSharedCapabilities:(id)arg1 ;
-(BOOL)isWAPI;
-(BOOL)preventURLDataDetection;
-(void)setPreventURLDataDetection:(BOOL)arg1 ;
-(BOOL)preventOpeningSafari;
-(void)setPreventOpeningSafari:(BOOL)arg1 ;
@end

