/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:42 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface _CPPowerAssertion : NSObject {

	unsigned _assertion;
	double _timeout;
	NSString* _identifier;
	NSArray* _stack;

}

@property (assign,nonatomic) double timeout;              //@synthesize timeout=_timeout - In the implementation block
-(void)timedout;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(id)initWithIdentifier:(id)arg1 timeout:(double)arg2 ;
-(void)dealloc;
@end

