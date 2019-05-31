/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSData.h>

@class NSURL;

@interface _PFEvanescentData : NSData {

	unsigned long long _length;
	NSURL* _fileURL;
	int _openfd;
	const void* _activeMap;
	int _mapRefCount;

}

@property (copy,readonly) NSURL * url; 
@property (readonly) const void* mapping; 
-(void)getBytes:(void*)arg1 ;
-(void)_destroyMapping;
-(const void*)_openMapping;
-(void)_closeMapping;
-(id)subdataWithRange:(NSRange)arg1 ;
-(void)enumerateByteRangesUsingBlock:(/*^block*/id)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)length;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)url;
-(const void*)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(Class)classForCoder;
-(id)initWithPath:(id)arg1 ;
-(BOOL)isEqualToData:(id)arg1 ;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(const void*)mapping;
@end

