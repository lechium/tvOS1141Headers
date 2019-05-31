/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailServices/MSService.h>

@interface MSMailDefaultService : MSService {

	BOOL _shouldLaunch;

}

@property (assign,nonatomic) BOOL shouldLaunchMobileMail;              //@synthesize shouldLaunch=_shouldLaunch - In the implementation block
-(id)init;
-(BOOL)_launchMobileMailSuspendedError:(id*)arg1 ;
-(id)_handleMessageSendFailure:(id)arg1 message:(id)arg2 messageIndex:(long long)arg3 context:(inout id*)arg4 ;
-(id)_createServiceOnQueue:(id)arg1 ;
-(BOOL)shouldLaunchMobileMail;
-(void)setShouldLaunchMobileMail:(BOOL)arg1 ;
@end

