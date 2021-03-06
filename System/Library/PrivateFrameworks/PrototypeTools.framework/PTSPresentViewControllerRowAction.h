/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSRowAction.h>

@interface PTSPresentViewControllerRowAction : PTSRowAction {

	/*^block*/id _viewControllerCreator;

}

@property (nonatomic,copy) id viewControllerCreator;              //@synthesize viewControllerCreator=_viewControllerCreator - In the implementation block
+(id)actionWithViewControllerCreator:(/*^block*/id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setViewControllerCreator:(id)arg1 ;
-(id)viewControllerCreator;
@end

