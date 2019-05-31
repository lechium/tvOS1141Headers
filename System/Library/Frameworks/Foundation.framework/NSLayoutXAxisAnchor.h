/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSLayoutAnchor.h>

@interface NSLayoutXAxisAnchor : NSLayoutAnchor
-(BOOL)isCompatibleWithAnchor:(id)arg1 ;
-(long long)_directionAbstraction;
-(BOOL)_validateOtherXAxisAnchorDirectionAbstraction:(long long)arg1 ;
-(BOOL)validateOtherAttribute:(long long)arg1 ;
-(id)anchorByOffsettingWithConstant:(double)arg1 ;
-(id)anchorByOffsettingWithDimension:(id)arg1 ;
-(id)anchorByOffsettingWithDimension:(id)arg1 multiplier:(double)arg2 constant:(double)arg3 ;
-(id)anchorWithOffsetToAnchor:(id)arg1 ;
-(id)offsetTo:(id)arg1 ;
-(id)distanceTo:(id)arg1 ;
-(id)offsetByDimension:(id)arg1 times:(double)arg2 plus:(double)arg3 ;
-(id)offsetByDimension:(id)arg1 ;
-(id)offsetBy:(double)arg1 ;
@end

