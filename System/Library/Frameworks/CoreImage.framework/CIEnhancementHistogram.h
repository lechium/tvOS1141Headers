/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CIEnhancementHistogram : NSObject {

	double hist[256];

}
+(id)histogramFromData:(const double*)arg1 ;
+(id)histogramFromFloatData:(const float*)arg1 ;
+(id)histogramFromDoubleData:(const double*)arg1 ;
-(const double*)values;
@end
