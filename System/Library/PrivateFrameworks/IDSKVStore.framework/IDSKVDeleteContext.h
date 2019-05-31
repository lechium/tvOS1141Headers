/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IDSKVStore.framework/IDSKVStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IDSKVDeleteContext : NSObject {

	char _valueType;
	unsigned long long _rowIDCutoff;

}

@property (assign,nonatomic) unsigned long long rowIDCutoff;              //@synthesize rowIDCutoff=_rowIDCutoff - In the implementation block
@property (assign,nonatomic) char valueType;                              //@synthesize valueType=_valueType - In the implementation block
-(char)valueType;
-(void)setValueType:(char)arg1 ;
-(unsigned long long)rowIDCutoff;
-(void)setRowIDCutoff:(unsigned long long)arg1 ;
@end
