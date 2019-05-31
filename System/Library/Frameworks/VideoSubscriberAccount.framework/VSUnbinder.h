/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface VSUnbinder : NSObject {

	BOOL _invalid;
	NSMapTable* _bindingsByBinder;

}

@property (assign,getter=isInvalid,nonatomic) BOOL invalid;              //@synthesize invalid=_invalid - In the implementation block
@property (nonatomic,retain) NSMapTable * bindingsByBinder;              //@synthesize bindingsByBinder=_bindingsByBinder - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setInvalid:(BOOL)arg1 ;
-(NSMapTable *)bindingsByBinder;
-(void)binder:(id)arg1 didEstablishBinding:(id)arg2 ;
-(void)binder:(id)arg1 didTearDownBinding:(id)arg2 ;
-(void)setBindingsByBinder:(NSMapTable *)arg1 ;
-(BOOL)isInvalid;
@end
