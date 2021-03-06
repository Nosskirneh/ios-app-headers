//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class NSString;

@interface SPTFreeTierTasteOnboardingArtistPickerCollectionViewLayoutStyle : NSObject <GLUEStyle>
{
    double _additionalItemHeight;
    double _interitemSpacing;
    unsigned long long _itemsPerRow;
    double _lineSpacing;
    struct UIEdgeInsets _sectionInset;
}

@property(nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) unsigned long long itemsPerRow; // @synthesize itemsPerRow=_itemsPerRow;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) double additionalItemHeight; // @synthesize additionalItemHeight=_additionalItemHeight;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

