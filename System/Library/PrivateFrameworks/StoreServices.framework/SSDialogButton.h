/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface SSDialogButton : NSObject {

	NSDictionary* _actionDictionary;
	NSString* _title;

}

@property (nonatomic,readonly) id actionParameter; 
@property (nonatomic,readonly) NSString * buttonAction; 
@property (nonatomic,readonly) NSString * URLTarget; 
@property (nonatomic,copy,readonly) NSString * buttonTitle; 
+(id)buttonWithTitle:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)buttonAction;
-(NSString *)buttonTitle;
-(id)initWithTitle:(id)arg1 actionDictionary:(id)arg2 ;
-(id)valueForActionProperty:(id)arg1 ;
-(id)actionParameter;
-(NSString *)URLTarget;
@end
