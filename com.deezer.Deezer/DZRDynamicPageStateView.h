//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import "DZRDynamicPageSupplementaryView-Protocol.h"

@class NSString;

@interface DZRDynamicPageStateView : UICollectionReusableView <DZRDynamicPageSupplementaryView>
{
}

+ (struct CGSize)sizeWithSection:(id)arg1 usingBounds:(struct CGRect)arg2;
- (void)layoutSubviews;
- (void)populateWithSection:(id)arg1 withIndexPath:(id)arg2;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

