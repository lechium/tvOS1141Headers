/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableData.h>

@interface NSCFData : NSMutableData {

	unsigned char _cfinfo[4];
	unsigned _rc;
	long long _length;
	long long _capacity;
	CFAllocatorRef _bytesDeallocator;
	char* _bytes;

}
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(BOOL)_providesConcreteBacking;
-(id)_createDispatchData;
-(oneway void)release;
-(id)retain;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(unsigned long long)length;
-(const void*)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_compact;
-(BOOL)allowsWeakReference;
-(void)setLength:(unsigned long long)arg1 ;
-(BOOL)retainWeakReference;
-(void*)mutableBytes;
@end

