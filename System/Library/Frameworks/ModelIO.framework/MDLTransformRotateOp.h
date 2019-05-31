/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLTransformOp.h>

@class NSString, MDLAnimatedVector3;

@interface MDLTransformRotateOp : NSObject <MDLTransformOp> {

	BOOL _inverse;
	NSString* _name;
	MDLAnimatedVector3* _animatedValue;
	unsigned long long _order;

}

@property (assign,nonatomic) BOOL inverse;                                      //@synthesize inverse=_inverse - In the implementation block
@property (assign,nonatomic) unsigned long long order;                          //@synthesize order=_order - In the implementation block
@property (nonatomic,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) MDLAnimatedVector3 * animatedValue;              //@synthesize animatedValue=_animatedValue - In the implementation block
-(BOOL)inverse;
-(NSString *)name;
-(void)setOrder:(unsigned long long)arg1 ;
-(unsigned long long)order;
-(MDLAnimatedVector3 *)animatedValue;
-(SCD_Struct_MD1)float4x4AtTime:(double)arg1 ;
-(SCD_Struct_MD1)double4x4AtTime:(double)arg1 ;
-(BOOL)IsInverseOp;
-(void)setInverse:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 inverse:(BOOL)arg2 order:(unsigned long long)arg3 data:(id)arg4 ;
@end

