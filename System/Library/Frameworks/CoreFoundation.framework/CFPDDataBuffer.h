/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface CFPDDataBuffer : NSObject
+(id)newBufferFromFile:(int)arg1 allowMappingIfSafe:(BOOL)arg2 ;
+(id)newBufferFromPropertyList:(void*)arg1 ;
+(id)newBufferFromCFData:(CFDataRef)arg1 ;
-(BOOL)purgable;
-(BOOL)beginAccessing;
-(void)endAccessing;
-(BOOL)validatePlist;
-(void*)copyPropertyListWithMutability:(unsigned long long)arg1 ;
-(id)copyXPCData;
-(CFDataRef)copyCFData;
-(unsigned long long)length;
-(void*)bytes;
@end

