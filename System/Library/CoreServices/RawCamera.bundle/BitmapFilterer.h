/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, CIContext;

@interface BitmapFilterer : NSObject {

	NSArray* filters;
	const unsigned short* sourceBitmap;
	void* targetBitmap;
	unsigned rowCount;
	unsigned columnCount;
	unsigned sourceRowBytes;
	unsigned targetRowBytes;
	unsigned bitsPerComponent;
	unsigned samplesPerPixel;
	CIContext* context;

}
+(void)applyFilters:(id)arg1 toBitmap:(const unsigned short*)arg2 targetBitmap:(void*)arg3 rowCount:(unsigned)arg4 columnCount:(unsigned)arg5 sourceRowBytes:(unsigned)arg6 targetRowBytes:(unsigned)arg7 bitsPerComponent:(unsigned)arg8 context:(id)arg9 ;
-(void)dealloc;
-(id)outputImage;
-(id)inputImage;
-(id)initWithFilters:(id)arg1 sourceBitmap:(const unsigned short*)arg2 targetBitmap:(void*)arg3 rowCount:(unsigned)arg4 columnCount:(unsigned)arg5 sourceRowBytes:(unsigned)arg6 targetRowBytes:(unsigned)arg7 bitsPerComponent:(unsigned)arg8 context:(id)arg9 ;
-(void)applyFilters;
@end
