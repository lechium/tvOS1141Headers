/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Security.framework/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Security/SecuritydXPCCallbackProtocol.h>

@class NSString;

@interface SecuritydXPCCallback : NSObject <SecuritydXPCCallbackProtocol> {

	/*^block*/id _callback;

}

@property (copy) id callback;                                       //@synthesize callback=_callback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)callCallback:(BOOL)arg1 error:(id)arg2 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(id)initWithCallback:(/*^block*/id)arg1 ;
@end

