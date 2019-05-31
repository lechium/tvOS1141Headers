/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class NSString, NSData;

@interface AADeviceProvisioningRequest : AARequest {

	NSString* _dsid;
	NSString* _url;
	NSData* _data;

}
-(id)initWithDSID:(id)arg1 URLString:(id)arg2 requestData:(id)arg3 ;
-(id)urlRequest;
-(id)urlString;
@end

