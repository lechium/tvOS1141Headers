/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TXRTextureInfo;


@protocol TXRParser <NSObject>
@property (nonatomic,readonly) TXRTextureInfo * textureInfo; 
@required
+(BOOL)handlesData:(id)arg1;
-(BOOL)parseData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id*)arg4;
-(TXRTextureInfo *)textureInfo;
-(id)parsedImageAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3;

@end

