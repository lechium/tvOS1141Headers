/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetAppsUtilities/NATreeNode.h>

@class NSSet;

@interface NAMutableTreeNode : NATreeNode

@property (nonatomic,retain) id representedObject; 
@property (nonatomic,copy) NSSet * childNodes; 
-(void)addChildren:(id)arg1 ;
-(void)removeChild:(id)arg1 ;
-(void)addChild:(id)arg1 ;
-(void)setChildNodes:(NSSet *)arg1 ;
-(void)removeChildrenPassingTest:(/*^block*/id)arg1 ;
@end
