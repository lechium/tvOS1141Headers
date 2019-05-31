/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PTSRowAction : NSObject <NSCopying> {

	BOOL _deselectRowOnSuccess;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;                               //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) BOOL deselectRowOnSuccess;              //@synthesize deselectRowOnSuccess=_deselectRowOnSuccess - In the implementation block
+(id)action;
+(id)actionWithHandler:(/*^block*/id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)resolveTemplatesWithIndex:(unsigned long long)arg1 ;
-(BOOL)deselectRowOnSuccess;
-(void)setDeselectRowOnSuccess:(BOOL)arg1 ;
@end
