/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ProgressiveResultsHandlerProtocol.h>

@interface CNXPCDataMapperProgressiveHandler : NSObject <ProgressiveResultsHandlerProtocol> {

	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;

}
-(void)receiveProgressiveContacts:(id)arg1 matchInfos:(id)arg2 ;
-(void)completedWithError:(id)arg1 ;
-(id)initWithProgressBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end
