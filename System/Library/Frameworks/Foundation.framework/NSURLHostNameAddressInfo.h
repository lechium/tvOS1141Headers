/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface NSURLHostNameAddressInfo : NSObject {

	double timestamp;
	addrinfo* addressInfo;

}
+(id)addressInfoForHost:(id)arg1 ;
+(void)asyncResolveWithCallbackClient:(id)arg1 ;
-(double)_timestamp;
-(id)_initWithAddressInfo:(addrinfo*)arg1 ;
-(addrinfo*)addrinfo;
-(void)dealloc;
@end

