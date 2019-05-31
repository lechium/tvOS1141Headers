/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRRequestMessage.h>

@class NSString;

@interface TRLegacyAnisetteDataRequest : TRRequestMessage {

	NSString* _dsid;

}

@property (nonatomic,copy) NSString * dsid;              //@synthesize dsid=_dsid - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setDsid:(NSString *)arg1 ;
-(NSString *)dsid;
@end

