//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayoutAttributes.h"

@interface MTCollectionViewFlowLayoutAttributes : UICollectionViewLayoutAttributes
{
    _Bool _floating;	// 8 = 0x8
    _Bool _partiallyOffTheTop;	// 9 = 0x9
    _Bool _open;	// 10 = 0xa
    _Bool _showsSeperator;	// 11 = 0xb
    struct CGRect _naturalRect;	// 16 = 0x10
}

@property(nonatomic) struct CGRect naturalRect; // @synthesize naturalRect=_naturalRect;
@property(nonatomic) _Bool showsSeperator; // @synthesize showsSeperator=_showsSeperator;
@property(nonatomic, getter=isOpen) _Bool open; // @synthesize open=_open;
@property(nonatomic, getter=isPartiallyOffTheTop) _Bool partiallyOffTheTop; // @synthesize partiallyOffTheTop=_partiallyOffTheTop;
@property(nonatomic, getter=isFloating) _Bool floating; // @synthesize floating=_floating;
- (id)description;	// IMP=0x000000010004dc3c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010004db88
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010004d9d4
- (unsigned long long)hash;	// IMP=0x000000010004d940

@end

