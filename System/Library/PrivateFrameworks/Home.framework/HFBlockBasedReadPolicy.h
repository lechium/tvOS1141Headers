/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFCharacteristicReadPolicy.h>

@class NSString;

@interface HFBlockBasedReadPolicy : NSObject <HFCharacteristicReadPolicy> {

	/*^block*/id _readPolicyBlock;

}

@property (nonatomic,copy,readonly) id readPolicyBlock;              //@synthesize readPolicyBlock=_readPolicyBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)evaluateWithCharacteristic:(id)arg1 traits:(out id*)arg2 ;
-(id)initWithReadPolicyBlock:(/*^block*/id)arg1 ;
-(id)readPolicyBlock;
@end
