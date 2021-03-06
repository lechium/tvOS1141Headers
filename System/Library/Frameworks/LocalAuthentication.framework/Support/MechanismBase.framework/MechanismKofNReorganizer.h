/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismBase.framework/MechanismBase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MechanismBase/MechanismBase.h>

@class NSNumber;

@interface MechanismKofNReorganizer : MechanismBase {

	/*^block*/id _apply;
	long long _min;
	long long _max;
	NSNumber* _k;

}

@property (nonatomic,readonly) long long min;               //@synthesize min=_min - In the implementation block
@property (nonatomic,readonly) long long max;               //@synthesize max=_max - In the implementation block
@property (k,nonatomic,readonly) NSNumber * k;              //@synthesize k=_k - In the implementation block
-(NSNumber *)k;
-(void)runWithHints:(id)arg1 eventsDelegate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)initWithMin:(long long)arg1 max:(long long)arg2 k:(id)arg3 apply:(/*^block*/id)arg4 ;
-(id)reorganizeMechanisms:(id)arg1 k:(long long)arg2 error:(id*)arg3 ;
-(long long)min;
-(long long)max;
@end

