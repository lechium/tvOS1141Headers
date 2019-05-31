/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface TVPMusicContextMenuData : NSObject {

	NSString* _heading;
	NSArray* _menuItems;

}

@property (nonatomic,copy) NSString * heading;               //@synthesize heading=_heading - In the implementation block
@property (nonatomic,copy) NSArray * menuItems;              //@synthesize menuItems=_menuItems - In the implementation block
-(NSString *)heading;
-(void)setHeading:(NSString *)arg1 ;
-(void)setMenuItems:(NSArray *)arg1 ;
-(NSArray *)menuItems;
-(id)initWithHeading:(id)arg1 menuItems:(id)arg2 ;
-(id)initWithMenuItems:(id)arg1 ;
@end
