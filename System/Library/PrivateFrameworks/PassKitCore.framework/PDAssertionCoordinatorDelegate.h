/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PDAssertionCoordinatorDelegate <NSObject>
@required
-(BOOL)assertionCoordinator:(id)arg1 assertionExistsOfType:(unsigned long long)arg2;
-(BOOL)assertionCoordinator:(id)arg1 canAcquireAssertion:(id)arg2;
-(void)assertionCoordinator:(id)arg1 didAcquireAssertion:(id)arg2;
-(void)assertionCoordinator:(id)arg1 didInvalidateAssertion:(id)arg2;

@end
