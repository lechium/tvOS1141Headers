/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:42 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSMutableData.h>

@interface PBMutableData : NSMutableData {

	char* p;
	char* buffer;
	char* end;

}
-(void)_pb_growCapacityBy:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned long long)length;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(const void*)bytes;
-(void)setLength:(unsigned long long)arg1 ;
-(void*)mutableBytes;
@end

