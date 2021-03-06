/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLArgumentDescriptor.h>

@interface MTLArgumentDescriptorInternal : MTLArgumentDescriptor {

	MTLArgumentDescriptorPrivate _private;

}
+(id)indirectArgumentDescriptor;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)setAccess:(unsigned long long)arg1 ;
-(unsigned long long)constantBlockAlignment;
-(void)setConstantBlockAlignment:(unsigned long long)arg1 ;
-(unsigned long long)dataType;
-(unsigned long long)textureType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(unsigned long long)index;
-(void)setTextureType:(unsigned long long)arg1 ;
-(void)setArrayLength:(unsigned long long)arg1 ;
-(void)setDataType:(unsigned long long)arg1 ;
-(unsigned long long)arrayLength;
-(unsigned long long)access;
@end

