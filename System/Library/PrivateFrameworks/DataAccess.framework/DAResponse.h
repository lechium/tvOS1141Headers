/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DAAction.h>

@interface DAResponse : DAAction {

	long long _status;

}

@property (assign,nonatomic) long long status;              //@synthesize status=_status - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setStatus:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)status;
-(id)initWithItemChangeType:(unsigned long long)arg1 changedItem:(id)arg2 serverId:(id)arg3 status:(long long)arg4 ;
@end

