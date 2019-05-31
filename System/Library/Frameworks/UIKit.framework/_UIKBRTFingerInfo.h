/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UIKBRTFingerInfo : NSObject <NSCopying> {

	BOOL _unknownSeen;
	double _radius;
	double _lastSeenTimestamp;
	unsigned long long _identity;
	CGPoint _location;

}

@property (assign,nonatomic) CGPoint location;                         //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) double radius;                            //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) double lastSeenTimestamp;                 //@synthesize lastSeenTimestamp=_lastSeenTimestamp - In the implementation block
@property (assign,nonatomic) unsigned long long identity;              //@synthesize identity=_identity - In the implementation block
@property (assign,nonatomic) BOOL unknownSeen;                         //@synthesize unknownSeen=_unknownSeen - In the implementation block
@property (nonatomic,readonly) double feedbackAlpha; 
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned long long)identity;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)location;
-(void)setLocation:(CGPoint)arg1 ;
-(void)setRadius:(double)arg1 ;
-(void)setLastSeenTimestamp:(double)arg1 ;
-(void)setIdentity:(unsigned long long)arg1 ;
-(void)setUnknownSeen:(BOOL)arg1 ;
-(double)radius;
-(double)lastSeenTimestamp;
-(BOOL)unknownSeen;
-(double)feedbackAlpha;
@end
