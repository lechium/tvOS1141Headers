/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SiriUIConfiguration : NSObject <NSCopying> {

	BOOL _isSystemHostedPresentation;
	int _flamesViewFidelity;

}

@property (nonatomic,readonly) int flamesViewFidelity;                       //@synthesize flamesViewFidelity=_flamesViewFidelity - In the implementation block
@property (nonatomic,readonly) BOOL isSystemHostedPresentation;              //@synthesize isSystemHostedPresentation=_isSystemHostedPresentation - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)flamesViewFidelity;
-(id)initWithFlamesViewFidelity:(int)arg1 isSystemHostedPresentation:(BOOL)arg2 ;
-(BOOL)isSystemHostedPresentation;
@end

