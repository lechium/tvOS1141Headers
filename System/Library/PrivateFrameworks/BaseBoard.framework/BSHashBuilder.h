/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BaseBoard/BaseBoard-Structs.h>
@interface BSHashBuilder : NSObject {

	unsigned long long _hash;

}
+(id)builder;
-(id)appendCGFloat:(double)arg1 ;
-(id)appendFloat:(float)arg1 ;
-(id)appendCGPoint:(CGPoint)arg1 ;
-(id)appendCGSize:(CGSize)arg1 ;
-(id)appendCGRect:(CGRect)arg1 ;
-(id)appendHashingBlocks:(/*^block*/id)arg1 ;
-(id)appendSizeT:(unsigned long long)arg1 ;
-(id)appendClass:(Class)arg1 ;
-(id)appendPointer:(void*)arg1 ;
-(id)appendPoint:(CGPoint)arg1 ;
-(id)appendSize:(CGSize)arg1 ;
-(unsigned long long)hash;
-(id)appendString:(id)arg1 ;
-(id)appendObject:(id)arg1 ;
-(id)appendInteger:(long long)arg1 ;
-(id)appendBool:(BOOL)arg1 ;
-(id)appendArray:(id)arg1 ;
-(id)appendDouble:(double)arg1 ;
-(id)appendUnsignedInteger:(unsigned long long)arg1 ;
-(id)appendRect:(CGRect)arg1 ;
@end

