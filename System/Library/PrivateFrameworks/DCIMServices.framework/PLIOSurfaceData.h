/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DCIMServices/DCIMServices-Structs.h>
#import <CoreFoundation/NSData.h>

@interface PLIOSurfaceData : NSData {

	IOSurfaceRef _surface;
	const void* _bytes;
	unsigned long long _length;

}
+(id)dataWithIOSurface:(void*)arg1 ;
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIOSurface:(void*)arg1 ;
-(id)initWithIOSurface:(void*)arg1 length:(unsigned long long)arg2 ;
@end
