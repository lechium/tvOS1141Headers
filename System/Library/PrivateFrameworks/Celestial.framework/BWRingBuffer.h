/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface BWRingBuffer : NSObject <NSFastEnumeration> {

	void* _ringBuffer;
	int _outputIndex;
	int _inputIndex;
	int _length;
	unsigned long long _typeSize;

}
-(void)incrementRingIndex:(int*)arg1 ;
-(void)incrementRingIndex:(int*)arg1 withCount:(int)arg2 ;
-(void*)elementAtIndex:(int)arg1 ;
-(int)lastElementIndex;
-(int)firstElementIndex;
-(int)lastElementIndexPlusOne;
-(id)initWithLength:(int)arg1 dataTypeSize:(unsigned long long)arg2 ;
-(void)appendElement:(void*)arg1 ;
-(void)removeFirstElements:(int)arg1 ;
-(void*)firstElement;
-(void*)lastElement;
-(int)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BW45*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
@end
