//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVCKDataCollection.h"

@class ACAccount;

@interface TVPMyPhotoStream : TVCKDataCollection
{
    ACAccount *_appleAccount;	// 8 = 0x8
}

+ (id)collectionWithDataClient:(id)arg1 accessObject:(id)arg2;	// IMP=0x000000010003107c
+ (id)idForAppleAccount:(id)arg1;	// IMP=0x0000000100031024
@property(retain, nonatomic) ACAccount *appleAccount; // @synthesize appleAccount=_appleAccount;
- (void).cxx_destruct;	// IMP=0x000000010003158c
- (id)concreteValueForProperty:(id)arg1;	// IMP=0x0000000100031284
- (id)initWithDataClient:(id)arg1 appleAccount:(id)arg2;	// IMP=0x00000001000311ec
- (id)initWithDataClient:(id)arg1;	// IMP=0x00000001000311d4

@end

