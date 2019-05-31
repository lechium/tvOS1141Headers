/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSObject;

@interface SignpostSupportMessageArgument : NSObject {

	unsigned char _type;
	NSObject* _argumentObject;

}

@property (nonatomic,readonly) unsigned char type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSObject * argumentObject;              //@synthesize argumentObject=_argumentObject - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned char)type;
-(NSObject *)argumentObject;
-(id)initWithArgumentObject:(id)arg1 ;
@end
