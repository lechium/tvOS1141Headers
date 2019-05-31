/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVCKAcquisitionProperties;

@interface ATVAcquisitionRequest : NSObject {

	BOOL _cancelled;
	TVCKAcquisitionProperties* _properties;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) TVCKAcquisitionProperties * properties;              //@synthesize properties=_properties - In the implementation block
@property (nonatomic,copy) id completionBlock;                                  //@synthesize completionBlock=_completionBlock - In the implementation block
@property (getter=isCancelled) BOOL cancelled;                                  //@synthesize cancelled=_cancelled - In the implementation block
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setProperties:(TVCKAcquisitionProperties *)arg1 ;
-(TVCKAcquisitionProperties *)properties;
@end
