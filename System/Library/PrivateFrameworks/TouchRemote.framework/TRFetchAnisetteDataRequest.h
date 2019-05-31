/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRRequestMessage.h>

@interface TRFetchAnisetteDataRequest : TRRequestMessage {

	BOOL _shouldProvision;

}

@property (assign,nonatomic) BOOL shouldProvision;              //@synthesize shouldProvision=_shouldProvision - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)shouldProvision;
-(void)setShouldProvision:(BOOL)arg1 ;
@end

