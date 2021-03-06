/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TVPPlaybackProgress : NSObject {

	NSString* _firstTitle;
	NSString* _currentTitle;
	NSString* _lastTitle;
	double _progress;

}

@property (nonatomic,copy) NSString * firstTitle;                //@synthesize firstTitle=_firstTitle - In the implementation block
@property (nonatomic,copy) NSString * currentTitle;              //@synthesize currentTitle=_currentTitle - In the implementation block
@property (nonatomic,copy) NSString * lastTitle;                 //@synthesize lastTitle=_lastTitle - In the implementation block
@property (assign,nonatomic) double progress;                    //@synthesize progress=_progress - In the implementation block
-(id)init;
-(void)setProgress:(double)arg1 ;
-(NSString *)currentTitle;
-(double)progress;
-(NSString *)firstTitle;
-(void)setFirstTitle:(NSString *)arg1 ;
-(void)setCurrentTitle:(NSString *)arg1 ;
-(NSString *)lastTitle;
-(void)setLastTitle:(NSString *)arg1 ;
@end

