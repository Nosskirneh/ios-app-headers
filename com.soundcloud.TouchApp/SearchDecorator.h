//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LayoutDecorator-Protocol.h"

@class NSString;

@interface SearchDecorator : NSObject <LayoutDecorator>
{
}

- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForDecorationViewsInRect:(struct CGRect)arg1;
- (double)offsetAdjustmentForSection:(long long)arg1 inCollectionView:(id)arg2;
- (void)prepareLayoutInCollectionView:(id)arg1 withChildLayouts:(id)arg2;
- (void)invalidateLayout;
- (void)registerDecorationViewsInLayout:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

