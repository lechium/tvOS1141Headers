/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <PhotoEditSupport/AutoEncodeDecodeObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface BLRedEyeBrushTap : AutoEncodeDecodeObject <NSSecureCoding> {

	int _destinationWidth;
	double _timestamp;
	NSDictionary* _eyeRepairData;
	CGPoint _point;

}

@property (assign,nonatomic) double timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) int destinationWidth;                      //@synthesize destinationWidth=_destinationWidth - In the implementation block
@property (assign,nonatomic) CGPoint point;                             //@synthesize point=_point - In the implementation block
@property (nonatomic,retain) NSDictionary * eyeRepairData;              //@synthesize eyeRepairData=_eyeRepairData - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(CGPoint)point;
-(void)setPoint:(CGPoint)arg1 ;
-(id)keysToEncode;
-(int)destinationWidth;
-(void)setDestinationWidth:(int)arg1 ;
-(NSDictionary *)eyeRepairData;
-(void)setEyeRepairData:(NSDictionary *)arg1 ;
@end

