//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QTMCollectionViewStyleController.h"

@class NSArray;

@interface GHKViewStyleController : QTMCollectionViewStyleController
{
    NSArray *_joinedSectionPairs;
}

- (void).cxx_destruct;
- (_Bool)noBottomInsetForSection:(long long)arg1;
- (_Bool)noTopInsetForSection:(long long)arg1;
- (_Bool)allowDividerAtIndexPath:(id)arg1 sectionOrdinalPosition:(unsigned long long)arg2 elementKind:(unsigned long long)arg3;
- (struct UIEdgeInsets)insetsAtSectionIndex:(long long)arg1;
- (void)setJoinedSections:(id)arg1;

@end
