/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface NWPHHandler : NSObject {

	NSArray* _allowedEntitlementGroup;
	/*function pointer*/void* _handlerFunction;

}

@property (retain) NSArray * allowedEntitlementGroup;                      //@synthesize allowedEntitlementGroup=_allowedEntitlementGroup - In the implementation block
@property (assign) /*function pointer*/void* handlerFunction;              //@synthesize handlerFunction=_handlerFunction - In the implementation block
-(id)initWithHandlerFunction:(/*function pointer*/void*)arg1 allowedEntitlementGroup:(id)arg2 ;
-(NSArray *)allowedEntitlementGroup;
-(void)setAllowedEntitlementGroup:(NSArray *)arg1 ;
-(/*function pointer*/void*)handlerFunction;
-(void)setHandlerFunction:(/*function pointer*/void*)arg1 ;
@end

