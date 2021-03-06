/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLArgumentInternal.h>

@interface MTLIndirectConstantArgument : MTLArgumentInternal {

	unsigned short _dataType;
	unsigned short _alignment;
	unsigned short _dataSize;

}
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)indirectConstantDataSize;
-(unsigned long long)indirectConstantAlignment;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(BOOL)arg4 locationIndex:(unsigned long long)arg5 dataType:(unsigned long long)arg6 dataSize:(unsigned long long)arg7 alignment:(unsigned long long)arg8 ;
-(unsigned long long)indirectConstantDataType;
-(void)dealloc;
@end

