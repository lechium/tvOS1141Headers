/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFControlItem.h>
#import <libobjc.A.dylib/HFTogglableControlItem.h>

@protocol HFMediaValueSource;
@class NSString;

@interface HFMediaControlItem : HFControlItem <HFTogglableControlItem> {

	id<HFMediaValueSource> _mediaValueSource;

}

@property (nonatomic,readonly) id<HFMediaValueSource> mediaValueSource;              //@synthesize mediaValueSource=_mediaValueSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)valueClass;
-(id)initWithValueSource:(id)arg1 displayResults:(id)arg2 ;
-(id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3 ;
-(id)writeValue:(id)arg1 ;
-(id)toggleValue;
-(id)readValueAndPopulateStandardResults;
-(id)writePrimaryState:(long long)arg1 ;
-(id)togglePrimaryState;
-(id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2 ;
-(id)valueForCharacteristicValues:(id)arg1 ;
-(id)characteristicValuesForValue:(id)arg1 ;
-(id)normalizedValueForValue:(id)arg1 ;
-(long long)sortPriority;
-(id<HFMediaValueSource>)mediaValueSource;
@end

