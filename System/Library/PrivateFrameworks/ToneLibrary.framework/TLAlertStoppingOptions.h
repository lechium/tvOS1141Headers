/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ToneLibrary/ToneLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TLAlertStoppingOptions : NSObject <NSCopying> {

	BOOL _shouldWaitUntilEndOfCurrentRepetition;
	double _fadeOutDuration;

}

@property (assign,nonatomic) double fadeOutDuration;                                  //@synthesize fadeOutDuration=_fadeOutDuration - In the implementation block
@property (assign,nonatomic) BOOL shouldWaitUntilEndOfCurrentRepetition;              //@synthesize shouldWaitUntilEndOfCurrentRepetition=_shouldWaitUntilEndOfCurrentRepetition - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeOutDuration;
-(BOOL)shouldWaitUntilEndOfCurrentRepetition;
-(void)setShouldWaitUntilEndOfCurrentRepetition:(BOOL)arg1 ;
@end
