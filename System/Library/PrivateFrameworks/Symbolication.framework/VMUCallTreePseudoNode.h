/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/VMUCallTreeNode.h>

@interface VMUCallTreePseudoNode : VMUCallTreeNode
-(BOOL)isPseudo;
-(id)pseudoNodeTopOfStackChild;
-(id)sortedChildrenWithPseudoNode;
-(id)largestTopOfStackPath;
-(void)addChildCountsIntoNode;
@end

