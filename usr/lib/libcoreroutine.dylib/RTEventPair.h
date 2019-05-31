/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:42 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RTEventPair : NSObject {

	id _firstObject;
	id _secondObject;

}

@property (nonatomic,readonly) id firstObject;               //@synthesize firstObject=_firstObject - In the implementation block
@property (nonatomic,readonly) id secondObject;              //@synthesize secondObject=_secondObject - In the implementation block
-(id)init;
-(id)firstObject;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)secondObject;
-(id)initWithFirstObject:(id)arg1 secondObject:(id)arg2 ;
-(BOOL)isEqualToEventPair:(id)arg1 ;
@end
