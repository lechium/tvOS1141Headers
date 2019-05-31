/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMFoundation/IMFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface IMPair : NSObject <NSCopying> {

	id _first;
	id _second;

}

@property (retain) id first;               //@synthesize first=_first - In the implementation block
@property (retain) id second;              //@synthesize second=_second - In the implementation block
+(id)pairWithFirst:(id)arg1 second:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)second;
-(void)setSecond:(id)arg1 ;
-(void)setFirst:(id)arg1 ;
-(id)first;
-(id)initWithFirst:(id)arg1 second:(id)arg2 ;
@end
