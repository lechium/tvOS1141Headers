/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RUIElement.h>

@class RUIPage, NSString;

@interface RUIPageElement : RUIElement {

	RUIPage* _page;

}

@property (assign,nonatomic,__weak) RUIPage * page;                      //@synthesize page=_page - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,getter=isLoading,nonatomic) BOOL loading; 
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(BOOL)isLoading;
-(RUIPage *)page;
-(void)setPage:(RUIPage *)arg1 ;
-(id)staticValues;
-(void)setLoading:(BOOL)arg1 ;
@end

