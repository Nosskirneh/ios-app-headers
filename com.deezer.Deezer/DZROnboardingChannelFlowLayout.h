//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableSet;

@interface DZROnboardingChannelFlowLayout : UICollectionViewFlowLayout
{
    NSMutableSet *_selectedIndexPaths;
}

@property(retain, nonatomic) NSMutableSet *selectedIndexPaths; // @synthesize selectedIndexPaths=_selectedIndexPaths;
- (void).cxx_destruct;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)addSelectedIndexPath:(id)arg1;
- (id)init;

@end

