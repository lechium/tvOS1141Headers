/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/ZoomServices.framework/ZoomServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXUIClientDelegate <NSObject>
@optional
-(id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id*)arg4;
-(BOOL)userInterfaceClient:(id)arg1 messageFromServerForWithIdentifierShouldBeProcessedAsynchronously:(unsigned long long)arg2;
-(void)userInterfaceClient:(id)arg1 processMessageFromServerAsynchronously:(id)arg2 withIdentifier:(unsigned long long)arg3 completion:(/*^block*/id)arg4;
-(id)userInterfaceClient:(id)arg1 accessQueueForProcessingMessageWithIdentifier:(unsigned long long)arg2;
-(BOOL)userInterfaceClient:(id)arg1 messageWithIdentifierRequiresWritingBlock:(unsigned long long)arg2;
-(void)userInterfaceClient:(id)arg1 willActivateUserInterfaceServiceWithInitializationMessage:(id)arg2;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;

@end

