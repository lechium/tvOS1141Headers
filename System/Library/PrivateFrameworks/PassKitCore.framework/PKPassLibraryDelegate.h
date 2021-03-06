/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPassLibraryDelegate <NSObject>
@optional
-(void)contactlessInterfaceDidPresentFromSource:(long long)arg1;
-(void)contactlessInterfaceDidDismissFromSource:(long long)arg1;
-(void)passLibraryReceivedInterruption;
-(void)passLibrary:(id)arg1 receivedUpdatedCatalog:(id)arg2 passes:(id)arg3;
-(void)passLibrary:(id)arg1 removingPassesOfType:(unsigned long long)arg2 didUpdateWithProgress:(double)arg3;
-(void)passLibrary:(id)arg1 removingPassesOfType:(unsigned long long)arg2 didFinishWithSuccess:(BOOL)arg3;

@end

