/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol ENCypher <NSSecureCoding,NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@required
-(NSString *)identifier;
-(id)cypherData:(id)arg1 withAccountIdentity:(id)arg2 identifier:(id*)arg3 error:(id*)arg4;
-(id)decypherData:(id)arg1 withAccountIdentity:(id)arg2 signingDevicePublicKey:(id)arg3 identifier:(id)arg4 error:(id*)arg5;

@end
