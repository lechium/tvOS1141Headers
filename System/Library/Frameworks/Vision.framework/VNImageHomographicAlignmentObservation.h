/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageAlignmentObservation.h>

@interface VNImageHomographicAlignmentObservation : VNImageAlignmentObservation {

	SCD_Struct_VN13 _warpTransform;

}

@property (assign,nonatomic) SCD_Struct_VN13 warpTransform;              //@synthesize warpTransform=_warpTransform - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setWarpTransform:(SCD_Struct_VN13)arg1 ;
-(SCD_Struct_VN13)warpTransform;
@end

