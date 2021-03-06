/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MIME-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface MFByteSet : NSObject <NSCopying, NSMutableCopying> {

	char mySet[32];

}
+(id)ASCIIByteSet;
+(id)asciiWhitespaceSet;
+(id)nonASCIIByteSet;
+(id)suspiciousCodepage1252ByteSet;
-(id)initWithCString:(const char*)arg1 ;
-(id)initWithRange:(NSRange)arg1 ;
-(id)invertedSet;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned)arg2 ;
-(id)_initWithSet:(const char*)arg1 ;
-(BOOL)byteIsMember:(char)arg1 ;
@end

