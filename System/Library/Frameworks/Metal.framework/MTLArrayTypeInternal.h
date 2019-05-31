/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLArrayType.h>

@class MTLType;

@interface MTLArrayTypeInternal : MTLArrayType {

	unsigned long long _dataType;
	unsigned _arrayLength : 32;
	unsigned _stride : 32;
	id _details;
	unsigned long long _elementType;
	MTLType* _elementTypeInfo;
	BOOL _isIndirectArgumentBuffer;
	unsigned long long _argumentIndexStride;

}

@property (assign) BOOL isIndirectArgumentBuffer;                                         //@synthesize isIndirectArgumentBuffer=_isIndirectArgumentBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long argumentIndexStride;                      //@synthesize argumentIndexStride=_argumentIndexStride - In the implementation block
@property (assign,nonatomic) unsigned long long indirectArgumentIndexStride; 
-(id)formattedDescription:(unsigned long long)arg1 ;
-(BOOL)isIndirectArgumentBuffer;
-(id)elementStructType;
-(id)elementArrayType;
-(id)elementIndirectArgumentType;
-(id)elementTypeDescription;
-(void)setIsIndirectArgumentBuffer:(BOOL)arg1 ;
-(id)initWithArrayLength:(unsigned long long)arg1 elementType:(unsigned long long)arg2 stride:(unsigned long long)arg3 details:(id)arg4 ;
-(void)setArgumentIndexStride:(unsigned long long)arg1 ;
-(id)elementTextureReferenceType;
-(id)elementPointerType;
-(unsigned long long)indirectArgumentIndexStride;
-(void)setIndirectArgumentIndexStride:(unsigned long long)arg1 ;
-(unsigned long long)argumentIndexStride;
-(unsigned long long)dataType;
-(void)setStride:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned long long)stride;
-(unsigned long long)arrayLength;
-(unsigned long long)elementType;
@end

