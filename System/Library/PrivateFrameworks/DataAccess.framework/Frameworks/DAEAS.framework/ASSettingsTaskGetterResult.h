/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ASSettingsTaskGetterResult : NSObject {

	int _key;
	long long _status;
	id _result;

}

@property (assign,nonatomic) int key;                       //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) long long status;              //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) id result;                     //@synthesize result=_result - In the implementation block
-(void)setResult:(id)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(int)key;
-(long long)status;
-(void)setKey:(int)arg1 ;
-(id)result;
-(id)initWithKey:(int)arg1 status:(long long)arg2 result:(id)arg3 ;
@end
