/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <RawCamera/RawCamera-Structs.h>
@interface BayerReconstructionV4ImageProvider : NSObject {

	CRawImage* image;
	BOOL _retainedImage;

}
-(void)provideImageData:(void*)arg1 bytesPerRow:(unsigned long long)arg2 origin:(unsigned long long)arg3 :(unsigned long long)arg4 size:(unsigned long long)arg5 :(unsigned long long)arg6 userInfo:(id)arg7 ;
-(void)dealloc;
-(id)initWithRawImage:(CRawImage*)arg1 shouldRetainRawImage:(BOOL)arg2 ;
@end

