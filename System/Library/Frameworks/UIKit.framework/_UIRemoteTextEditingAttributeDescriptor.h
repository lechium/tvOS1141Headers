/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _UIRemoteTextEditingAttributeDescriptor : NSObject {

	NSString* _name;
	/*^block*/id _encoder;
	/*^block*/id _decoder;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)integerDescriptorWithName:(id)arg1 ;
+(id)boolDescriptorWithName:(id)arg1 ;
+(id)customDescriptorWithName:(id)arg1 encoder:(/*^block*/id)arg2 decoder:(/*^block*/id)arg3 ;
-(NSString *)name;
-(void)encodeWithTarget:(id)arg1 coder:(id)arg2 ;
-(void)decodeWithTarget:(id)arg1 coder:(id)arg2 ;
@end

