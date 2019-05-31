/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IKDataBindingPropertyPath, NSString;

@interface _IKDOMConditionalityOperation : NSObject {

	unsigned long long _type;
	IKDataBindingPropertyPath* _propertyPath;
	NSString* _literal;

}

@property (assign,nonatomic) unsigned long long type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) IKDataBindingPropertyPath * propertyPath;              //@synthesize propertyPath=_propertyPath - In the implementation block
@property (nonatomic,copy) NSString * literal;                                      //@synthesize literal=_literal - In the implementation block
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(IKDataBindingPropertyPath *)propertyPath;
-(NSString *)literal;
-(BOOL)passesForDataItem:(id)arg1 ;
-(void)setPropertyPath:(IKDataBindingPropertyPath *)arg1 ;
-(void)setLiteral:(NSString *)arg1 ;
@end
